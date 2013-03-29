/*
  ==============================================================================

   This file is part of the JUCE library - "Jules' Utility Class Extensions"
   Copyright 2004-11 by Raw Material Software Ltd.

  ------------------------------------------------------------------------------

   JUCE can be redistributed and/or modified under the terms of the GNU General
   Public License (Version 2), as published by the Free Software Foundation.
   A copy of the license is included in the JUCE distribution, or can be found
   online at www.gnu.org/licenses.

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.rawmaterialsoftware.com/juce for more information.

  ==============================================================================
*/

#include "../../../core/juce_StandardHeader.h"

BEGIN_JUCE_NAMESPACE

#include "juce_Viewport.h"
#include "../lookandfeel/juce_LookAndFeel.h"


//==============================================================================
Viewport::Viewport (const String& name)
  : Component (name),
    scrollBarThickness (0),
    singleStepX (16),
    singleStepY (16),
    showHScrollbar (true),
    showVScrollbar (true),
    deleteContent (true),
    verticalScrollBar (true),
    horizontalScrollBar (false)
{
    // content holder is used to clip the contents so they don't overlap the scrollbars
    addAndMakeVisible (&contentHolder);
    contentHolder.setInterceptsMouseClicks (false, true);

    addChildComponent (&verticalScrollBar);
    addChildComponent (&horizontalScrollBar);

    verticalScrollBar.addListener (this);
    horizontalScrollBar.addListener (this);

    setInterceptsMouseClicks (false, true);
    setWantsKeyboardFocus (true);
}

Viewport::~Viewport()
{
    deleteContentComp();
}

//==============================================================================
void Viewport::visibleAreaChanged (const Rectangle<int>&)
{
}

//==============================================================================
void Viewport::deleteContentComp()
{
    if (deleteContent)
    {
        // This sets the content comp to a null pointer before deleting the old one, in case
        // anything tries to use the old one while it's in mid-deletion..
        ScopedPointer<Component> oldCompDeleter (contentComp);
        contentComp = nullptr;
    }
    else
    {
        contentComp = nullptr;
    }
}

void Viewport::setViewedComponent (Component* const newViewedComponent, const bool deleteComponentWhenNoLongerNeeded)
{
    if (contentComp.get() != newViewedComponent)
    {
        deleteContentComp();
        contentComp = newViewedComponent;
        deleteContent = deleteComponentWhenNoLongerNeeded;

        if (contentComp != nullptr)
        {
            contentHolder.addAndMakeVisible (contentComp);
            setViewPosition (0, 0);
            contentComp->addComponentListener (this);
        }

        updateVisibleArea();
    }
}

int Viewport::getMaximumVisibleWidth() const    { return contentHolder.getWidth(); }
int Viewport::getMaximumVisibleHeight() const   { return contentHolder.getHeight(); }

void Viewport::setViewPosition (const int xPixelsOffset, const int yPixelsOffset)
{
    if (contentComp != nullptr)
        contentComp->setTopLeftPosition (jmax (jmin (0, contentHolder.getWidth() - contentComp->getWidth()), jmin (0, -xPixelsOffset)),
                                         jmax (jmin (0, contentHolder.getHeight() - contentComp->getHeight()), jmin (0, -yPixelsOffset)));
}

void Viewport::setViewPosition (const Point<int>& newPosition)
{
    setViewPosition (newPosition.getX(), newPosition.getY());
}

void Viewport::setViewPositionProportionately (const double x, const double y)
{
    if (contentComp != nullptr)
        setViewPosition (jmax (0, roundToInt (x * (contentComp->getWidth() - getWidth()))),
                         jmax (0, roundToInt (y * (contentComp->getHeight() - getHeight()))));
}

bool Viewport::autoScroll (const int mouseX, const int mouseY, const int activeBorderThickness, const int maximumSpeed)
{
    if (contentComp != nullptr)
    {
        int dx = 0, dy = 0;

        if (horizontalScrollBar.isVisible() || contentComp->getX() < 0 || contentComp->getRight() > getWidth())
        {
            if (mouseX < activeBorderThickness)
                dx = activeBorderThickness - mouseX;
            else if (mouseX >= contentHolder.getWidth() - activeBorderThickness)
                dx = (contentHolder.getWidth() - activeBorderThickness) - mouseX;

            if (dx < 0)
                dx = jmax (dx, -maximumSpeed, contentHolder.getWidth() - contentComp->getRight());
            else
                dx = jmin (dx, maximumSpeed, -contentComp->getX());
        }

        if (verticalScrollBar.isVisible() || contentComp->getY() < 0 || contentComp->getBottom() > getHeight())
        {
            if (mouseY < activeBorderThickness)
                dy = activeBorderThickness - mouseY;
            else if (mouseY >= contentHolder.getHeight() - activeBorderThickness)
                dy = (contentHolder.getHeight() - activeBorderThickness) - mouseY;

            if (dy < 0)
                dy = jmax (dy, -maximumSpeed, contentHolder.getHeight() - contentComp->getBottom());
            else
                dy = jmin (dy, maximumSpeed, -contentComp->getY());
        }

        if (dx != 0 || dy != 0)
        {
            contentComp->setTopLeftPosition (contentComp->getX() + dx,
                                             contentComp->getY() + dy);

            return true;
        }
    }

    return false;
}

