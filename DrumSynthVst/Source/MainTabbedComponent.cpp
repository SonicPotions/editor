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

//[Headers] You can add your own extra header files here...
/*
	=========================================================
				Copyright 2013 Julian Schmidt

	This file is part of the Sonic Potions Drumsynth Editor
	=========================================================

    The Sonic Potions Drumsynth Editor is free software: you 
	can redistribute it and/or modify it under the terms of 
	the GNU General Public License as published by the Free 
	Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The Sonic Potions Drumsynth Editor is distributed in the
	hope that it will be useful, but WITHOUT ANY WARRANTY; 
	without even the implied warranty of MERCHANTABILITY or 
	FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General 
	Public License for more details.

    You should have received a copy of the GNU General 
	Public License along with the Sonic Potions Drumsynth 
	Editor. If not, see <http://www.gnu.org/licenses/>.
	=========================================================
 */
#include "AudioDemoSetupPage.h"
//[/Headers]

#include "MainTabbedComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainTabComponent::MainTabComponent ()
    : tabbedComponent (0)
{
    addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtTop));
    tabbedComponent->setTabBarDepth (30);
    tabbedComponent->addTab (L"Drum 1", Colours::lightgrey, 0, false);
    tabbedComponent->addTab (L"Drum 2", Colours::lightgrey, 0, false);
    tabbedComponent->addTab (L"Drum 3", Colours::lightgrey, 0, false);
    tabbedComponent->setCurrentTabIndex (0);


    //[UserPreSize]
	tabbedComponent->removeTab(0);
	tabbedComponent->removeTab(0);
	tabbedComponent->removeTab(0);

	tabbedComponent->addTab (L"Drum 1", Colours::lightgrey, new VoiceBasedDrumComponent(0), true);
	tabbedComponent->addTab (L"Drum 2", Colours::lightgrey, new VoiceBasedDrumComponent(1), true);
	tabbedComponent->addTab (L"Drum 3", Colours::lightgrey, new VoiceBasedDrumComponent(2), true);

	tabbedComponent->addTab (L"Snare", Colours::lightgrey, new VoiceBasedSnareComponent(3), true);
	tabbedComponent->addTab (L"Cymbal", Colours::lightgrey, new VoiceBasedCymbalComponent(4), true);
	tabbedComponent->addTab (L"Hat", Colours::lightgrey, new VoiceBasedHatComponent(5), true);


    //[/UserPreSize]

    setSize (850, 650);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainTabComponent::~MainTabComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (tabbedComponent);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainTabComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff3c3c3c));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainTabComponent::resized()
{
    tabbedComponent->setBounds (0, 0, 848, 648);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
/*
void MainTabComponent::changeListenerCallback (ChangeBroadcaster *source)
{
	//set the global midi output
	AudioDemoSetupPage::globalMidiOut = 	((AudioDeviceManager*)source)->getDefaultMidiOutput () ;
	//write settings to xml file
	XmlElement* xml = ((AudioDeviceManager*)source)->createStateXml();
	if(xml)
	{
		xml->writeToFile(File(File::getSpecialLocation(File::currentApplicationFile).getParentDirectory().getFullPathName() + String("/midi.cfg")),String::empty);
		deleteAndZero(xml);
	}

}
*/
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainTabComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="1" initialWidth="850" initialHeight="650">
  <BACKGROUND backgroundColour="ff3c3c3c"/>
  <TABBEDCOMPONENT name="new tabbed component" id="2eba903922715d52" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="0 0 848 648" orientation="top"
                   tabBarDepth="30" initialTab="0">
    <TAB name="Drum 1" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Drum 2" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Drum 3" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
