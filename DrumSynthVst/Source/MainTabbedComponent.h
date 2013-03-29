/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  26 Mar 2013 6:08:15pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_MAINTABCOMPONENT_MAINTABBEDCOMPONENT_3C36F9DA__
#define __JUCER_HEADER_MAINTABCOMPONENT_MAINTABBEDCOMPONENT_3C36F9DA__

//[Headers]     -- You can add your own extra header files here --
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
#include "../JuceLibraryCode/JuceHeader.h"
#include "VoiceBasedDrumComponent.h"
#include "VoiceBasedSnareComponent.h"
#include "VoiceBasedCymbalComponent.h"
#include "VoiceBasedHatComponent.h"


//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainTabComponent  : public Component
{
public:
    //==============================================================================
    MainTabComponent ();
    ~MainTabComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	//change listener to write midi setting to file when they change
	//void changeListenerCallback (ChangeBroadcaster *source);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    TabbedComponent* tabbedComponent;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    MainTabComponent (const MainTabComponent&);
    const MainTabComponent& operator= (const MainTabComponent&);
};


#endif   // __JUCER_HEADER_MAINTABCOMPONENT_MAINTABBEDCOMPONENT_3C36F9DA__