void Viewport::componentMovedOrResized (Component&, bool, bool)
{
    updateVisibleArea();
}

void Viewport::resized()
{
    updateVisibleArea();
}

//==============================================================================
void Viewport::updateVisibleArea()
{
    const int scrollbarWidth = getScrollBarThickness();
    const bool canShowAnyBars = getWidth() > scrollbarWidth && getHeight() > scrollbarWidth;
    const bool canShowHBar = showHScrollbar && canShowAnyBars;
    const bool canShowVBar = showVScrollbar && canShowAnyBars;

    bool hBarVisible = canShowHBar && ! horizontalScrollBar.autoHides();
    bool vBarVisible = canShowVBar && ! verticalScrollBar.autoHides();

    Rectangle<int> contentArea (getLocalBounds());

    if (contentComp != nullptr && ! contentArea.contains (contentComp->getBounds()))
    {
        hBarVisible = canShowHBar && (hBarVisible || contentComp->getX() < 0 || contentComp->getRight() > contentArea.getWidth());
        vBarVisible = canShowVBar && (vBarVisible || contentComp->getY() < 0 || contentComp->getBottom() > contentArea.getHeight());

        if (vBarVisible)
            contentArea.setWidth (getWidth() - scrollbarWidth);

        if (hBarVisible)
            contentArea.setHeight (getHeight() - scrollbarWidth);

        if (! contentArea.contains (contentComp->getBounds()))
        {
            hBarVisible = canShowHBar && (hBarVisible || contentComp->getRight() > contentArea.getWidth());
            vBarVisible = canShowVBar && (vBarVisible || contentComp->getBottom() > contentArea.getHeight());
        }
    }

    if (vBarVisible)
        contentArea.setWidth (getWidth() - scrollbarWidth);

    if (hBarVisible)
        contentArea.setHeight (getHeight() - scrollbarWidth);

    contentHolder.setBounds (contentArea);

    Rectangle<int> contentBounds;
    if (contentComp != nullptr)
        contentBounds = contentHolder.getLocalArea (contentComp, contentComp->getLocalBounds());

    Point<int> visibleOrigin (-contentBounds.getPosition());

    if (hBarVisible)
    {
        horizontalScrollBar.setBounds (0, contentArea.getHeight(), contentArea.getWidth(), scrollbarWidth);
        horizontalScrollBar.setRangeLimits (0.0, contentBounds.getWidth());
        horizontalScrollBar.setCurrentRange (visibleOrigin.getX(), contentArea.getWidth());
        horizontalScrollBar.setSingleStepSize (singleStepX);
        horizontalScrollBar.cancelPendingUpdate();
    }
    else if (canShowHBar)
    {
        visibleOrigin.setX (0);
    }

    if (vBarVisible)
    {
        verticalScrollBar.setBounds (contentArea.getWidth(), 0, scrollbarWidth, contentArea.getHeight());
        verticalScrollBar.setRangeLimits (0.0, contentBounds.getHeight());
        verticalScrollBar.setCurrentRange (visibleOrigin.getY(), contentArea.getHeight());
        verticalScrollBar.setSingleStepSize (singleStepY);
        verticalScrollBar.cancelPendingUpdate();
    }
    else if (canShowVBar)
    {
        visibleOrigin.setY (0);
    }

    // Force the visibility *after* setting the ranges to avoid flicker caused by edge conditions in the numbers.
    horizontalScrollBar.setVisible (hBarVisible);
    verticalScrollBar.setVisible (vBarVisible);

    setViewPosition (visibleOrigin);

    const Rectangle<int> visibleArea (visibleOrigin.getX(), visibleOrigin.getY(),
                                      jmin (contentBounds.getWidth() - visibleOrigin.getX(),  contentArea.getWidth()),
                                      jmin (contentBounds.getHeight() - visibleOrigin.getY(), contentArea.getHeight()));

    if (lastVisibleArea != visibleArea)
    {
        lastVisibleArea = visibleArea;
        visibleAreaChanged (visibleArea);
    }

    horizontalScrollBar.handleUpdateNowIfNeeded();
    verticalScrollBar.handleUpdateNowIfNeeded();
}

//==============================================================================
void Viewport::setSingleStepSizes (const int stepX, const int stepY)
{
    if (singleStepX != stepX || singleStepY != stepY)
    {
        singleStepX = stepX;
        singleStepY = stepY;
        updateVisibleArea();
    }
}

