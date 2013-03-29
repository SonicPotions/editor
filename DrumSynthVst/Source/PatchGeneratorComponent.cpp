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

//[Headers] You can add your own extra header files here...
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
//[/Headers]

#include "PatchGeneratorComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PatchGeneratorComponent::PatchGeneratorComponent ()
    : mNextButton (0),
      mGenerateButton (0),
      mLikeButton (0),
      mDislikeButton2 (0),
      mPrevButton (0),
      mLogTextEditor (0)
{
    addAndMakeVisible (mNextButton = new TextButton (L"Next Button"));
    mNextButton->setButtonText (L"Next");
    mNextButton->setConnectedEdges (Button::ConnectedOnLeft);
    mNextButton->addListener (this);

    addAndMakeVisible (mGenerateButton = new TextButton (L"Generate Button"));
    mGenerateButton->setButtonText (L"New Generation");
    mGenerateButton->addListener (this);

    addAndMakeVisible (mLikeButton = new TextButton (L"Like Button"));
    mLikeButton->setButtonText (L"Like");
    mLikeButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    mLikeButton->addListener (this);
    mLikeButton->setColour (TextButton::buttonColourId, Colour (0xff43f04c));
    mLikeButton->setColour (TextButton::buttonOnColourId, Colour (0xff83fa80));

    addAndMakeVisible (mDislikeButton2 = new TextButton (L"Dislike Button"));
    mDislikeButton2->setButtonText (L"Dislike");
    mDislikeButton2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    mDislikeButton2->addListener (this);
    mDislikeButton2->setColour (TextButton::buttonColourId, Colour (0xfff04343));
    mDislikeButton2->setColour (TextButton::buttonOnColourId, Colour (0xfffa8080));

    addAndMakeVisible (mPrevButton = new TextButton (L"Prev Button"));
    mPrevButton->setButtonText (L"Prev");
    mPrevButton->setConnectedEdges (Button::ConnectedOnRight);
    mPrevButton->addListener (this);

    addAndMakeVisible (mLogTextEditor = new TextEditor (L"Log Text"));
    mLogTextEditor->setMultiLine (true);
    mLogTextEditor->setReturnKeyStartsNewLine (true);
    mLogTextEditor->setReadOnly (true);
    mLogTextEditor->setScrollbarsShown (true);
    mLogTextEditor->setCaretVisible (true);
    mLogTextEditor->setPopupMenuEnabled (true);
    mLogTextEditor->setText (String::empty);


    //[UserPreSize]
	gloLogText = mLogTextEditor;
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PatchGeneratorComponent::~PatchGeneratorComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (mNextButton);
    deleteAndZero (mGenerateButton);
    deleteAndZero (mLikeButton);
    deleteAndZero (mDislikeButton2);
    deleteAndZero (mPrevButton);
    deleteAndZero (mLogTextEditor);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PatchGeneratorComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PatchGeneratorComponent::resized()
{
    mNextButton->setBounds (432, 352, 80, 24);
    mGenerateButton->setBounds (280, 48, 150, 24);
    mLikeButton->setBounds (360, 352, 70, 24);
    mDislikeButton2->setBounds (288, 352, 70, 24);
    mPrevButton->setBounds (208, 352, 80, 24);
    mLogTextEditor->setBounds (56, 88, 624, 248);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void PatchGeneratorComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == mNextButton)
    {
        //[UserButtonCode_mNextButton] -- add your button handler code here..
        //[/UserButtonCode_mNextButton]
    }
    else if (buttonThatWasClicked == mGenerateButton)
    {
        //[UserButtonCode_mGenerateButton] -- add your button handler code here..

		//ScopedPointer<Patch> father = new Patch();
		//ScopedPointer<Patch> mother = new Patch();
		//ScopedPointer<Patch> child = mPatchGenerator.generateChild(father,mother);
		mPatchGenerator.combineAllParents();
        //[/UserButtonCode_mGenerateButton]
    }
    else if (buttonThatWasClicked == mLikeButton)
    {
        //[UserButtonCode_mLikeButton] -- add your button handler code here..
        //[/UserButtonCode_mLikeButton]
    }
    else if (buttonThatWasClicked == mDislikeButton2)
    {
        //[UserButtonCode_mDislikeButton2] -- add your button handler code here..
        //[/UserButtonCode_mDislikeButton2]
    }
    else if (buttonThatWasClicked == mPrevButton)
    {
        //[UserButtonCode_mPrevButton] -- add your button handler code here..
        //[/UserButtonCode_mPrevButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PatchGeneratorComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330000013" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="Next Button" id="3bebe7b13fb04379" memberName="mNextButton"
              virtualName="" explicitFocusOrder="0" pos="432 352 80 24" buttonText="Next"
              connectedEdges="1" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Generate Button" id="de690f0eef61eccf" memberName="mGenerateButton"
              virtualName="" explicitFocusOrder="0" pos="280 48 150 24" buttonText="New Generation"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Like Button" id="7611cb52962e9221" memberName="mLikeButton"
              virtualName="" explicitFocusOrder="0" pos="360 352 70 24" bgColOff="ff43f04c"
              bgColOn="ff83fa80" buttonText="Like" connectedEdges="3" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="Dislike Button" id="c2497a337c4eecc0" memberName="mDislikeButton2"
              virtualName="" explicitFocusOrder="0" pos="288 352 70 24" bgColOff="fff04343"
              bgColOn="fffa8080" buttonText="Dislike" connectedEdges="3" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="Prev Button" id="72f363aea581764a" memberName="mPrevButton"
              virtualName="" explicitFocusOrder="0" pos="208 352 80 24" buttonText="Prev"
              connectedEdges="2" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="Log Text" id="4058a755089da1e4" memberName="mLogTextEditor"
              virtualName="" explicitFocusOrder="0" pos="56 88 624 248" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
