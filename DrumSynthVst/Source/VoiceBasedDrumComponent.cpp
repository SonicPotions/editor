/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  30 Mar 2013 1:12:01pm

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
#include "../Patch.h"
//[/Headers]

#include "VoiceBasedDrumComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
VoiceBasedDrumComponent::VoiceBasedDrumComponent (int voiceNr)
    : tune1 (0),
      veloA1 (0),
      veloD1 (0),
      pitchD1 (0),
      fmamnt1 (0),
      fmFreq (0),
      drive1 (0),
      vol1 (0),
      pan1 (0),
      modAmount1 (0),
      label (0),
      label2 (0),
      label3 (0),
      label4 (0),
      label6 (0),
      label7 (0),
      label8 (0),
      slopeVelo (0),
      slopeMod2 (0),
      label9 (0),
      label10 (0),
      label11 (0),
      amountLabel (0),
      freqLabel (0),
      label12 (0),
      label13 (0),
      label14 (0),
      label15 (0),
      sampleRate (0),
      label16 (0),
      freqLabel2 (0),
      freqLabel3 (0),
      toggleButton (0),
      label5 (0),
      comboBox (0),
      label17 (0),
      modAmount2 (0),
      amountLabel2 (0),
      velocityModulationOnOff (0),
      label18 (0),
      outputSelectCombo (0),
      freqLabel4 (0),
      tune2 (0),
      label19 (0),
      label20 (0),
      freqLabel5 (0),
      comboBox2 (0),
      transVol (0),
      label21 (0),
      transFreq (0),
      freqLabel6 (0),
      label22 (0),
      filterFreq (0),
      freqLabel7 (0),
      filterRes (0),
      freqLabel8 (0),
      freqLabel9 (0),
      comboBox3 (0),
      filterDrive (0),
      label23 (0),
      label24 (0),
      comboBox4 (0),
      label25 (0),
      comboBox5 (0),
      transVol2 (0),
      label26 (0),
      freqLabel10 (0),
      transVol4 (0),
      transVol7 (0),
      freqLabel11 (0),
      freqLabel12 (0),
      freqLabel13 (0),
      freqLabel14 (0),
      freqLabel15 (0),
      freqLabel16 (0),
      freqLabel17 (0),
      comboBox6 (0),
      comboBox7 (0),
      comboBox8 (0),
      comboBox9 (0),
      comboBox10 (0)
{
    addAndMakeVisible (tune1 = new Slider (L"1"));
    tune1->setRange (0, 1000, 0.01);
    tune1->setSliderStyle (Slider::Rotary);
    tune1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune1->addListener (this);

    addAndMakeVisible (veloA1 = new Slider (L"6"));
    veloA1->setRange (0, 5, 0.01);
    veloA1->setSliderStyle (Slider::Rotary);
    veloA1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloA1->addListener (this);

    addAndMakeVisible (veloD1 = new Slider (L"7"));
    veloD1->setRange (0, 5, 0.01);
    veloD1->setSliderStyle (Slider::Rotary);
    veloD1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloD1->addListener (this);

    addAndMakeVisible (pitchD1 = new Slider (L"10"));
    pitchD1->setRange (0, 5, 0.01);
    pitchD1->setSliderStyle (Slider::Rotary);
    pitchD1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pitchD1->addListener (this);

    addAndMakeVisible (fmamnt1 = new Slider (L"16"));
    fmamnt1->setRange (0, 100, 0.01);
    fmamnt1->setSliderStyle (Slider::Rotary);
    fmamnt1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmamnt1->addListener (this);

    addAndMakeVisible (fmFreq = new Slider (L"17"));
    fmFreq->setRange (0, 100, 0.01);
    fmFreq->setSliderStyle (Slider::Rotary);
    fmFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmFreq->addListener (this);

    addAndMakeVisible (drive1 = new Slider (L"40"));
    drive1->setRange (0, 100, 0.01);
    drive1->setSliderStyle (Slider::Rotary);
    drive1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    drive1->addListener (this);

    addAndMakeVisible (vol1 = new Slider (L"37"));
    vol1->setRange (0, 100, 0.01);
    vol1->setSliderStyle (Slider::Rotary);
    vol1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    vol1->addListener (this);

    addAndMakeVisible (pan1 = new Slider (L"38"));
    pan1->setRange (0, 1, 0.01);
    pan1->setSliderStyle (Slider::Rotary);
    pan1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pan1->addListener (this);

    addAndMakeVisible (modAmount1 = new Slider (L"12"));
    modAmount1->setRange (0, 100, 0.01);
    modAmount1->setSliderStyle (Slider::Rotary);
    modAmount1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modAmount1->addListener (this);

    addAndMakeVisible (label = new Label (L"new label",
                                          L"Attack"));
    label->setFont (Font (15.0000f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label2 = new Label (L"new label",
                                           L"Decay"));
    label2->setFont (Font (15.0000f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label3 = new Label (L"new label",
                                           L"Coarse"));
    label3->setFont (Font (15.0000f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label4 = new Label (L"new label",
                                           L"Modulation EG"));
    label4->setFont (Font (15.0000f, Font::bold));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label6 = new Label (L"new label",
                                           L"Amplitude Envelope"));
    label6->setFont (Font (15.0000f, Font::bold));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label7 = new Label (L"new label",
                                           L"Decay"));
    label7->setFont (Font (15.0000f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (Label::textColourId, Colours::white);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label8 = new Label (L"new label",
                                           L"Pitch mod."));
    label8->setFont (Font (15.0000f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (Label::textColourId, Colours::white);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (slopeVelo = new Slider (L"9"));
    slopeVelo->setRange (0, 5, 0.01);
    slopeVelo->setSliderStyle (Slider::Rotary);
    slopeVelo->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slopeVelo->addListener (this);

    addAndMakeVisible (slopeMod2 = new Slider (L"11"));
    slopeMod2->setRange (0, 5, 0.01);
    slopeMod2->setSliderStyle (Slider::Rotary);
    slopeMod2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slopeMod2->addListener (this);

    addAndMakeVisible (label9 = new Label (L"new label",
                                           L"Slope"));
    label9->setFont (Font (15.0000f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (Label::textColourId, Colours::white);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label10 = new Label (L"new label",
                                            L"Slope"));
    label10->setFont (Font (15.0000f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colours::white);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label11 = new Label (L"new label",
                                            L"FM"));
    label11->setFont (Font (15.0000f, Font::bold));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (amountLabel = new Label (L"new label",
                                                L"Amount"));
    amountLabel->setFont (Font (15.0000f, Font::plain));
    amountLabel->setJustificationType (Justification::centredLeft);
    amountLabel->setEditable (false, false, false);
    amountLabel->setColour (Label::textColourId, Colours::white);
    amountLabel->setColour (TextEditor::textColourId, Colours::black);
    amountLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel = new Label (L"new label",
                                              L"Freq"));
    freqLabel->setFont (Font (15.0000f, Font::plain));
    freqLabel->setJustificationType (Justification::centredLeft);
    freqLabel->setEditable (false, false, false);
    freqLabel->setColour (Label::textColourId, Colours::white);
    freqLabel->setColour (TextEditor::textColourId, Colours::black);
    freqLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label12 = new Label (L"new label",
                                            L"Mixer"));
    label12->setFont (Font (15.0000f, Font::bold));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label13 = new Label (L"new label",
                                            L"Drive"));
    label13->setFont (Font (15.0000f, Font::plain));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (Label::textColourId, Colours::white);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label14 = new Label (L"new label",
                                            L"Volume"));
    label14->setFont (Font (15.0000f, Font::plain));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (Label::textColourId, Colours::white);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label15 = new Label (L"new label",
                                            L"Pan"));
    label15->setFont (Font (15.0000f, Font::plain));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (Label::textColourId, Colours::white);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (sampleRate = new Slider (L"39"));
    sampleRate->setRange (0, 1, 0.01);
    sampleRate->setSliderStyle (Slider::Rotary);
    sampleRate->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    sampleRate->addListener (this);

    addAndMakeVisible (label16 = new Label (L"new label",
                                            L"Samplerate"));
    label16->setFont (Font (15.0000f, Font::plain));
    label16->setJustificationType (Justification::centredLeft);
    label16->setEditable (false, false, false);
    label16->setColour (Label::textColourId, Colours::white);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel2 = new Label (L"new label",
                                               L"Waveform"));
    freqLabel2->setFont (Font (15.0000f, Font::plain));
    freqLabel2->setJustificationType (Justification::centredLeft);
    freqLabel2->setEditable (false, false, false);
    freqLabel2->setColour (Label::textColourId, Colours::white);
    freqLabel2->setColour (TextEditor::textColourId, Colours::black);
    freqLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel3 = new Label (L"new label",
                                               L"Mode"));
    freqLabel3->setFont (Font (15.0000f, Font::plain));
    freqLabel3->setJustificationType (Justification::centredLeft);
    freqLabel3->setEditable (false, false, false);
    freqLabel3->setColour (Label::textColourId, Colours::white);
    freqLabel3->setColour (TextEditor::textColourId, Colours::black);
    freqLabel3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (toggleButton = new ToggleButton (L"19"));
    toggleButton->setButtonText (L"Mix Mode");
    toggleButton->addListener (this);
    toggleButton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (label5 = new Label (L"new label",
                                           L"Velocity Modulation"));
    label5->setFont (Font (15.0000f, Font::bold));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (comboBox = new ComboBox (L"13"));
    comboBox->setEditableText (false);
    comboBox->setJustificationType (Justification::centredLeft);
    comboBox->setTextWhenNothingSelected (String::empty);
    comboBox->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox->addItem (L"coarse", 1);
    comboBox->addItem (L"fine", 2);
    comboBox->addItem (L"...", 3);
    comboBox->addListener (this);

    addAndMakeVisible (label17 = new Label (L"new label",
                                            L"Destination"));
    label17->setFont (Font (15.0000f, Font::plain));
    label17->setJustificationType (Justification::centredLeft);
    label17->setEditable (false, false, false);
    label17->setColour (Label::textColourId, Colours::white);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (modAmount2 = new Slider (L"14"));
    modAmount2->setRange (0, 100, 0.01);
    modAmount2->setSliderStyle (Slider::Rotary);
    modAmount2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modAmount2->addListener (this);

    addAndMakeVisible (amountLabel2 = new Label (L"new label",
                                                 L"Amount"));
    amountLabel2->setFont (Font (15.0000f, Font::plain));
    amountLabel2->setJustificationType (Justification::centredLeft);
    amountLabel2->setEditable (false, false, false);
    amountLabel2->setColour (Label::textColourId, Colours::white);
    amountLabel2->setColour (TextEditor::textColourId, Colours::black);
    amountLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (velocityModulationOnOff = new ToggleButton (L"15"));
    velocityModulationOnOff->setButtonText (L"Amplitude Modulation");
    velocityModulationOnOff->addListener (this);
    velocityModulationOnOff->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (label18 = new Label (L"new label",
                                            L"Output"));
    label18->setFont (Font (15.0000f, Font::plain));
    label18->setJustificationType (Justification::centredLeft);
    label18->setEditable (false, false, false);
    label18->setColour (Label::textColourId, Colours::white);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (outputSelectCombo = new ComboBox (L"41"));
    outputSelectCombo->setEditableText (false);
    outputSelectCombo->setJustificationType (Justification::centredLeft);
    outputSelectCombo->setTextWhenNothingSelected (String::empty);
    outputSelectCombo->setTextWhenNoChoicesAvailable (L"(no choices)");
    outputSelectCombo->addItem (L"Stereo 1", 1);
    outputSelectCombo->addItem (L"Stereo 2", 2);
    outputSelectCombo->addItem (L"L1", 3);
    outputSelectCombo->addItem (L"R1", 4);
    outputSelectCombo->addItem (L"L2", 5);
    outputSelectCombo->addItem (L"R2", 6);
    outputSelectCombo->addListener (this);

    addAndMakeVisible (freqLabel4 = new Label (L"new label",
                                               L"Waveform"));
    freqLabel4->setFont (Font (15.0000f, Font::plain));
    freqLabel4->setJustificationType (Justification::centredLeft);
    freqLabel4->setEditable (false, false, false);
    freqLabel4->setColour (Label::textColourId, Colours::white);
    freqLabel4->setColour (TextEditor::textColourId, Colours::black);
    freqLabel4->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (tune2 = new Slider (L"2"));
    tune2->setRange (0, 1000, 0.01);
    tune2->setSliderStyle (Slider::Rotary);
    tune2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune2->addListener (this);

    addAndMakeVisible (label19 = new Label (L"new label",
                                            L"Fine"));
    label19->setFont (Font (15.0000f, Font::plain));
    label19->setJustificationType (Justification::centredLeft);
    label19->setEditable (false, false, false);
    label19->setColour (Label::textColourId, Colours::white);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label20 = new Label (L"new label",
                                            L"Transient Generator"));
    label20->setFont (Font (15.0000f, Font::bold));
    label20->setJustificationType (Justification::centredLeft);
    label20->setEditable (false, false, false);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel5 = new Label (L"new label",
                                               L"Waveform"));
    freqLabel5->setFont (Font (15.0000f, Font::plain));
    freqLabel5->setJustificationType (Justification::centredLeft);
    freqLabel5->setEditable (false, false, false);
    freqLabel5->setColour (Label::textColourId, Colours::white);
    freqLabel5->setColour (TextEditor::textColourId, Colours::black);
    freqLabel5->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (comboBox2 = new ComboBox (L"22"));
    comboBox2->setEditableText (false);
    comboBox2->setJustificationType (Justification::centredLeft);
    comboBox2->setTextWhenNothingSelected (String::empty);
    comboBox2->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox2->addItem (L"click", 1);
    comboBox2->addItem (L"plop", 2);
    comboBox2->addItem (L"...", 3);
    comboBox2->addListener (this);

    addAndMakeVisible (transVol = new Slider (L"23"));
    transVol->setRange (0, 100, 0.01);
    transVol->setSliderStyle (Slider::Rotary);
    transVol->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    transVol->addListener (this);

    addAndMakeVisible (label21 = new Label (L"new label",
                                            L"Volume"));
    label21->setFont (Font (15.0000f, Font::plain));
    label21->setJustificationType (Justification::centredLeft);
    label21->setEditable (false, false, false);
    label21->setColour (Label::textColourId, Colours::white);
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (transFreq = new Slider (L"24"));
    transFreq->setRange (0, 100, 0.01);
    transFreq->setSliderStyle (Slider::Rotary);
    transFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    transFreq->addListener (this);

    addAndMakeVisible (freqLabel6 = new Label (L"new label",
                                               L"Freq"));
    freqLabel6->setFont (Font (15.0000f, Font::plain));
    freqLabel6->setJustificationType (Justification::centredLeft);
    freqLabel6->setEditable (false, false, false);
    freqLabel6->setColour (Label::textColourId, Colours::white);
    freqLabel6->setColour (TextEditor::textColourId, Colours::black);
    freqLabel6->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label22 = new Label (L"new label",
                                            L"Filter"));
    label22->setFont (Font (15.0000f, Font::bold));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (filterFreq = new Slider (L"25"));
    filterFreq->setRange (0, 100, 0.01);
    filterFreq->setSliderStyle (Slider::Rotary);
    filterFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    filterFreq->addListener (this);

    addAndMakeVisible (freqLabel7 = new Label (L"new label",
                                               L"Freq"));
    freqLabel7->setFont (Font (15.0000f, Font::plain));
    freqLabel7->setJustificationType (Justification::centredLeft);
    freqLabel7->setEditable (false, false, false);
    freqLabel7->setColour (Label::textColourId, Colours::white);
    freqLabel7->setColour (TextEditor::textColourId, Colours::black);
    freqLabel7->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (filterRes = new Slider (L"26"));
    filterRes->setRange (0, 100, 0.01);
    filterRes->setSliderStyle (Slider::Rotary);
    filterRes->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    filterRes->addListener (this);

    addAndMakeVisible (freqLabel8 = new Label (L"new label",
                                               L"Reso"));
    freqLabel8->setFont (Font (15.0000f, Font::plain));
    freqLabel8->setJustificationType (Justification::centredLeft);
    freqLabel8->setEditable (false, false, false);
    freqLabel8->setColour (Label::textColourId, Colours::white);
    freqLabel8->setColour (TextEditor::textColourId, Colours::black);
    freqLabel8->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel9 = new Label (L"new label",
                                               L"Type"));
    freqLabel9->setFont (Font (15.0000f, Font::plain));
    freqLabel9->setJustificationType (Justification::centredLeft);
    freqLabel9->setEditable (false, false, false);
    freqLabel9->setColour (Label::textColourId, Colours::white);
    freqLabel9->setColour (TextEditor::textColourId, Colours::black);
    freqLabel9->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (comboBox3 = new ComboBox (L"27"));
    comboBox3->setEditableText (false);
    comboBox3->setJustificationType (Justification::centredLeft);
    comboBox3->setTextWhenNothingSelected (String::empty);
    comboBox3->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox3->addItem (L"LP", 1);
    comboBox3->addItem (L"HP", 2);
    comboBox3->addItem (L"BP", 3);
    comboBox3->addItem (L"Unity Gain BP", 4);
    comboBox3->addItem (L"Notch", 5);
    comboBox3->addItem (L"Peak", 6);
    comboBox3->addListener (this);

    addAndMakeVisible (filterDrive = new Slider (L"28"));
    filterDrive->setRange (0, 100, 0.01);
    filterDrive->setSliderStyle (Slider::Rotary);
    filterDrive->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    filterDrive->addListener (this);

    addAndMakeVisible (label23 = new Label (L"new label",
                                            L"Drive"));
    label23->setFont (Font (15.0000f, Font::plain));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (Label::textColourId, Colours::white);
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label24 = new Label (L"new label",
                                            L"Oscillator"));
    label24->setFont (Font (15.0000f, Font::bold));
    label24->setJustificationType (Justification::centredLeft);
    label24->setEditable (false, false, false);
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (comboBox4 = new ComboBox (L"4"));
    comboBox4->setEditableText (false);
    comboBox4->setJustificationType (Justification::centredLeft);
    comboBox4->setTextWhenNothingSelected (String::empty);
    comboBox4->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox4->addItem (L"Sine", 1);
    comboBox4->addItem (L"Tri", 2);
    comboBox4->addItem (L"Saw", 3);
    comboBox4->addItem (L"Rec", 4);
    comboBox4->addItem (L"Noise", 5);
    comboBox4->addItem (L"Crash", 6);
    comboBox4->addListener (this);

    addAndMakeVisible (label25 = new Label (L"new label",
                                            L"Routing"));
    label25->setFont (Font (15.0000f, Font::bold));
    label25->setJustificationType (Justification::centredLeft);
    label25->setEditable (false, false, false);
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (comboBox5 = new ComboBox (L"18"));
    comboBox5->setEditableText (false);
    comboBox5->setJustificationType (Justification::centredLeft);
    comboBox5->setTextWhenNothingSelected (String::empty);
    comboBox5->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox5->addItem (L"Sine", 1);
    comboBox5->addItem (L"Tri", 2);
    comboBox5->addItem (L"Saw", 3);
    comboBox5->addItem (L"Rec", 4);
    comboBox5->addItem (L"Noise", 5);
    comboBox5->addItem (L"Crash", 6);
    comboBox5->addListener (this);

    addAndMakeVisible (transVol2 = new Slider (L"29"));
    transVol2->setRange (0, 100, 0.01);
    transVol2->setSliderStyle (Slider::Rotary);
    transVol2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    transVol2->addListener (this);

    addAndMakeVisible (label26 = new Label (L"new label",
                                            L"LFO"));
    label26->setFont (Font (15.0000f, Font::bold));
    label26->setJustificationType (Justification::centredLeft);
    label26->setEditable (false, false, false);
    label26->setColour (TextEditor::textColourId, Colours::black);
    label26->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel10 = new Label (L"new label",
                                                L"Freq"));
    freqLabel10->setFont (Font (15.0000f, Font::plain));
    freqLabel10->setJustificationType (Justification::centredLeft);
    freqLabel10->setEditable (false, false, false);
    freqLabel10->setColour (Label::textColourId, Colours::white);
    freqLabel10->setColour (TextEditor::textColourId, Colours::black);
    freqLabel10->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (transVol4 = new Slider (L"31"));
    transVol4->setRange (0, 100, 0.01);
    transVol4->setSliderStyle (Slider::Rotary);
    transVol4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    transVol4->addListener (this);

    addAndMakeVisible (transVol7 = new Slider (L"34"));
    transVol7->setRange (0, 100, 0.01);
    transVol7->setSliderStyle (Slider::Rotary);
    transVol7->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    transVol7->addListener (this);

    addAndMakeVisible (freqLabel11 = new Label (L"new label",
                                                L"sync"));
    freqLabel11->setFont (Font (15.0000f, Font::plain));
    freqLabel11->setJustificationType (Justification::centredLeft);
    freqLabel11->setEditable (false, false, false);
    freqLabel11->setColour (Label::textColourId, Colours::white);
    freqLabel11->setColour (TextEditor::textColourId, Colours::black);
    freqLabel11->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel12 = new Label (L"new label",
                                                L"amount"));
    freqLabel12->setFont (Font (15.0000f, Font::plain));
    freqLabel12->setJustificationType (Justification::centredLeft);
    freqLabel12->setEditable (false, false, false);
    freqLabel12->setColour (Label::textColourId, Colours::white);
    freqLabel12->setColour (TextEditor::textColourId, Colours::black);
    freqLabel12->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel13 = new Label (L"new label",
                                                L"waveform"));
    freqLabel13->setFont (Font (15.0000f, Font::plain));
    freqLabel13->setJustificationType (Justification::centredLeft);
    freqLabel13->setEditable (false, false, false);
    freqLabel13->setColour (Label::textColourId, Colours::white);
    freqLabel13->setColour (TextEditor::textColourId, Colours::black);
    freqLabel13->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel14 = new Label (L"new label",
                                                L"retrigger"));
    freqLabel14->setFont (Font (15.0000f, Font::plain));
    freqLabel14->setJustificationType (Justification::centredLeft);
    freqLabel14->setEditable (false, false, false);
    freqLabel14->setColour (Label::textColourId, Colours::white);
    freqLabel14->setColour (TextEditor::textColourId, Colours::black);
    freqLabel14->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel15 = new Label (L"new label",
                                                L"offset"));
    freqLabel15->setFont (Font (15.0000f, Font::plain));
    freqLabel15->setJustificationType (Justification::centredLeft);
    freqLabel15->setEditable (false, false, false);
    freqLabel15->setColour (Label::textColourId, Colours::white);
    freqLabel15->setColour (TextEditor::textColourId, Colours::black);
    freqLabel15->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel16 = new Label (L"new label",
                                                L"voice"));
    freqLabel16->setFont (Font (15.0000f, Font::plain));
    freqLabel16->setJustificationType (Justification::centredLeft);
    freqLabel16->setEditable (false, false, false);
    freqLabel16->setColour (Label::textColourId, Colours::white);
    freqLabel16->setColour (TextEditor::textColourId, Colours::black);
    freqLabel16->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (freqLabel17 = new Label (L"new label",
                                                L"Destination"));
    freqLabel17->setFont (Font (15.0000f, Font::plain));
    freqLabel17->setJustificationType (Justification::centredLeft);
    freqLabel17->setEditable (false, false, false);
    freqLabel17->setColour (Label::textColourId, Colours::white);
    freqLabel17->setColour (TextEditor::textColourId, Colours::black);
    freqLabel17->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (comboBox6 = new ComboBox (L"32"));
    comboBox6->setEditableText (false);
    comboBox6->setJustificationType (Justification::centredLeft);
    comboBox6->setTextWhenNothingSelected (String::empty);
    comboBox6->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox6->addItem (L"Sine", 1);
    comboBox6->addItem (L"Tri", 2);
    comboBox6->addItem (L"Saw", 3);
    comboBox6->addItem (L"Rec", 4);
    comboBox6->addItem (L"Noise", 5);
    comboBox6->addItem (L"Crash", 6);
    comboBox6->addListener (this);

    addAndMakeVisible (comboBox7 = new ComboBox (L"33"));
    comboBox7->setEditableText (false);
    comboBox7->setJustificationType (Justification::centredLeft);
    comboBox7->setTextWhenNothingSelected (String::empty);
    comboBox7->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox7->addItem (L"Sine", 1);
    comboBox7->addItem (L"Tri", 2);
    comboBox7->addItem (L"Saw", 3);
    comboBox7->addItem (L"Rec", 4);
    comboBox7->addItem (L"Noise", 5);
    comboBox7->addItem (L"Crash", 6);
    comboBox7->addListener (this);

    addAndMakeVisible (comboBox8 = new ComboBox (L"35"));
    comboBox8->setEditableText (false);
    comboBox8->setJustificationType (Justification::centredLeft);
    comboBox8->setTextWhenNothingSelected (String::empty);
    comboBox8->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox8->addItem (L"Sine", 1);
    comboBox8->addItem (L"Tri", 2);
    comboBox8->addItem (L"Saw", 3);
    comboBox8->addItem (L"Rec", 4);
    comboBox8->addItem (L"Noise", 5);
    comboBox8->addItem (L"Crash", 6);
    comboBox8->addListener (this);

    addAndMakeVisible (comboBox9 = new ComboBox (L"30"));
    comboBox9->setEditableText (false);
    comboBox9->setJustificationType (Justification::centredLeft);
    comboBox9->setTextWhenNothingSelected (String::empty);
    comboBox9->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox9->addItem (L"Sine", 1);
    comboBox9->addItem (L"Tri", 2);
    comboBox9->addItem (L"Saw", 3);
    comboBox9->addItem (L"Rec", 4);
    comboBox9->addItem (L"Noise", 5);
    comboBox9->addItem (L"Crash", 6);
    comboBox9->addListener (this);

    addAndMakeVisible (comboBox10 = new ComboBox (L"36"));
    comboBox10->setEditableText (false);
    comboBox10->setJustificationType (Justification::centredLeft);
    comboBox10->setTextWhenNothingSelected (String::empty);
    comboBox10->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox10->addItem (L"coarse", 1);
    comboBox10->addItem (L"fine", 2);
    comboBox10->addItem (L"...", 3);
    comboBox10->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (850, 600);


    //[Constructor] You can add your own custom stuff here..
		StringArray devices = MidiOutput::getDevices();

	for(int i=0;i<devices.size();i++)
		DBG(devices[i]);
