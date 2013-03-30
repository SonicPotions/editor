/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  25 Mar 2013 6:25:13pm

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

#include "MainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
    : mTabbedComponent (0)
{
    addAndMakeVisible (mTabbedComponent = new MainTabComponent());
    mTabbedComponent->setName (L"new component");


    //[UserPreSize]
	mLookAndFeel = new GreenLookAndFeel();
	mTabbedComponent->setLookAndFeel(mLookAndFeel);
    //[/UserPreSize]

    setSize (972, 690);


    //[Constructor] You can add your own custom stuff here..

	mCommandManager = new ApplicationCommandManager();
	mCommandManager->registerAllCommandsForTarget(this);
	mCommandManager->registerAllCommandsForTarget (JUCEApplication::getInstance());


	mMidiSetupPage = new AudioDemoSetupPage(mDeviceManager);

	mDeviceManager.addChangeListener(mMidiSetupPage);

//	mDeviceManager.addMidiInputCallback (String::empty, mArpEditorComponent);

	File xmlFile(File(File::getSpecialLocation(File::currentApplicationFile).getParentDirectory().getFullPathName() + String("/midi.cfg")));
	if(xmlFile.exists())
	{
		XmlDocument xmlDoc(xmlFile);
		XmlElement* xml = xmlDoc.getDocumentElement();

		mDeviceManager.initialise(0,0,xml,true);
		AudioDemoSetupPage::globalMidiOut = 	mDeviceManager.getDefaultMidiOutput () ;
		if(AudioDemoSetupPage::globalMidiOut == NULL) {
			DialogWindow::showDialog("MIDI Setup",mMidiSetupPage,this,findColour(DocumentWindow::backgroundColourId),true,false,false);
		}
		deleteAndZero(xml);
	} else {
		if(AudioDemoSetupPage::globalMidiOut == NULL) {
			DialogWindow::showDialog("MIDI Setup",mMidiSetupPage,this,findColour(DocumentWindow::backgroundColourId),true,false,false);
		}
	
	}



    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (mTabbedComponent);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff4e4e4e));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    mTabbedComponent->setBounds (0, 40, proportionOfWidth (1.0000f), 650);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component, public MenuBarModel, public ApplicationCommandTarget, public TextEditor::Listener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330000013" fixedSize="1" initialWidth="972"
                 initialHeight="690">
  <BACKGROUND backgroundColour="ff4e4e4e"/>
  <GENERICCOMPONENT name="new component" id="aeb878457c6c1308" memberName="mTabbedComponent"
                    virtualName="" explicitFocusOrder="0" pos="0 40 100% 650" class="MainTabComponent"
                    params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
