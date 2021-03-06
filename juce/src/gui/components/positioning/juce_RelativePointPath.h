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

#ifndef __JUCE_RELATIVEPOINTPATH_JUCEHEADER__
#define __JUCE_RELATIVEPOINTPATH_JUCEHEADER__

#include "juce_RelativePoint.h"
#include "../../../containers/juce_OwnedArray.h"
#include "../../../containers/juce_ValueTree.h"
class DrawablePath;

//==============================================================================
/**
    A path object that consists of RelativePoint coordinates rather than the normal fixed ones.

    One of these paths can be converted into a Path object for drawing and manipulation, but
    unlike a Path, its points can be dynamic instead of just fixed.

    @see RelativePoint, RelativeCoordinate
*/
class JUCE_API  RelativePointPath
{
public:
    //==============================================================================
    RelativePointPath();
    RelativePointPath (const RelativePointPath& other);
    explicit RelativePointPath (const Path& path);
    ~RelativePointPath();

    bool operator== (const RelativePointPath& other) const noexcept;
    bool operator!= (const RelativePointPath& other) const noexcept;

    //==============================================================================
    /** Resolves this points in this path and adds them to a normal Path object. */
    void createPath (Path& path, Expression::Scope* scope) const;

    /** Returns true if the path contains any non-fixed points. */
    bool containsAnyDynamicPoints() const;

    /** Quickly swaps the contents of this path with another. */
    void swapWith (RelativePointPath& other) noexcept;

    //==============================================================================
    /** The types of element that may be contained in this path.
        @see RelativePointPath::ElementBase
    */
    enum ElementType
    {
        nullElement,
        startSubPathElement,
        closeSubPathElement,
        lineToElement,
        quadraticToElement,
        cubicToElement
    };

    //==============================================================================
    /** Base class for the elements that make up a RelativePointPath.
    */
    class JUCE_API  ElementBase
    {
    public:
        ElementBase (ElementType type);
        virtual ~ElementBase() {}
        virtual ValueTree createTree() const = 0;
        virtual void addToPath (Path& path, Expression::Scope*) const = 0;
        virtual RelativePoint* getControlPoints (int& numPoints) = 0;
        virtual ElementBase* clone() const = 0;
        bool isDynamic();

        const ElementType type;

    private:
        JUCE_DECLARE_NON_COPYABLE (ElementBase);
    };

    //==============================================================================
    class JUCE_API  StartSubPath  : public ElementBase
    {
    public:
        StartSubPath (const RelativePoint& pos);
        ValueTree createTree() const;
        void addToPath (Path& path, Expression::Scope*) const;
        RelativePoint* getControlPoints (int& numPoints);
        ElementBase* clone() const;

        RelativePoint startPos;

    private:
        JUCE_DECLARE_NON_COPYABLE (StartSubPath);
    };

    //==============================================================================
    class JUCE_API  CloseSubPath  : public ElementBase
    {
    public:
        CloseSubPath();
        ValueTree createTree() const;
        void addToPath (Path& path, Expression::Scope*) const;
        RelativePoint* getControlPoints (int& numPoints);
        ElementBase* clone() const;

    private:
        JUCE_DECLARE_NON_COPYABLE (CloseSubPath);
    };

    //==============================================================================
    class JUCE_API  LineTo  : public ElementBase
    {
    public:
        LineTo (const RelativePoint& endPoint);
        ValueTree createTree() const;
        void addToPath (Path& path, Expression::Scope*) const;
        RelativePoint* getControlPoints (int& numPoints);
        ElementBase* clone() const;

        RelativePoint endPoint;

    private:
        JUCE_DECLARE_NON_COPYABLE (LineTo);
    };

    //==============================================================================
    class JUCE_API  QuadraticTo  : public ElementBase
    {
    public:
        QuadraticTo (const RelativePoint& controlPoint, const RelativePoint& endPoint);
        ValueTree createTree() const;
        void addToPath (Path& path, Expression::Scope*) const;
        RelativePoint* getControlPoints (int& numPoints);
        ElementBase* clone() const;

        RelativePoint controlPoints[2];

    private:
        JUCE_DECLARE_NON_COPYABLE (QuadraticTo);
    };

    //==============================================================================
    class JUCE_API  CubicTo  : public ElementBase
    {
    public:
        CubicTo (const RelativePoint& controlPoint1, const RelativePoint& controlPoint2, const RelativePoint& endPoint);
        ValueTree createTree() const;
        void addToPath (Path& path, Expression::Scope*) const;
        RelativePoint* getControlPoints (int& numPoints);
        ElementBase* clone() const;

        RelativePoint controlPoints[3];

    private:
        JUCE_DECLARE_NON_COPYABLE (CubicTo);
    };

    //==============================================================================
    void addElement (ElementBase* newElement);

    //==============================================================================
    OwnedArray <ElementBase> elements;
    bool usesNonZeroWinding;

private:
    class Positioner;
    friend class Positioner;
    bool containsDynamicPoints;

    void applyTo (DrawablePath& path) const;

    RelativePointPath& operator= (const RelativePointPath&);
    JUCE_LEAK_DETECTOR (RelativePointPath);
};


#endif   // __JUCE_RELATIVEPOINTPATH_JUCEHEADER__