//	mpMidiOut = MidiOutput::openDevice (1);

	mVoiceNr = voiceNr;

	initControls();
    //[/Constructor]
}

VoiceBasedDrumComponent::~VoiceBasedDrumComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (tune1);
    deleteAndZero (veloA1);
    deleteAndZero (veloD1);
    deleteAndZero (pitchD1);
    deleteAndZero (fmamnt1);
    deleteAndZero (fmFreq);
    deleteAndZero (drive1);
    deleteAndZero (vol1);
    deleteAndZero (pan1);
    deleteAndZero (modAmount1);
    deleteAndZero (label);
    deleteAndZero (label2);
    deleteAndZero (label3);
    deleteAndZero (label4);
    deleteAndZero (label6);
    deleteAndZero (label7);
    deleteAndZero (label8);
    deleteAndZero (slopeVelo);
    deleteAndZero (slopeMod2);
    deleteAndZero (label9);
    deleteAndZero (label10);
    deleteAndZero (label11);
    deleteAndZero (amountLabel);
    deleteAndZero (freqLabel);
    deleteAndZero (label12);
    deleteAndZero (label13);
    deleteAndZero (label14);
    deleteAndZero (label15);
    deleteAndZero (sampleRate);
    deleteAndZero (label16);
    deleteAndZero (freqLabel2);
    deleteAndZero (freqLabel3);
    deleteAndZero (toggleButton);
    deleteAndZero (label5);
    deleteAndZero (comboBox);
    deleteAndZero (label17);
    deleteAndZero (modAmount2);
    deleteAndZero (amountLabel2);
    deleteAndZero (velocityModulationOnOff);
    deleteAndZero (label18);
    deleteAndZero (outputSelectCombo);
    deleteAndZero (freqLabel4);
    deleteAndZero (tune2);
    deleteAndZero (label19);
    deleteAndZero (label20);
    deleteAndZero (freqLabel5);
    deleteAndZero (comboBox2);
    deleteAndZero (transVol);
    deleteAndZero (label21);
    deleteAndZero (transFreq);
    deleteAndZero (freqLabel6);
    deleteAndZero (label22);
    deleteAndZero (filterFreq);
    deleteAndZero (freqLabel7);
    deleteAndZero (filterRes);
    deleteAndZero (freqLabel8);
    deleteAndZero (freqLabel9);
    deleteAndZero (comboBox3);
    deleteAndZero (filterDrive);
    deleteAndZero (label23);
    deleteAndZero (label24);
    deleteAndZero (comboBox4);
    deleteAndZero (label25);
    deleteAndZero (comboBox5);
    deleteAndZero (transVol2);
    deleteAndZero (label26);
    deleteAndZero (freqLabel10);
    deleteAndZero (transVol4);
    deleteAndZero (transVol7);
    deleteAndZero (freqLabel11);
    deleteAndZero (freqLabel12);
    deleteAndZero (freqLabel13);
    deleteAndZero (freqLabel14);
    deleteAndZero (freqLabel15);
    deleteAndZero (freqLabel16);
    deleteAndZero (freqLabel17);
    deleteAndZero (comboBox6);
    deleteAndZero (comboBox7);
    deleteAndZero (comboBox8);
    deleteAndZero (comboBox9);
    deleteAndZero (comboBox10);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void VoiceBasedDrumComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff494949));

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (543.0f, 21.0f, 289.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (272.0f, 21.0f, 256.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (16.0f, 21.0f, 248.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (16.0f, 169.0f, 248.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (272.0f, 169.0f, 256.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (544.0f, 169.0f, 288.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (16.0f, 321.0f, 248.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (272.0f, 321.0f, 256.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (544.0f, 321.0f, 288.0f, 15.0f, 4.5000f);

    g.setColour (Colour (0xff0bb801));
    g.fillRoundedRectangle (16.0f, 465.0f, 512.0f, 15.0f, 4.5000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void VoiceBasedDrumComponent::resized()
{
    tune1->setBounds (24, 64, 48, 68);
    veloA1->setBounds (24, 216, 48, 68);
    veloD1->setBounds (96, 216, 48, 68);
    pitchD1->setBounds (288, 216, 48, 68);
    fmamnt1->setBounds (288, 64, 48, 68);
    fmFreq->setBounds (360, 64, 48, 68);
    drive1->setBounds (768, 64, 48, 68);
    vol1->setBounds (552, 64, 48, 68);
    pan1->setBounds (624, 64, 48, 68);
    modAmount1->setBounds (432, 216, 48, 68);
    label->setBounds (24, 192, 56, 24);
    label2->setBounds (96, 192, 54, 24);
    label3->setBounds (24, 40, 54, 24);
    label4->setBounds (272, 164, 160, 24);
    label6->setBounds (16, 164, 160, 24);
    label7->setBounds (288, 192, 54, 24);
    label8->setBounds (432, 192, 80, 24);
    slopeVelo->setBounds (168, 216, 48, 68);
    slopeMod2->setBounds (360, 216, 48, 68);
    label9->setBounds (168, 192, 54, 24);
    label10->setBounds (360, 192, 54, 24);
    label11->setBounds (280, 16, 160, 24);
    amountLabel->setBounds (288, 40, 72, 24);
    freqLabel->setBounds (368, 40, 72, 24);
    label12->setBounds (552, 16, 160, 24);
    label13->setBounds (768, 40, 54, 24);
    label14->setBounds (552, 40, 54, 24);
    label15->setBounds (632, 40, 54, 24);
    sampleRate->setBounds (696, 64, 48, 68);
    label16->setBounds (680, 40, 88, 24);
    freqLabel2->setBounds (432, 40, 72, 24);
    freqLabel3->setBounds (440, 88, 72, 24);
    toggleButton->setBounds (432, 112, 144, 24);
    label5->setBounds (272, 317, 160, 24);
    comboBox->setBounds (288, 368, 144, 24);
    label17->setBounds (280, 344, 112, 24);
    modAmount2->setBounds (440, 368, 48, 68);
    amountLabel2->setBounds (448, 344, 72, 24);
    velocityModulationOnOff->setBounds (288, 408, 144, 24);
    label18->setBounds (560, 344, 112, 24);
    outputSelectCombo->setBounds (624, 344, 136, 24);
    freqLabel4->setBounds (168, 40, 72, 24);
    tune2->setBounds (96, 64, 48, 68);
    label19->setBounds (104, 40, 54, 24);
    label20->setBounds (15, 316, 160, 24);
    freqLabel5->setBounds (184, 344, 72, 24);
    comboBox2->setBounds (184, 392, 72, 24);
    transVol->setBounds (24, 368, 48, 68);
    label21->setBounds (24, 344, 54, 24);
    transFreq->setBounds (96, 368, 48, 68);
    freqLabel6->setBounds (104, 344, 72, 24);
    label22->setBounds (544, 165, 160, 24);
    filterFreq->setBounds (552, 216, 48, 68);
    freqLabel7->setBounds (560, 192, 72, 24);
    filterRes->setBounds (624, 216, 48, 68);
    freqLabel8->setBounds (632, 192, 72, 24);
    freqLabel9->setBounds (776, 192, 72, 24);
    comboBox3->setBounds (768, 232, 64, 24);
    filterDrive->setBounds (696, 216, 48, 68);
    label23->setBounds (696, 192, 54, 24);
    label24->setBounds (16, 16, 160, 24);
    comboBox4->setBounds (168, 80, 81, 24);
    label25->setBounds (543, 316, 160, 24);
    comboBox5->setBounds (424, 64, 81, 24);
    transVol2->setBounds (32, 504, 48, 68);
    label26->setBounds (17, 460, 160, 24);
    freqLabel10->setBounds (40, 480, 72, 24);
    transVol4->setBounds (104, 504, 48, 68);
    transVol7->setBounds (176, 504, 48, 68);
    freqLabel11->setBounds (440, 480, 48, 24);
    freqLabel12->setBounds (104, 480, 64, 24);
    freqLabel13->setBounds (248, 480, 64, 24);
    freqLabel14->setBounds (248, 528, 64, 24);
    freqLabel15->setBounds (176, 480, 64, 24);
    freqLabel16->setBounds (344, 480, 64, 24);
    freqLabel17->setBounds (344, 528, 120, 24);
    comboBox6->setBounds (248, 504, 81, 24);
    comboBox7->setBounds (248, 552, 81, 24);
    comboBox8->setBounds (344, 504, 81, 24);
    comboBox9->setBounds (440, 504, 81, 24);
    comboBox10->setBounds (344, 552, 176, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void VoiceBasedDrumComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]

	int indexNr = sliderThatWasMoved->getName().getIntValue() - 1;
	int parameterNr = controllerAssignments[mVoiceNr][indexNr];

	MidiMessage midi;
	if(parameterNr <= 0x7f)
	{
		int min = sliderThatWasMoved->getMinimum();
		int value = (int)(sliderThatWasMoved->getValue());
		if(min<0) value -=min; //bring pm63 to 0b127 tange

		 midi = MidiMessage(MIDI_CC, parameterNr+1,value);
		 if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
	} else
	{
		//NRPN
		int nrpnNr = parameterNr-128;
		midi = MidiMessage(MIDI_CC, NRPN_FINE,nrpnNr&0x7f);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
		midi = MidiMessage(MIDI_CC, NRPN_COARSE,(nrpnNr>>7)&0x7f);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);

		int min = sliderThatWasMoved->getMinimum();
		int value = (int)(sliderThatWasMoved->getValue());
		if(min<0) value -=min; //bring pm63 to 0b127 tange
		midi = MidiMessage(MIDI_CC, DATA_ENTRY,value);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
		//midi = MidiMessage(MIDI_CC2, parameterNr-127,(int)(sliderThatWasMoved->getValue()/sliderThatWasMoved->getMaximum()*127));
	}

    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == tune1)
    {
        //[UserSliderCode_tune1] -- add your slider handling code here..
        //[/UserSliderCode_tune1]
    }
    else if (sliderThatWasMoved == veloA1)
    {
        //[UserSliderCode_veloA1] -- add your slider handling code here..
        //[/UserSliderCode_veloA1]
    }
    else if (sliderThatWasMoved == veloD1)
    {
        //[UserSliderCode_veloD1] -- add your slider handling code here..
        //[/UserSliderCode_veloD1]
    }
    else if (sliderThatWasMoved == pitchD1)
    {
        //[UserSliderCode_pitchD1] -- add your slider handling code here..
        //[/UserSliderCode_pitchD1]
    }
    else if (sliderThatWasMoved == fmamnt1)
    {
        //[UserSliderCode_fmamnt1] -- add your slider handling code here..
        //[/UserSliderCode_fmamnt1]
    }
    else if (sliderThatWasMoved == fmFreq)
    {
        //[UserSliderCode_fmFreq] -- add your slider handling code here..
        //[/UserSliderCode_fmFreq]
    }
    else if (sliderThatWasMoved == drive1)
    {
        //[UserSliderCode_drive1] -- add your slider handling code here..
        //[/UserSliderCode_drive1]
    }
    else if (sliderThatWasMoved == vol1)
    {
        //[UserSliderCode_vol1] -- add your slider handling code here..
        //[/UserSliderCode_vol1]
    }
    else if (sliderThatWasMoved == pan1)
    {
        //[UserSliderCode_pan1] -- add your slider handling code here..
        //[/UserSliderCode_pan1]
    }
    else if (sliderThatWasMoved == modAmount1)
    {
        //[UserSliderCode_modAmount1] -- add your slider handling code here..
        //[/UserSliderCode_modAmount1]
    }
    else if (sliderThatWasMoved == slopeVelo)
    {
        //[UserSliderCode_slopeVelo] -- add your slider handling code here..
        //[/UserSliderCode_slopeVelo]
    }
    else if (sliderThatWasMoved == slopeMod2)
    {
        //[UserSliderCode_slopeMod2] -- add your slider handling code here..
        //[/UserSliderCode_slopeMod2]
    }
    else if (sliderThatWasMoved == sampleRate)
    {
        //[UserSliderCode_sampleRate] -- add your slider handling code here..
        //[/UserSliderCode_sampleRate]
    }
    else if (sliderThatWasMoved == modAmount2)
    {
        //[UserSliderCode_modAmount2] -- add your slider handling code here..
        //[/UserSliderCode_modAmount2]
    }
    else if (sliderThatWasMoved == tune2)
    {
        //[UserSliderCode_tune2] -- add your slider handling code here..
        //[/UserSliderCode_tune2]
    }
    else if (sliderThatWasMoved == transVol)
    {
        //[UserSliderCode_transVol] -- add your slider handling code here..
        //[/UserSliderCode_transVol]
    }
    else if (sliderThatWasMoved == transFreq)
    {
        //[UserSliderCode_transFreq] -- add your slider handling code here..
        //[/UserSliderCode_transFreq]
    }
    else if (sliderThatWasMoved == filterFreq)
    {
        //[UserSliderCode_filterFreq] -- add your slider handling code here..
        //[/UserSliderCode_filterFreq]
    }
    else if (sliderThatWasMoved == filterRes)
    {
        //[UserSliderCode_filterRes] -- add your slider handling code here..
        //[/UserSliderCode_filterRes]
    }
    else if (sliderThatWasMoved == filterDrive)
    {
        //[UserSliderCode_filterDrive] -- add your slider handling code here..
        //[/UserSliderCode_filterDrive]
    }
    else if (sliderThatWasMoved == transVol2)
    {
        //[UserSliderCode_transVol2] -- add your slider handling code here..
        //[/UserSliderCode_transVol2]
    }
    else if (sliderThatWasMoved == transVol4)
    {
        //[UserSliderCode_transVol4] -- add your slider handling code here..
        //[/UserSliderCode_transVol4]
    }
    else if (sliderThatWasMoved == transVol7)
    {
        //[UserSliderCode_transVol7] -- add your slider handling code here..
        //[/UserSliderCode_transVol7]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void VoiceBasedDrumComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
	int indexNr = buttonThatWasClicked->getName().getIntValue() - 1;
	int parameterNr = controllerAssignments[mVoiceNr][indexNr];

	MidiMessage midi;
	if(parameterNr <= 0x7f)
	{

		int value = (int)(buttonThatWasClicked->getToggleState());


		 midi = MidiMessage(MIDI_CC, parameterNr+1,value);
		 if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
	} else
	{
		//NRPN
		int nrpnNr = parameterNr-128;
		midi = MidiMessage(MIDI_CC, NRPN_FINE,nrpnNr&0x7f);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
		midi = MidiMessage(MIDI_CC, NRPN_COARSE,(nrpnNr>>7)&0x7f);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);

		int value = (int)(buttonThatWasClicked->getToggleState());

		midi = MidiMessage(MIDI_CC, DATA_ENTRY,value);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
		//midi = MidiMessage(MIDI_CC2, parameterNr-127,(int)(sliderThatWasMoved->getValue()/sliderThatWasMoved->getMaximum()*127));
	}
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == toggleButton)
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
        //[/UserButtonCode_toggleButton]
    }
    else if (buttonThatWasClicked == velocityModulationOnOff)
    {
        //[UserButtonCode_velocityModulationOnOff] -- add your button handler code here..
        //[/UserButtonCode_velocityModulationOnOff]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void VoiceBasedDrumComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
	int indexNr = comboBoxThatHasChanged->getName().getIntValue() - 1;
	int parameterNr = controllerAssignments[mVoiceNr][indexNr];

	if(indexNr+1 == 35)
	{
		//special case lfo voice -> rebuild target list
		this->reInitLfoDest(comboBoxThatHasChanged->getSelectedId()-1); //todo could be much faster if not all controlls would be reinitialized
	}

	MidiMessage midi;
	if(parameterNr <= 0x7f)
	{

		int value = (int)(comboBoxThatHasChanged->getSelectedId()-1);


		 midi = MidiMessage(MIDI_CC, parameterNr+1,value);

		 if(AudioDemoSetupPage::globalMidiOut)
		 if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
	} else
	{
		//NRPN
		int nrpnNr = parameterNr-128;
		midi = MidiMessage(MIDI_CC, NRPN_FINE,nrpnNr&0x7f);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
		midi = MidiMessage(MIDI_CC, NRPN_COARSE,(nrpnNr>>7)&0x7f);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);

		int value = (int)(comboBoxThatHasChanged->getSelectedId()-1);

		midi = MidiMessage(MIDI_CC, DATA_ENTRY,value);
		if(AudioDemoSetupPage::globalMidiOut) AudioDemoSetupPage::globalMidiOut->sendMessageNow(midi);
		//midi = MidiMessage(MIDI_CC2, parameterNr-127,(int)(sliderThatWasMoved->getValue()/sliderThatWasMoved->getMaximum()*127));
	}
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == comboBox)
    {
        //[UserComboBoxCode_comboBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox]
    }
    else if (comboBoxThatHasChanged == outputSelectCombo)
    {
        //[UserComboBoxCode_outputSelectCombo] -- add your combo box handling code here..
        //[/UserComboBoxCode_outputSelectCombo]
    }
    else if (comboBoxThatHasChanged == comboBox2)
    {
        //[UserComboBoxCode_comboBox2] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox2]
    }
    else if (comboBoxThatHasChanged == comboBox3)
    {
        //[UserComboBoxCode_comboBox3] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox3]
    }
    else if (comboBoxThatHasChanged == comboBox4)
    {
        //[UserComboBoxCode_comboBox4] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox4]
    }
    else if (comboBoxThatHasChanged == comboBox5)
    {
        //[UserComboBoxCode_comboBox5] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox5]
    }
    else if (comboBoxThatHasChanged == comboBox6)
    {
        //[UserComboBoxCode_comboBox6] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox6]
    }
    else if (comboBoxThatHasChanged == comboBox7)
    {
        //[UserComboBoxCode_comboBox7] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox7]
    }
    else if (comboBoxThatHasChanged == comboBox8)
    {
        //[UserComboBoxCode_comboBox8] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox8]
    }
    else if (comboBoxThatHasChanged == comboBox9)
    {
        //[UserComboBoxCode_comboBox9] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox9]
    }
    else if (comboBoxThatHasChanged == comboBox10)
    {
        //[UserComboBoxCode_comboBox10] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox10]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void VoiceBasedDrumComponent::reInitLfoDest(int lfoVoice)
{
Patch patch;
int selectedIndex;
//	for(int i=0;i<=MAX_CONTROLS;i++)
//	{
		//find child with i as name id
		for(int j=0;j<this->getNumChildComponents();j++)
		{
			Component* child = this->getChildComponent(j);
			if(child->getName() == String(36))
			{
				ComboBox* combo = (ComboBox*)child;
				selectedIndex = combo->getSelectedItemIndex();
				combo->clear();

				uint8_t voiceNr = lfoVoice;



				for(int i=0;i<NUM_SUB_PAGES*8;i++)
				{
					const uint8_t page				= (i&MASK_PAGE)>>PAGE_SHIFT;
					const uint8_t activeParameter	= i&MASK_PARAMETER;

					if(( *(&(menuPages[voiceNr][page].top1) + activeParameter)) != TEXT_EMPTY)
					{
						String name = String(longNames[valueNames[*(&(menuPages[voiceNr][page].top1) + activeParameter)].longName]);
						String cat = String(catNames[valueNames[*(&(menuPages[voiceNr][page].top1) + activeParameter)].category]);

						combo->addItem(cat + String(" ") + name,i+1);
					}
				}
				combo->setSelectedItemIndex(selectedIndex);
				break;
			}
		}

};


void VoiceBasedDrumComponent::initControls()
{

	Patch patch;

	for(int i=0;i<=MAX_CONTROLS;i++)
	{
		//find child with i as name id
		for(int j=0;j<this->getNumChildComponents();j++)
		{
			Component* child = this->getChildComponent(j);
			if(child->getName() == String(i))
			{
				switch(getControlType(i,this->mVoiceNr))
				{
				case TYPE_BUTTON:

					break;

				case TYPE_SLIDER:
					{
					Slider* slider = (Slider*)child;
					if(controllerAssignments[this->mVoiceNr][i-1] != NONE) {
						slider->setRange(patch.getParamMin(controllerAssignments[this->mVoiceNr][i-1]),patch.getParamMax(controllerAssignments[this->mVoiceNr][i-1]),1);

					}
					}
					break;

				case TYPE_COMBO:
					ComboBox* combo = (ComboBox*)child;
					combo->clear();
					//get menu names from dtype
					int dtype = patch.getDtype(controllerAssignments[this->mVoiceNr][i-1]);
					const uint8_t menuId = (dtype>>4);
					switch(menuId)
					{
						case MENU_AUDIO_OUT:
							for(int i=1;i<=(int)outputNames[0][0];i++)
							{
								combo->addItem(outputNames[i],i);
							}
						break;

						case MENU_FILTER:
							for(int i=1;i<=(int)filterTypes[0][0];i++)
							{
								combo->addItem(filterTypes[i],i);
							}
						break;

						case MENU_WAVEFORM:
							for(int i=1;i<=(int)waveformNames[0][0];i++)
							{
								combo->addItem(waveformNames[i],i);
							}
						break;

						case MENU_SYNC_RATES:
							for(int i=1;i<=(int)syncRateNames[0][0];i++)
							{
								combo->addItem(syncRateNames[i],i);
							}
						break;

						case MENU_LFO_WAVES:
							for(int i=1;i<=(int)lfoWaveNames[0][0];i++)
							{
								combo->addItem(lfoWaveNames[i],i);
							}
						break;

						case MENU_RETRIGGER:
							for(int i=1;i<=(int)retriggerNames[0][0];i++)
							{
								combo->addItem(retriggerNames[i],i);
							}
						break;

						case MENU_SEQ_QUANT:
							for(int i=1;i<=(int)quantisationNames[0][0];i++)
							{
								combo->addItem(quantisationNames[i],i);
							}

						break;

						case MENU_NEXT_PATTERN:
							for(int i=1;i<=(int)nextPatternNames[0][0];i++)
							{
								combo->addItem(nextPatternNames[i],i);
							}
						break;


						case MENU_ROLL_RATES:
							for(int i=1;i<=(int)rollRateNames[0][0];i++)
							{
								combo->addItem(rollRateNames[i],i);
							}
							break;

						default:
							{
								//could be an unknown menu
								//or the transient waveform / velocity destination
								switch(combo->getName().getIntValue())
								{
									case 22: //trans wave -> just prints numbers so far
										for(int i=0;i<NUM_TRANS_WAVES;i++)
										{
											combo->addItem(String(i),i+1);
										}
										break;

									case 35: //lfo voice
										/*
										for(int i=1;i<7;i++)
										{
											combo->addItem(String("Voice ") + String(i),i+1);
										}
										*/
											combo->addItem(String("Drum 1"),2);
											combo->addItem(String("Drum 2"),3);
											combo->addItem(String("Drum 3"),4);
											combo->addItem(String("Snare"),5);
											combo->addItem(String("Cymbal"),6);
											combo->addItem(String("Hat"),7);

										break;

									case 36: //lfo destination
									{
										uint8_t voiceNr = 0;
										//int parNr = controllerAssignments[this->mVoiceNr][i-1];
										for(int i=0;i<this->getNumChildComponents();i++)
										{


											Component* child = this->getChildComponent(i);
											if(child->getName() == String(i))
											{
												ComboBox* combo = (ComboBox*)child;
												voiceNr = combo->getSelectedId();
											}

										}



										for(int i=0;i<NUM_SUB_PAGES*8;i++)
										{
											const uint8_t page				= (i&MASK_PAGE)>>PAGE_SHIFT;
											const uint8_t activeParameter	= i&MASK_PARAMETER;

											if(( *(&(menuPages[voiceNr][page].top1) + activeParameter)) != TEXT_EMPTY)
											{
												String name = String(longNames[valueNames[*(&(menuPages[voiceNr][page].top1) + activeParameter)].longName]);
												String cat = String(catNames[valueNames[*(&(menuPages[voiceNr][page].top1) + activeParameter)].category]);

												combo->addItem(cat + String(" ") + name,i+1);
											}
										}
									}
										break;

									case 13: //velo mod dest
									{
										//int parNr = controllerAssignments[this->mVoiceNr][i-1];
										const uint8_t voiceNr			= this->mVoiceNr;


										for(int i=0;i<NUM_SUB_PAGES*8;i++)
										{
											const uint8_t page				= (i&MASK_PAGE)>>PAGE_SHIFT;
											const uint8_t activeParameter	= i&MASK_PARAMETER;

											if(( *(&(menuPages[voiceNr][page].top1) + activeParameter)) != TEXT_EMPTY)
											{
												String name = String(longNames[valueNames[*(&(menuPages[voiceNr][page].top1) + activeParameter)].longName]);
												String cat = String(catNames[valueNames[*(&(menuPages[voiceNr][page].top1) + activeParameter)].category]);

												combo->addItem(cat + String(" ") + name,i+1);
											}
										}
									}
										break;

									default:
									combo->addItem("---",1);
									break;
								}
							}
						break;
					}
					combo->setSelectedItemIndex(0);
					break;


				}
				break;
			}
		}
	}
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="VoiceBasedDrumComponent"
                 componentName="" parentClasses="public Component" constructorParams="int voiceNr"
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330000013" fixedSize="1" initialWidth="850"
                 initialHeight="600">
  <BACKGROUND backgroundColour="ff494949">
    <ROUNDRECT pos="543 21 289 15" cornerSize="4.5" fill="solid: ff0bb801" hasStroke="0"/>
    <ROUNDRECT pos="272 21 256 15" cornerSize="4.5" fill="solid: ff0bb801" hasStroke="0"/>
    <ROUNDRECT pos="16 21 248 15" cornerSize="4.5" fill="solid: ff0bb801" hasStroke="0"/>
    <ROUNDRECT pos="16 169 248 15" cornerSize="4.5" fill="solid: ff0bb801" hasStroke="0"/>
    <ROUNDRECT pos="272 169 256 15" cornerSize="4.5" fill="solid: ff0bb801"
               hasStroke="0"/>
    <ROUNDRECT pos="544 169 288 15" cornerSize="4.5" fill="solid: ff0bb801"
               hasStroke="0"/>
    <ROUNDRECT pos="16 321 248 15" cornerSize="4.5" fill="solid: ff0bb801" hasStroke="0"/>
    <ROUNDRECT pos="272 321 256 15" cornerSize="4.5" fill="solid: ff0bb801"
               hasStroke="0"/>
    <ROUNDRECT pos="544 321 288 15" cornerSize="4.5" fill="solid: ff0bb801"
               hasStroke="0"/>
    <ROUNDRECT pos="16 465 512 15" cornerSize="4.5" fill="solid: ff0bb801" hasStroke="0"/>
  </BACKGROUND>
  <SLIDER name="1" id="4f03517362eb46ec" memberName="tune1" virtualName=""
          explicitFocusOrder="0" pos="24 64 48 68" min="0" max="1000" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="6" id="14f00b477c145d5" memberName="veloA1" virtualName=""
          explicitFocusOrder="0" pos="24 216 48 68" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="7" id="d670697c4007d965" memberName="veloD1" virtualName=""
          explicitFocusOrder="0" pos="96 216 48 68" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="10" id="54c56f86d7518d57" memberName="pitchD1" virtualName=""
          explicitFocusOrder="0" pos="288 216 48 68" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="16" id="94ef69aaa8cb0055" memberName="fmamnt1" virtualName=""
          explicitFocusOrder="0" pos="288 64 48 68" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="17" id="cd1992a3e0be8940" memberName="fmFreq" virtualName=""
          explicitFocusOrder="0" pos="360 64 48 68" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="40" id="d3384654b4f8387b" memberName="drive1" virtualName=""
          explicitFocusOrder="0" pos="768 64 48 68" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="37" id="77d84fabe46bffd6" memberName="vol1" virtualName=""
          explicitFocusOrder="0" pos="552 64 48 68" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="38" id="ec7badf74f924d4f" memberName="pan1" virtualName=""
          explicitFocusOrder="0" pos="624 64 48 68" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="12" id="503d0a10cf599ca5" memberName="modAmount1" virtualName=""
          explicitFocusOrder="0" pos="432 216 48 68" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="4227c0004165d2e6" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 192 56 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Attack" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="94cc621e94e8bde7" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="96 192 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Decay" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4929dd529c8ae58c" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="24 40 54 24" textCol="ffffffff" edTextCol="ff000000"
         edBkgCol="0" labelText="Coarse" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="37e558da4ad8c6c4" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="272 164 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Modulation EG" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="41905904668d8059" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="16 164 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Amplitude Envelope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="8d572de78a15c4cc" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="288 192 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Decay" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7319a3a990b6ce69" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="432 192 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pitch mod." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="9" id="5a2549ee9e054f4" memberName="slopeVelo" virtualName=""
          explicitFocusOrder="0" pos="168 216 48 68" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="11" id="40a8017c321dad8b" memberName="slopeMod2" virtualName=""
          explicitFocusOrder="0" pos="360 216 48 68" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="3e716d40af9942b1" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="168 192 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Slope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5d8093524fd6f9ab" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="360 192 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Slope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="54389be7231f190a" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="280 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="FM" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="91c432a6a7988489" memberName="amountLabel"
         virtualName="" explicitFocusOrder="0" pos="288 40 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amount" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="47b8238d56aa6218" memberName="freqLabel"
         virtualName="" explicitFocusOrder="0" pos="368 40 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Freq" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="59486216f02a7c38" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="552 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Mixer" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="e1a3de95a15ef589" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="768 40 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Drive" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5d6dcde3e72f21a1" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="552 40 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f99147408448971e" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="632 40 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pan" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="39" id="76165c7502bacefe" memberName="sampleRate" virtualName=""
          explicitFocusOrder="0" pos="696 64 48 68" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="2c6e10397ddce52d" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="680 40 88 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Samplerate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1eff13219458028" memberName="freqLabel2"
         virtualName="" explicitFocusOrder="0" pos="432 40 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Waveform" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="27392aa418ae0bf3" memberName="freqLabel3"
         virtualName="" explicitFocusOrder="0" pos="440 88 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Mode" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="19" id="d3948398dfc5f6da" memberName="toggleButton" virtualName=""
                explicitFocusOrder="0" pos="432 112 144 24" txtcol="ffffffff"
                buttonText="Mix Mode" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <LABEL name="new label" id="6687c14cfc6c0325" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="272 317 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Velocity Modulation" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <COMBOBOX name="13" id="ef418d09aa477923" memberName="comboBox" virtualName=""
            explicitFocusOrder="0" pos="288 368 144 24" editable="0" layout="33"
            items="coarse&#10;fine&#10;..." textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="2edcd39a7e12bf43" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="280 344 112 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Destination" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="14" id="b89ca8e5f65bf3ca" memberName="modAmount2" virtualName=""
          explicitFocusOrder="0" pos="440 368 48 68" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="9dca8054c8d83d1b" memberName="amountLabel2"
         virtualName="" explicitFocusOrder="0" pos="448 344 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amount" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="15" id="77d0e1ef525c48c3" memberName="velocityModulationOnOff"
                virtualName="" explicitFocusOrder="0" pos="288 408 144 24" txtcol="ffffffff"
                buttonText="Amplitude Modulation" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <LABEL name="new label" id="4919ef99f8b4516d" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="560 344 112 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Output" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="41" id="79a8f2dfe0b0a688" memberName="outputSelectCombo"
            virtualName="" explicitFocusOrder="0" pos="624 344 136 24" editable="0"
            layout="33" items="Stereo 1&#10;Stereo 2&#10;L1&#10;R1&#10;L2&#10;R2"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="4408b80d1e278f8d" memberName="freqLabel4"
         virtualName="" explicitFocusOrder="0" pos="168 40 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Waveform" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="2" id="9c71d6ea37608b0f" memberName="tune2" virtualName=""
          explicitFocusOrder="0" pos="96 64 48 68" min="0" max="1000" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="e190283e636323af" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="104 40 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fine" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2596d4cf63f52d4c" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="15 316 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Transient Generator" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="5d033da4f1b7e6a0" memberName="freqLabel5"
         virtualName="" explicitFocusOrder="0" pos="184 344 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Waveform" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="22" id="739b0301d9927f1f" memberName="comboBox2" virtualName=""
            explicitFocusOrder="0" pos="184 392 72 24" editable="0" layout="33"
            items="click&#10;plop&#10;..." textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="23" id="aca34635efe71d90" memberName="transVol" virtualName=""
          explicitFocusOrder="0" pos="24 368 48 68" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="4a5256442accc447" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="24 344 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="24" id="ccbc5d38ef5980f8" memberName="transFreq" virtualName=""
          explicitFocusOrder="0" pos="96 368 48 68" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="d7c1e305a6593fd7" memberName="freqLabel6"
         virtualName="" explicitFocusOrder="0" pos="104 344 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Freq" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="832565d890a0c7a9" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="544 165 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="33"/>
  <SLIDER name="25" id="f561ecf39ca1b4ca" memberName="filterFreq" virtualName=""
          explicitFocusOrder="0" pos="552 216 48 68" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="dbd014f1eafdfc7d" memberName="freqLabel7"
         virtualName="" explicitFocusOrder="0" pos="560 192 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Freq" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="26" id="6802ceb361a70963" memberName="filterRes" virtualName=""
          explicitFocusOrder="0" pos="624 216 48 68" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="f8dee82b963de8f" memberName="freqLabel8"
         virtualName="" explicitFocusOrder="0" pos="632 192 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Reso" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2da8ea9ca78933b9" memberName="freqLabel9"
         virtualName="" explicitFocusOrder="0" pos="776 192 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Type" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="27" id="cc89fc44955f4667" memberName="comboBox3" virtualName=""
            explicitFocusOrder="0" pos="768 232 64 24" editable="0" layout="33"
            items="LP&#10;HP&#10;BP&#10;Unity Gain BP&#10;Notch&#10;Peak"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="28" id="25c19dbe58872b24" memberName="filterDrive" virtualName=""
          explicitFocusOrder="0" pos="696 216 48 68" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="93145270f3d928a4" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="696 192 54 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Drive" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e8e037ff19b3c2ad" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="16 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Oscillator" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="33"/>
  <COMBOBOX name="4" id="2836aa239c8f93da" memberName="comboBox4" virtualName=""
            explicitFocusOrder="0" pos="168 80 81 24" editable="0" layout="33"
            items="Sine&#10;Tri&#10;Saw&#10;Rec&#10;Noise&#10;Crash" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="164a1bc6f21290c" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="543 316 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Routing" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="33"/>
  <COMBOBOX name="18" id="2504364ecf1cdda2" memberName="comboBox5" virtualName=""
            explicitFocusOrder="0" pos="424 64 81 24" editable="0" layout="33"
            items="Sine&#10;Tri&#10;Saw&#10;Rec&#10;Noise&#10;Crash" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <SLIDER name="29" id="419c53e60edd0185" memberName="transVol2" virtualName=""
          explicitFocusOrder="0" pos="32 504 48 68" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="cb26413870e8b929" memberName="label26" virtualName=""
         explicitFocusOrder="0" pos="17 460 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="LFO" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="d4c84704b9341578" memberName="freqLabel10"
         virtualName="" explicitFocusOrder="0" pos="40 480 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Freq" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="31" id="e78d399fcb5c5f8" memberName="transVol4" virtualName=""
          explicitFocusOrder="0" pos="104 504 48 68" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="34" id="4f00415d7467367a" memberName="transVol7" virtualName=""
          explicitFocusOrder="0" pos="176 504 48 68" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="f112708cc74207ca" memberName="freqLabel11"
         virtualName="" explicitFocusOrder="0" pos="440 480 48 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="sync" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3cdfe37f7509ef1a" memberName="freqLabel12"
         virtualName="" explicitFocusOrder="0" pos="104 480 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="amount" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e5f690987af314ed" memberName="freqLabel13"
         virtualName="" explicitFocusOrder="0" pos="248 480 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="waveform" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5ffa28137ff56996" memberName="freqLabel14"
         virtualName="" explicitFocusOrder="0" pos="248 528 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="retrigger" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c4bd2e6547c57621" memberName="freqLabel15"
         virtualName="" explicitFocusOrder="0" pos="176 480 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="offset" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5cdf3cb50f0e05b8" memberName="freqLabel16"
         virtualName="" explicitFocusOrder="0" pos="344 480 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="voice" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="6c2a548aaa508147" memberName="freqLabel17"
         virtualName="" explicitFocusOrder="0" pos="344 528 120 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Destination" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="32" id="74c53ac4d0fce163" memberName="comboBox6" virtualName=""
            explicitFocusOrder="0" pos="248 504 81 24" editable="0" layout="33"
            items="Sine&#10;Tri&#10;Saw&#10;Rec&#10;Noise&#10;Crash" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="33" id="6b3c0dd08bfc5a67" memberName="comboBox7" virtualName=""
            explicitFocusOrder="0" pos="248 552 81 24" editable="0" layout="33"
            items="Sine&#10;Tri&#10;Saw&#10;Rec&#10;Noise&#10;Crash" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="35" id="57bf8b1754f826e0" memberName="comboBox8" virtualName=""
            explicitFocusOrder="0" pos="344 504 81 24" editable="0" layout="33"
            items="Sine&#10;Tri&#10;Saw&#10;Rec&#10;Noise&#10;Crash" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="30" id="620eb7b6b458142a" memberName="comboBox9" virtualName=""
            explicitFocusOrder="0" pos="440 504 81 24" editable="0" layout="33"
            items="Sine&#10;Tri&#10;Saw&#10;Rec&#10;Noise&#10;Crash" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="36" id="fc85e0749d8ab55a" memberName="comboBox10" virtualName=""
            explicitFocusOrder="0" pos="344 552 176 24" editable="0" layout="33"
            items="coarse&#10;fine&#10;..." textWhenNonSelected="" textWhenNoItems="(no choices)"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
