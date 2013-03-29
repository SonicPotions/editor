/*
	Copyright 2013 Julian Schmidt

	This file is part of the Sonic Potions Drumsynth Editor

    The Sonic Potions Drumsynth Editor is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The Sonic Potions Drumsynth Editor is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include ".\source\PatchGeneratorComponent.h"

class PatchGeneratorWindow  : public DocumentWindow
{
public:
    //==============================================================================
    PatchGeneratorWindow()
        : DocumentWindow ("Genetic Patch Generator",
                          Colours::lightgrey,
                          DocumentWindow::allButtons,
                          true)
    {
        // Create an instance of our main content component, and add it to our window..
        setContentOwned (new PatchGeneratorComponent(), true);

        // Centre the window on the screen
        centreWithSize (getWidth(), getHeight());

		this->setResizable(true,true);

        // And show it!
        setVisible (true);
    }

    ~PatchGeneratorWindow()
    {
        // (the content component will be deleted automatically, so no need to do it here)
    }

    //==============================================================================
    void closeButtonPressed()
    {
        // When the user presses the close button, we'll tell the app to quit. This
        // PatchGeneratorWindow object will be deleted by the JUCEHelloWorldApplication class.
        
    }
};