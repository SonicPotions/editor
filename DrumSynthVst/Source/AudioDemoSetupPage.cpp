/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  26 Mar 2013 6:34:30pm

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
//[/Headers]

#include "AudioDemoSetupPage.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
MidiOutput * AudioDemoSetupPage::globalMidiOut=NULL;
//[/MiscUserDefs]

//==============================================================================
AudioDemoSetupPage::AudioDemoSetupPage (AudioDeviceManager& deviceManager_)
    : deviceManager (deviceManager_),
      deviceSelector (0)
{
    addAndMakeVisible (deviceSelector = new AudioDeviceSelectorComponent (deviceManager, 0, 0, 0, 0, true, true, true, false));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

    //[/Constructor]
}

AudioDemoSetupPage::~AudioDemoSetupPage()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (deviceSelector);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void AudioDemoSetupPage::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::lightgrey);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AudioDemoSetupPage::resized()
{
    deviceSelector->setBounds (8, 8, getWidth() - 16, getHeight() - 16);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void AudioDemoSetupPage::changeListenerCallback (ChangeBroadcaster *source)
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
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AudioDemoSetupPage" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams="AudioDeviceManager&amp; deviceManager_"
                 variableInitialisers="deviceManager (deviceManager_)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffd3d3d3"/>
  <GENERICCOMPONENT name="" id="a04c56de9f3fc537" memberName="deviceSelector" virtualName=""
                    explicitFocusOrder="0" pos="8 8 16M 16M" class="AudioDeviceSelectorComponent"
                    params="deviceManager, 0, 2, 0, 2, true, true, true, false"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