void Viewport::setScrollBarsShown (const bool showVerticalScrollbarIfNeeded,
                                   const bool showHorizontalScrollbarIfNeeded)
{
    if (showVScrollbar != showVerticalScrollbarIfNeeded
         || showHScrollbar != showHorizontalScrollbarIfNeeded)
    {
        showVScrollbar = showVerticalScrollbarIfNeeded;
        showHScrollbar = showHorizontalScrollbarIfNeeded;
        updateVisibleArea();
    }
}

void Viewport::setScrollBarThickness (const int thickness)
{
    if (scrollBarThickness != thickness)
    {
        scrollBarThickness = thickness;
        updateVisibleArea();
    }
}

int Viewport::getScrollBarThickness() const
{
    return scrollBarThickness > 0 ? scrollBarThickness
                                  : getLookAndFeel().getDefaultScrollbarWidth();
}

void Viewport::setScrollBarButtonVisibility (const bool buttonsVisible)
{
    verticalScrollBar.setButtonVisibility (buttonsVisible);
    horizontalScrollBar.setButtonVisibility (buttonsVisible);
}

void Viewport::scrollBarMoved (ScrollBar* scrollBarThatHasMoved, double newRangeStart)
{
    const int newRangeStartInt = roundToInt (newRangeStart);

    if (scrollBarThatHasMoved == &horizontalScrollBar)
    {
        setViewPosition (newRangeStartInt, getViewPositionY());
    }
    else if (scrollBarThatHasMoved == &verticalScrollBar)
    {
        setViewPosition (getViewPositionX(), newRangeStartInt);
    }
}

void Viewport::mouseWheelMove (const MouseEvent& e, const float wheelIncrementX, const float wheelIncrementY)
{
    if (! useMouseWheelMoveIfNeeded (e, wheelIncrementX, wheelIncrementY))
        Component::mouseWheelMove (e, wheelIncrementX, wheelIncrementY);
}

bool Viewport::useMouseWheelMoveIfNeeded (const MouseEvent& e, float wheelIncrementX, float wheelIncrementY)
{
    if (! (e.mods.isAltDown() || e.mods.isCtrlDown()))
    {
        const bool hasVertBar = verticalScrollBar.isVisible();
        const bool hasHorzBar = horizontalScrollBar.isVisible();

        if (hasHorzBar || hasVertBar)
        {
            if (wheelIncrementX != 0)
            {
                wheelIncrementX *= 14.0f * singleStepX;
                wheelIncrementX = (wheelIncrementX < 0) ? jmin (wheelIncrementX, -1.0f)
                                                        : jmax (wheelIncrementX, 1.0f);
            }

            if (wheelIncrementY != 0)
            {
                wheelIncrementY *= 14.0f * singleStepY;
                wheelIncrementY = (wheelIncrementY < 0) ? jmin (wheelIncrementY, -1.0f)
                                                        : jmax (wheelIncrementY, 1.0f);
            }

            Point<int> pos (getViewPosition());

            if (wheelIncrementX != 0 && wheelIncrementY != 0 && hasHorzBar && hasVertBar)
            {
                pos.setX (pos.getX() - roundToInt (wheelIncrementX));
                pos.setY (pos.getY() - roundToInt (wheelIncrementY));
            }
            else if (hasHorzBar && (wheelIncrementX != 0 || e.mods.isShiftDown() || ! hasVertBar))
            {
                if (wheelIncrementX == 0 && ! hasVertBar)
                    wheelIncrementX = wheelIncrementY;

                pos.setX (pos.getX() - roundToInt (wheelIncrementX));
            }
            else if (hasVertBar && wheelIncrementY != 0)
            {
                pos.setY (pos.getY() - roundToInt (wheelIncrementY));
            }

            if (pos != getViewPosition())
            {
                setViewPosition (pos);
                return true;
            }
        }
    }

    return false;
}

bool Viewport::keyPressed (const KeyPress& key)
{
    const bool isUpDownKey = key.isKeyCode (KeyPress::upKey)
                                || key.isKeyCode (KeyPress::downKey)
                                || key.isKeyCode (KeyPress::pageUpKey)
                                || key.isKeyCode (KeyPress::pageDownKey)
                                || key.isKeyCode (KeyPress::homeKey)
                                || key.isKeyCode (KeyPress::endKey);

    if (verticalScrollBar.isVisible() && isUpDownKey)
        return verticalScrollBar.keyPressed (key);

    const bool isLeftRightKey = key.isKeyCode (KeyPress::leftKey)
                                 || key.isKeyCode (KeyPress::rightKey);

    if (horizontalScrollBar.isVisible() && (isUpDownKey || isLeftRightKey))
        return horizontalScrollBar.keyPressed (key);

    return false;
}


END_JUCE_NAMESPACE
