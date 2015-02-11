/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  30 Mar 2013 2:49:31pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_VOICEBASEDCYMBALCOMPONENT_VOICEBASEDCYMBALCOMPONENT_423DCCD__
#define __JUCER_HEADER_VOICEBASEDCYMBALCOMPONENT_VOICEBASEDCYMBALCOMPONENT_423DCCD__

//[Headers]     -- You can add your own extra header files here --
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
#include "../JuceLibraryCode/JuceHeader.h"
#include "../drumSynthSource/Parameters.h"
#include "../controllerAssignments.h"
#include "AudioDemoSetupPage.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class VoiceBasedCymbalComponent  : public Component,
                                   public SliderListener,
                                   public ComboBoxListener,
                                   public ButtonListener
{
public:
    //==============================================================================
    VoiceBasedCymbalComponent (int voiceNr);
    ~VoiceBasedCymbalComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void initControls();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	//ScopedPointer<MidiOutput> mpMidiOut;
	int mVoiceNr;
    //[/UserVariables]

    //==============================================================================
    Slider* tune1;
    Slider* veloA1;
    Slider* veloD1;
    Slider* drive1;
    Slider* vol1;
    Slider* pan1;
    Label* label;
    Label* label2;
    Label* label3;
    Label* label6;
    Slider* slopeVelo;
    Label* label9;
    Label* label12;
    Label* label13;
    Label* label14;
    Label* label15;
    Slider* sampleRate;
    Label* label16;
    Label* label5;
    ComboBox* comboBox;
    Label* label17;
    Slider* modAmount2;
    Label* amountLabel2;
    ToggleButton* velocityModulationOnOff;
    Label* label18;
    ComboBox* outputSelectCombo;
    Label* freqLabel4;
    Slider* tune2;
    Label* label19;
    Label* label20;
    Label* freqLabel5;
    ComboBox* comboBox2;
    Slider* transVol;
    Label* label21;
    Slider* transFreq;
    Label* freqLabel6;
    Label* label22;
    Slider* filterFreq;
    Label* freqLabel7;
    Slider* filterRes;
    Label* freqLabel8;
    Label* freqLabel9;
    ComboBox* comboBox3;
    Slider* filterDrive;
    Label* label23;
    Label* label24;
    ComboBox* comboBox4;
    Label* label25;
    Slider* repeat;
    Label* label11;
    Slider* tune3;
    Slider* tune4;
    Label* label4;
    Label* label7;
    Slider* tune5;
    Label* label8;
    Label* label10;
    Slider* tune6;
    Label* freqLabel2;
    ComboBox* comboBox5;
    Label* freqLabel3;
    ComboBox* comboBox6;
    Label* label26;
    Slider* transVol2;
    Label* label27;
    Label* freqLabel10;
    Slider* transVol4;
    Slider* transVol7;
    Label* freqLabel11;
    Label* freqLabel12;
    Label* freqLabel13;
    Label* freqLabel14;
    Label* freqLabel15;
    Label* freqLabel16;
    Label* freqLabel17;
    ComboBox* comboBox7;
    ComboBox* comboBox8;
    ComboBox* comboBox9;
    ComboBox* comboBox10;
    ComboBox* comboBox11;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    VoiceBasedCymbalComponent (const VoiceBasedCymbalComponent&);
    const VoiceBasedCymbalComponent& operator= (const VoiceBasedCymbalComponent&);
};


#endif   // __JUCER_HEADER_VOICEBASEDCYMBALCOMPONENT_VOICEBASEDCYMBALCOMPONENT_423DCCD__
