/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  24 Mar 2013 4:22:02pm

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
//[/Headers]

#include "MainComponent_backup.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
    : tune1 (0),
      veloA1 (0),
      veloD1 (0),
      pitchD1 (0),
      fmamnt1 (0),
      fmdepth1 (0),
      drive1 (0),
      tune4 (0),
      snareNoiseFreq (0),
      veloA4 (0),
      veloD4 (0),
      pitchD4 (0),
      SnareEqFreq (0),
      snareEqGain (0),
      snareMix (0),
      vol1 (0),
      vol4 (0),
      pan1 (0),
      pan4 (0),
      modAmount1 (0),
      modAmount4 (0),
      tune2 (0),
      veloA2 (0),
      veloD2 (0),
      pitchD2 (0),
      fmamnt2 (0),
      fmdepth2 (0),
      drive2 (0),
      vol2 (0),
      pan2 (0),
      modAmount2 (0),
      tune3 (0),
      veloA3 (0),
      veloD3 (0),
      pitchD3 (0),
      fmamnt3 (0),
      fmdepth3 (0),
      drive3 (0),
      vol3 (0),
      pan3 (0),
      modAmount3 (0),
      filterType1 (0),
      tune5 (0),
      snareNoiseFreq2 (0),
      veloA5 (0),
      veloD5 (0),
      pitchD5 (0),
      SnareEqFreq2 (0),
      snareEqGain2 (0),
      snareMix2 (0),
      vol5 (0),
      pan5 (0),
      modAmount5 (0),
      filterType2 (0),
      veloD6 (0),
      snareEqGain3 (0),
      SnareEqFreq3 (0),
      vol6 (0),
      pan6 (0),
      tune6 (0),
      modOscTune1 (0),
      modOscTune2 (0),
      HatFmMod1 (0),
      HatFmMod2 (0),
      veloA6 (0),
      repeat1 (0),
      repeat2 (0)
{
    addAndMakeVisible (tune1 = new Slider (L"new slider"));
    tune1->setRange (0, 1000, 0.01);
    tune1->setSliderStyle (Slider::Rotary);
    tune1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune1->addListener (this);
    tune1->setSkewFactor (0.5);

    addAndMakeVisible (veloA1 = new Slider (L"new slider"));
    veloA1->setRange (0, 5, 0.01);
    veloA1->setSliderStyle (Slider::Rotary);
    veloA1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloA1->addListener (this);

    addAndMakeVisible (veloD1 = new Slider (L"new slider"));
    veloD1->setRange (0, 5, 0.01);
    veloD1->setSliderStyle (Slider::Rotary);
    veloD1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloD1->addListener (this);

    addAndMakeVisible (pitchD1 = new Slider (L"new slider"));
    pitchD1->setRange (0, 5, 0.01);
    pitchD1->setSliderStyle (Slider::Rotary);
    pitchD1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pitchD1->addListener (this);

    addAndMakeVisible (fmamnt1 = new Slider (L"new slider"));
    fmamnt1->setRange (0, 100, 0.01);
    fmamnt1->setSliderStyle (Slider::Rotary);
    fmamnt1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmamnt1->addListener (this);

    addAndMakeVisible (fmdepth1 = new Slider (L"new slider"));
    fmdepth1->setRange (0, 100, 0.01);
    fmdepth1->setSliderStyle (Slider::Rotary);
    fmdepth1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmdepth1->addListener (this);

    addAndMakeVisible (drive1 = new Slider (L"new slider"));
    drive1->setRange (0, 100, 0.01);
    drive1->setSliderStyle (Slider::Rotary);
    drive1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    drive1->addListener (this);

    addAndMakeVisible (tune4 = new Slider (L"new slider"));
    tune4->setRange (0, 1000, 0.01);
    tune4->setSliderStyle (Slider::Rotary);
    tune4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune4->addListener (this);
    tune4->setSkewFactor (0.5);

    addAndMakeVisible (snareNoiseFreq = new Slider (L"new slider"));
    snareNoiseFreq->setRange (0, 1000, 0.01);
    snareNoiseFreq->setSliderStyle (Slider::Rotary);
    snareNoiseFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    snareNoiseFreq->addListener (this);
    snareNoiseFreq->setSkewFactor (0.5);

    addAndMakeVisible (veloA4 = new Slider (L"new slider"));
    veloA4->setRange (0, 5, 0.01);
    veloA4->setSliderStyle (Slider::Rotary);
    veloA4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloA4->addListener (this);

    addAndMakeVisible (veloD4 = new Slider (L"new slider"));
    veloD4->setRange (0, 5, 0.01);
    veloD4->setSliderStyle (Slider::Rotary);
    veloD4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloD4->addListener (this);

    addAndMakeVisible (pitchD4 = new Slider (L"new slider"));
    pitchD4->setRange (0, 5, 0.01);
    pitchD4->setSliderStyle (Slider::Rotary);
    pitchD4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pitchD4->addListener (this);

    addAndMakeVisible (SnareEqFreq = new Slider (L"new slider"));
    SnareEqFreq->setRange (0, 100, 0.01);
    SnareEqFreq->setSliderStyle (Slider::Rotary);
    SnareEqFreq->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    SnareEqFreq->addListener (this);

    addAndMakeVisible (snareEqGain = new Slider (L"new slider"));
    snareEqGain->setRange (0, 100, 0.01);
    snareEqGain->setSliderStyle (Slider::Rotary);
    snareEqGain->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    snareEqGain->addListener (this);

    addAndMakeVisible (snareMix = new Slider (L"new slider"));
    snareMix->setRange (0, 100, 0.01);
    snareMix->setSliderStyle (Slider::LinearHorizontal);
    snareMix->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    snareMix->addListener (this);

    addAndMakeVisible (vol1 = new Slider (L"new slider"));
    vol1->setRange (0, 100, 0.01);
    vol1->setSliderStyle (Slider::Rotary);
    vol1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    vol1->addListener (this);

    addAndMakeVisible (vol4 = new Slider (L"new slider"));
    vol4->setRange (0, 100, 0.01);
    vol4->setSliderStyle (Slider::Rotary);
    vol4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    vol4->addListener (this);

    addAndMakeVisible (pan1 = new Slider (L"new slider"));
    pan1->setRange (0, 1, 0.01);
    pan1->setSliderStyle (Slider::Rotary);
    pan1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pan1->addListener (this);

    addAndMakeVisible (pan4 = new Slider (L"new slider"));
    pan4->setRange (0, 1, 0.01);
    pan4->setSliderStyle (Slider::Rotary);
    pan4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pan4->addListener (this);

    addAndMakeVisible (modAmount1 = new Slider (L"new slider"));
    modAmount1->setRange (0, 100, 0.01);
    modAmount1->setSliderStyle (Slider::Rotary);
    modAmount1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modAmount1->addListener (this);

    addAndMakeVisible (modAmount4 = new Slider (L"new slider"));
    modAmount4->setRange (0, 100, 0.01);
    modAmount4->setSliderStyle (Slider::Rotary);
    modAmount4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modAmount4->addListener (this);

    addAndMakeVisible (tune2 = new Slider (L"new slider"));
    tune2->setRange (0, 1000, 0.01);
    tune2->setSliderStyle (Slider::Rotary);
    tune2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune2->addListener (this);
    tune2->setSkewFactor (0.5);

    addAndMakeVisible (veloA2 = new Slider (L"new slider"));
    veloA2->setRange (0, 5, 0.01);
    veloA2->setSliderStyle (Slider::Rotary);
    veloA2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloA2->addListener (this);

    addAndMakeVisible (veloD2 = new Slider (L"new slider"));
    veloD2->setRange (0, 5, 0.01);
    veloD2->setSliderStyle (Slider::Rotary);
    veloD2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloD2->addListener (this);

    addAndMakeVisible (pitchD2 = new Slider (L"new slider"));
    pitchD2->setRange (0, 5, 0.01);
    pitchD2->setSliderStyle (Slider::Rotary);
    pitchD2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pitchD2->addListener (this);

    addAndMakeVisible (fmamnt2 = new Slider (L"new slider"));
    fmamnt2->setRange (0, 100, 0.01);
    fmamnt2->setSliderStyle (Slider::Rotary);
    fmamnt2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmamnt2->addListener (this);

    addAndMakeVisible (fmdepth2 = new Slider (L"new slider"));
    fmdepth2->setRange (0, 100, 0.01);
    fmdepth2->setSliderStyle (Slider::Rotary);
    fmdepth2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmdepth2->addListener (this);

    addAndMakeVisible (drive2 = new Slider (L"new slider"));
    drive2->setRange (0, 100, 0.01);
    drive2->setSliderStyle (Slider::Rotary);
    drive2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    drive2->addListener (this);

    addAndMakeVisible (vol2 = new Slider (L"new slider"));
    vol2->setRange (0, 100, 0.01);
    vol2->setSliderStyle (Slider::Rotary);
    vol2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    vol2->addListener (this);

    addAndMakeVisible (pan2 = new Slider (L"new slider"));
    pan2->setRange (0, 1, 0.01);
    pan2->setSliderStyle (Slider::Rotary);
    pan2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pan2->addListener (this);

    addAndMakeVisible (modAmount2 = new Slider (L"new slider"));
    modAmount2->setRange (0, 100, 0.01);
    modAmount2->setSliderStyle (Slider::Rotary);
    modAmount2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modAmount2->addListener (this);

    addAndMakeVisible (tune3 = new Slider (L"new slider"));
    tune3->setRange (0, 1000, 0.01);
    tune3->setSliderStyle (Slider::Rotary);
    tune3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune3->addListener (this);
    tune3->setSkewFactor (0.5);

    addAndMakeVisible (veloA3 = new Slider (L"new slider"));
    veloA3->setRange (0, 5, 0.01);
    veloA3->setSliderStyle (Slider::Rotary);
    veloA3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloA3->addListener (this);

    addAndMakeVisible (veloD3 = new Slider (L"new slider"));
    veloD3->setRange (0, 5, 0.01);
    veloD3->setSliderStyle (Slider::Rotary);
    veloD3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloD3->addListener (this);

    addAndMakeVisible (pitchD3 = new Slider (L"new slider"));
    pitchD3->setRange (0, 5, 0.01);
    pitchD3->setSliderStyle (Slider::Rotary);
    pitchD3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pitchD3->addListener (this);

    addAndMakeVisible (fmamnt3 = new Slider (L"new slider"));
    fmamnt3->setRange (0, 100, 0.01);
    fmamnt3->setSliderStyle (Slider::Rotary);
    fmamnt3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmamnt3->addListener (this);

    addAndMakeVisible (fmdepth3 = new Slider (L"new slider"));
    fmdepth3->setRange (0, 100, 0.01);
    fmdepth3->setSliderStyle (Slider::Rotary);
    fmdepth3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    fmdepth3->addListener (this);

    addAndMakeVisible (drive3 = new Slider (L"new slider"));
    drive3->setRange (0, 100, 0.01);
    drive3->setSliderStyle (Slider::Rotary);
    drive3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    drive3->addListener (this);

    addAndMakeVisible (vol3 = new Slider (L"new slider"));
    vol3->setRange (0, 100, 0.01);
    vol3->setSliderStyle (Slider::Rotary);
    vol3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    vol3->addListener (this);

    addAndMakeVisible (pan3 = new Slider (L"new slider"));
    pan3->setRange (0, 1, 0.01);
    pan3->setSliderStyle (Slider::Rotary);
    pan3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pan3->addListener (this);

    addAndMakeVisible (modAmount3 = new Slider (L"new slider"));
    modAmount3->setRange (0, 100, 0.01);
    modAmount3->setSliderStyle (Slider::Rotary);
    modAmount3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modAmount3->addListener (this);

    addAndMakeVisible (filterType1 = new Slider (L"new slider"));
    filterType1->setRange (1, 7, 1);
    filterType1->setSliderStyle (Slider::Rotary);
    filterType1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    filterType1->addListener (this);

    addAndMakeVisible (tune5 = new Slider (L"new slider"));
    tune5->setRange (0, 1000, 0.01);
    tune5->setSliderStyle (Slider::Rotary);
    tune5->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune5->addListener (this);
    tune5->setSkewFactor (0.5);

    addAndMakeVisible (snareNoiseFreq2 = new Slider (L"new slider"));
    snareNoiseFreq2->setRange (0, 1000, 0.01);
    snareNoiseFreq2->setSliderStyle (Slider::Rotary);
    snareNoiseFreq2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    snareNoiseFreq2->addListener (this);
    snareNoiseFreq2->setSkewFactor (0.5);

    addAndMakeVisible (veloA5 = new Slider (L"new slider"));
    veloA5->setRange (0, 5, 0.01);
    veloA5->setSliderStyle (Slider::Rotary);
    veloA5->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloA5->addListener (this);

    addAndMakeVisible (veloD5 = new Slider (L"new slider"));
    veloD5->setRange (0, 5, 0.01);
    veloD5->setSliderStyle (Slider::Rotary);
    veloD5->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloD5->addListener (this);

    addAndMakeVisible (pitchD5 = new Slider (L"new slider"));
    pitchD5->setRange (0, 5, 0.01);
    pitchD5->setSliderStyle (Slider::Rotary);
    pitchD5->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pitchD5->addListener (this);

    addAndMakeVisible (SnareEqFreq2 = new Slider (L"new slider"));
    SnareEqFreq2->setRange (0, 100, 0.01);
    SnareEqFreq2->setSliderStyle (Slider::Rotary);
    SnareEqFreq2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    SnareEqFreq2->addListener (this);

    addAndMakeVisible (snareEqGain2 = new Slider (L"new slider"));
    snareEqGain2->setRange (0, 100, 0.01);
    snareEqGain2->setSliderStyle (Slider::Rotary);
    snareEqGain2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    snareEqGain2->addListener (this);

    addAndMakeVisible (snareMix2 = new Slider (L"new slider"));
    snareMix2->setRange (0, 100, 0.01);
    snareMix2->setSliderStyle (Slider::LinearHorizontal);
    snareMix2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    snareMix2->addListener (this);

    addAndMakeVisible (vol5 = new Slider (L"new slider"));
    vol5->setRange (0, 100, 0.01);
    vol5->setSliderStyle (Slider::Rotary);
    vol5->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    vol5->addListener (this);

    addAndMakeVisible (pan5 = new Slider (L"new slider"));
    pan5->setRange (0, 1, 0.01);
    pan5->setSliderStyle (Slider::Rotary);
    pan5->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pan5->addListener (this);

    addAndMakeVisible (modAmount5 = new Slider (L"new slider"));
    modAmount5->setRange (0, 100, 0.01);
    modAmount5->setSliderStyle (Slider::Rotary);
    modAmount5->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modAmount5->addListener (this);

    addAndMakeVisible (filterType2 = new Slider (L"new slider"));
    filterType2->setRange (1, 7, 1);
    filterType2->setSliderStyle (Slider::Rotary);
    filterType2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    filterType2->addListener (this);

    addAndMakeVisible (veloD6 = new Slider (L"new slider"));
    veloD6->setRange (0, 5, 0.01);
    veloD6->setSliderStyle (Slider::Rotary);
    veloD6->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloD6->addListener (this);

    addAndMakeVisible (snareEqGain3 = new Slider (L"new slider"));
    snareEqGain3->setRange (0, 100, 0.01);
    snareEqGain3->setSliderStyle (Slider::Rotary);
    snareEqGain3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    snareEqGain3->addListener (this);

    addAndMakeVisible (SnareEqFreq3 = new Slider (L"new slider"));
    SnareEqFreq3->setRange (0, 100, 0.01);
    SnareEqFreq3->setSliderStyle (Slider::Rotary);
    SnareEqFreq3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    SnareEqFreq3->addListener (this);

    addAndMakeVisible (vol6 = new Slider (L"new slider"));
    vol6->setRange (0, 100, 0.01);
    vol6->setSliderStyle (Slider::Rotary);
    vol6->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    vol6->addListener (this);

    addAndMakeVisible (pan6 = new Slider (L"new slider"));
    pan6->setRange (0, 1, 0.01);
    pan6->setSliderStyle (Slider::Rotary);
    pan6->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    pan6->addListener (this);

    addAndMakeVisible (tune6 = new Slider (L"new slider"));
    tune6->setRange (0, 1000, 0.01);
    tune6->setSliderStyle (Slider::Rotary);
    tune6->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    tune6->addListener (this);
    tune6->setSkewFactor (0.5);

    addAndMakeVisible (modOscTune1 = new Slider (L"new slider"));
    modOscTune1->setRange (0, 1000, 0.01);
    modOscTune1->setSliderStyle (Slider::Rotary);
    modOscTune1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modOscTune1->addListener (this);
    modOscTune1->setSkewFactor (0.5);

    addAndMakeVisible (modOscTune2 = new Slider (L"new slider"));
    modOscTune2->setRange (0, 1000, 0.01);
    modOscTune2->setSliderStyle (Slider::Rotary);
    modOscTune2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    modOscTune2->addListener (this);
    modOscTune2->setSkewFactor (0.5);

    addAndMakeVisible (HatFmMod1 = new Slider (L"new slider"));
    HatFmMod1->setRange (0, 1000, 0.01);
    HatFmMod1->setSliderStyle (Slider::Rotary);
    HatFmMod1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    HatFmMod1->addListener (this);
    HatFmMod1->setSkewFactor (0.5);

    addAndMakeVisible (HatFmMod2 = new Slider (L"new slider"));
    HatFmMod2->setRange (0, 1000, 0.01);
    HatFmMod2->setSliderStyle (Slider::Rotary);
    HatFmMod2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    HatFmMod2->addListener (this);
    HatFmMod2->setSkewFactor (0.5);

    addAndMakeVisible (veloA6 = new Slider (L"new slider"));
    veloA6->setRange (0, 5, 0.01);
    veloA6->setSliderStyle (Slider::Rotary);
    veloA6->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    veloA6->addListener (this);

    addAndMakeVisible (repeat1 = new Slider (L"new slider"));
    repeat1->setRange (0, 20, 1);
    repeat1->setSliderStyle (Slider::Rotary);
    repeat1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    repeat1->addListener (this);

    addAndMakeVisible (repeat2 = new Slider (L"new slider"));
    repeat2->setRange (0, 20, 1);
    repeat2->setSliderStyle (Slider::Rotary);
    repeat2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    repeat2->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (tune1);
    deleteAndZero (veloA1);
    deleteAndZero (veloD1);
    deleteAndZero (pitchD1);
    deleteAndZero (fmamnt1);
    deleteAndZero (fmdepth1);
    deleteAndZero (drive1);
    deleteAndZero (tune4);
    deleteAndZero (snareNoiseFreq);
    deleteAndZero (veloA4);
    deleteAndZero (veloD4);
    deleteAndZero (pitchD4);
    deleteAndZero (SnareEqFreq);
    deleteAndZero (snareEqGain);
    deleteAndZero (snareMix);
    deleteAndZero (vol1);
    deleteAndZero (vol4);
    deleteAndZero (pan1);
    deleteAndZero (pan4);
    deleteAndZero (modAmount1);
    deleteAndZero (modAmount4);
    deleteAndZero (tune2);
    deleteAndZero (veloA2);
    deleteAndZero (veloD2);
    deleteAndZero (pitchD2);
    deleteAndZero (fmamnt2);
    deleteAndZero (fmdepth2);
    deleteAndZero (drive2);
    deleteAndZero (vol2);
    deleteAndZero (pan2);
    deleteAndZero (modAmount2);
    deleteAndZero (tune3);
    deleteAndZero (veloA3);
    deleteAndZero (veloD3);
    deleteAndZero (pitchD3);
    deleteAndZero (fmamnt3);
    deleteAndZero (fmdepth3);
    deleteAndZero (drive3);
    deleteAndZero (vol3);
    deleteAndZero (pan3);
    deleteAndZero (modAmount3);
    deleteAndZero (filterType1);
    deleteAndZero (tune5);
    deleteAndZero (snareNoiseFreq2);
    deleteAndZero (veloA5);
    deleteAndZero (veloD5);
    deleteAndZero (pitchD5);
    deleteAndZero (SnareEqFreq2);
    deleteAndZero (snareEqGain2);
    deleteAndZero (snareMix2);
    deleteAndZero (vol5);
    deleteAndZero (pan5);
    deleteAndZero (modAmount5);
    deleteAndZero (filterType2);
    deleteAndZero (veloD6);
    deleteAndZero (snareEqGain3);
    deleteAndZero (SnareEqFreq3);
    deleteAndZero (vol6);
    deleteAndZero (pan6);
    deleteAndZero (tune6);
    deleteAndZero (modOscTune1);
    deleteAndZero (modOscTune2);
    deleteAndZero (HatFmMod1);
    deleteAndZero (HatFmMod2);
    deleteAndZero (veloA6);
    deleteAndZero (repeat1);
    deleteAndZero (repeat2);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"BD",
                -12, 76, 76, 30,
                Justification::centred, true);

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath1);
    g.setColour (Colours::black);
    g.strokePath (internalPath1, PathStrokeType (1.6000f));

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath2);
    g.setColour (Colours::black);
    g.strokePath (internalPath2, PathStrokeType (1.6000f));

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Tune",
                44, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo A",
                180, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo D",
                252, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pitch D",
                412, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"FM Amnt",
                596, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"FM Detn",
                668, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Drive",
                748, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"SD",
                4, 428, 28, 30,
                Justification::centred, true);

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath3);
    g.setColour (Colours::black);
    g.strokePath (internalPath3, PathStrokeType (1.6000f));

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Tune",
                52, 388, 48, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo A",
                172, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo D",
                244, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pitch D",
                404, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter F",
                588, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter Reso",
                660, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Mix",
                332, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Volume",
                844, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pan",
                908, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Volume",
                836, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pan",
                900, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Noise F",
                108, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"ModAmount",
                492, 36, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"ModAmount",
                484, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"BD",
                -12, 76, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"BD",
                -20, 180, 76, 30,
                Justification::centred, true);

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath4);
    g.setColour (Colours::black);
    g.strokePath (internalPath4, PathStrokeType (1.6000f));

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Tune",
                36, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo A",
                172, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo D",
                244, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pitch D",
                404, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"FM Amnt",
                588, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"FM Detn",
                660, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Drive",
                740, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Volume",
                836, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pan",
                900, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"ModAmount",
                484, 148, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"BD",
                -20, 180, 76, 30,
                Justification::centred, true);

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath5);
    g.setColour (Colours::black);
    g.strokePath (internalPath5, PathStrokeType (1.6000f));

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath6);
    g.setColour (Colours::black);
    g.strokePath (internalPath6, PathStrokeType (1.6000f));

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Tune",
                36, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo A",
                172, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo D",
                244, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pitch D",
                404, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"FM Amnt",
                588, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"FM Detn",
                660, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Drive",
                740, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Volume",
                836, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pan",
                900, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"ModAmount",
                484, 276, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"BD",
                -20, 316, 76, 30,
                Justification::centred, true);

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath7);
    g.setColour (Colours::black);
    g.strokePath (internalPath7, PathStrokeType (1.6000f));

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter Type",
                748, 388, 76, 30,
                Justification::centred, true);

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath8);
    g.setColour (Colours::black);
    g.strokePath (internalPath8, PathStrokeType (1.6000f));

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"SD",
                4, 540, 28, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Tune",
                36, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo A",
                172, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo D",
                244, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pitch D",
                404, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter F",
                588, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter Reso",
                660, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Mix",
                332, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Volume",
                836, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pan",
                900, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Noise F",
                108, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"ModAmount",
                484, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter Type",
                748, 492, 76, 30,
                Justification::centred, true);

    g.setColour (Colour (0xff362aa5));
    g.fillPath (internalPath9);
    g.setColour (Colours::black);
    g.strokePath (internalPath9, PathStrokeType (1.6000f));

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter F",
                596, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Filter Reso",
                668, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo D",
                324, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Volume",
                836, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Pan",
                900, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Tune",
                36, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"mod1 f",
                100, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"mod2 f",
                172, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"gain1",
                420, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"gain2",
                492, 596, 76, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.0000f, Font::plain));
    g.drawText (L"Velo A",
                252, 596, 76, 30,
                Justification::centred, true);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    tune1->setBounds (48, 64, 64, 72);
    veloA1->setBounds (184, 64, 64, 72);
    veloD1->setBounds (256, 64, 64, 72);
    pitchD1->setBounds (424, 64, 64, 72);
    fmamnt1->setBounds (600, 64, 64, 72);
    fmdepth1->setBounds (672, 64, 64, 72);
    drive1->setBounds (752, 64, 64, 72);
    tune4->setBounds (48, 416, 64, 72);
    snareNoiseFreq->setBounds (120, 416, 64, 72);
    veloA4->setBounds (189, 416, 64, 72);
    veloD4->setBounds (261, 416, 64, 72);
    pitchD4->setBounds (429, 416, 64, 72);
    SnareEqFreq->setBounds (605, 416, 64, 72);
    snareEqGain->setBounds (677, 416, 64, 72);
    snareMix->setBounds (336, 416, 64, 16);
    vol1->setBounds (848, 64, 64, 72);
    vol4->setBounds (848, 416, 64, 72);
    pan1->setBounds (920, 64, 64, 72);
    pan4->setBounds (920, 416, 64, 72);
    modAmount1->setBounds (496, 64, 64, 72);
    modAmount4->setBounds (504, 416, 64, 72);
    tune2->setBounds (43, 170, 64, 72);
    veloA2->setBounds (179, 170, 64, 72);
    veloD2->setBounds (251, 170, 64, 72);
    pitchD2->setBounds (419, 170, 64, 72);
    fmamnt2->setBounds (595, 170, 64, 72);
    fmdepth2->setBounds (667, 170, 64, 72);
    drive2->setBounds (747, 170, 64, 72);
    vol2->setBounds (843, 170, 64, 72);
    pan2->setBounds (915, 170, 64, 72);
    modAmount2->setBounds (491, 170, 64, 72);
    tune3->setBounds (45, 302, 64, 72);
    veloA3->setBounds (181, 302, 64, 72);
    veloD3->setBounds (253, 302, 64, 72);
    pitchD3->setBounds (421, 302, 64, 72);
    fmamnt3->setBounds (597, 302, 64, 72);
    fmdepth3->setBounds (669, 302, 64, 72);
    drive3->setBounds (749, 302, 64, 72);
    vol3->setBounds (845, 302, 64, 72);
    pan3->setBounds (917, 302, 64, 72);
    modAmount3->setBounds (493, 302, 64, 72);
    filterType1->setBounds (760, 416, 64, 72);
    tune5->setBounds (44, 517, 64, 72);
    snareNoiseFreq2->setBounds (116, 517, 64, 72);
    veloA5->setBounds (185, 517, 64, 72);
    veloD5->setBounds (257, 517, 64, 72);
    pitchD5->setBounds (425, 517, 64, 72);
    SnareEqFreq2->setBounds (601, 517, 64, 72);
    snareEqGain2->setBounds (673, 517, 64, 72);
    snareMix2->setBounds (336, 520, 64, 16);
    vol5->setBounds (844, 517, 64, 72);
    pan5->setBounds (916, 517, 64, 72);
    modAmount5->setBounds (500, 517, 64, 72);
    filterType2->setBounds (756, 517, 64, 72);
    veloD6->setBounds (328, 624, 64, 72);
    snareEqGain3->setBounds (672, 624, 64, 72);
    SnareEqFreq3->setBounds (600, 624, 64, 72);
    vol6->setBounds (840, 624, 64, 72);
    pan6->setBounds (912, 624, 64, 72);
    tune6->setBounds (40, 624, 64, 72);
    modOscTune1->setBounds (112, 624, 64, 72);
    modOscTune2->setBounds (184, 624, 64, 72);
    HatFmMod1->setBounds (424, 624, 64, 72);
    HatFmMod2->setBounds (504, 624, 64, 72);
    veloA6->setBounds (256, 624, 64, 72);
    repeat1->setBounds (344, 440, 48, 48);
    repeat2->setBounds (344, 539, 48, 48);
    internalPath1.clear();
    internalPath1.startNewSubPath (840.0f, 0.0f);
    internalPath1.lineTo (40.0f, 0.0f);

    internalPath2.clear();
    internalPath2.startNewSubPath (952.0f, 40.0f);
    internalPath2.lineTo (40.0f, 40.0f);

    internalPath3.clear();
    internalPath3.startNewSubPath (960.0f, 392.0f);
    internalPath3.lineTo (40.0f, 392.0f);

    internalPath4.clear();
    internalPath4.startNewSubPath (832.0f, 0.0f);
    internalPath4.lineTo (32.0f, 0.0f);

    internalPath5.clear();
    internalPath5.startNewSubPath (832.0f, 0.0f);
    internalPath5.lineTo (32.0f, 0.0f);

    internalPath6.clear();
    internalPath6.startNewSubPath (960.0f, 152.0f);
    internalPath6.lineTo (40.0f, 152.0f);

    internalPath7.clear();
    internalPath7.startNewSubPath (960.0f, 280.0f);
    internalPath7.lineTo (48.0f, 280.0f);

    internalPath8.clear();
    internalPath8.startNewSubPath (960.0f, 496.0f);
    internalPath8.lineTo (40.0f, 496.0f);

    internalPath9.clear();
    internalPath9.startNewSubPath (960.0f, 600.0f);
    internalPath9.lineTo (48.0f, 600.0f);

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
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
    else if (sliderThatWasMoved == fmdepth1)
    {
        //[UserSliderCode_fmdepth1] -- add your slider handling code here..
        //[/UserSliderCode_fmdepth1]
    }
    else if (sliderThatWasMoved == drive1)
    {
        //[UserSliderCode_drive1] -- add your slider handling code here..
        //[/UserSliderCode_drive1]
    }
    else if (sliderThatWasMoved == tune4)
    {
        //[UserSliderCode_tune4] -- add your slider handling code here..
        //[/UserSliderCode_tune4]
    }
    else if (sliderThatWasMoved == snareNoiseFreq)
    {
        //[UserSliderCode_snareNoiseFreq] -- add your slider handling code here..
        //[/UserSliderCode_snareNoiseFreq]
    }
    else if (sliderThatWasMoved == veloA4)
    {
        //[UserSliderCode_veloA4] -- add your slider handling code here..
        //[/UserSliderCode_veloA4]
    }
    else if (sliderThatWasMoved == veloD4)
    {
        //[UserSliderCode_veloD4] -- add your slider handling code here..
        //[/UserSliderCode_veloD4]
    }
    else if (sliderThatWasMoved == pitchD4)
    {
        //[UserSliderCode_pitchD4] -- add your slider handling code here..
        //[/UserSliderCode_pitchD4]
    }
    else if (sliderThatWasMoved == SnareEqFreq)
    {
        //[UserSliderCode_SnareEqFreq] -- add your slider handling code here..
        //[/UserSliderCode_SnareEqFreq]
    }
    else if (sliderThatWasMoved == snareEqGain)
    {
        //[UserSliderCode_snareEqGain] -- add your slider handling code here..
        //[/UserSliderCode_snareEqGain]
    }
    else if (sliderThatWasMoved == snareMix)
    {
        //[UserSliderCode_snareMix] -- add your slider handling code here..
        //[/UserSliderCode_snareMix]
    }
    else if (sliderThatWasMoved == vol1)
    {
        //[UserSliderCode_vol1] -- add your slider handling code here..
        //[/UserSliderCode_vol1]
    }
    else if (sliderThatWasMoved == vol4)
    {
        //[UserSliderCode_vol4] -- add your slider handling code here..
        //[/UserSliderCode_vol4]
    }
    else if (sliderThatWasMoved == pan1)
    {
        //[UserSliderCode_pan1] -- add your slider handling code here..
        //[/UserSliderCode_pan1]
    }
    else if (sliderThatWasMoved == pan4)
    {
        //[UserSliderCode_pan4] -- add your slider handling code here..
        //[/UserSliderCode_pan4]
    }
    else if (sliderThatWasMoved == modAmount1)
    {
        //[UserSliderCode_modAmount1] -- add your slider handling code here..
        //[/UserSliderCode_modAmount1]
    }
    else if (sliderThatWasMoved == modAmount4)
    {
        //[UserSliderCode_modAmount4] -- add your slider handling code here..
        //[/UserSliderCode_modAmount4]
    }
    else if (sliderThatWasMoved == tune2)
    {
        //[UserSliderCode_tune2] -- add your slider handling code here..
        //[/UserSliderCode_tune2]
    }
    else if (sliderThatWasMoved == veloA2)
    {
        //[UserSliderCode_veloA2] -- add your slider handling code here..
        //[/UserSliderCode_veloA2]
    }
    else if (sliderThatWasMoved == veloD2)
    {
        //[UserSliderCode_veloD2] -- add your slider handling code here..
        //[/UserSliderCode_veloD2]
    }
    else if (sliderThatWasMoved == pitchD2)
    {
        //[UserSliderCode_pitchD2] -- add your slider handling code here..
        //[/UserSliderCode_pitchD2]
    }
    else if (sliderThatWasMoved == fmamnt2)
    {
        //[UserSliderCode_fmamnt2] -- add your slider handling code here..
        //[/UserSliderCode_fmamnt2]
    }
    else if (sliderThatWasMoved == fmdepth2)
    {
        //[UserSliderCode_fmdepth2] -- add your slider handling code here..
        //[/UserSliderCode_fmdepth2]
    }
    else if (sliderThatWasMoved == drive2)
    {
        //[UserSliderCode_drive2] -- add your slider handling code here..
        //[/UserSliderCode_drive2]
    }
    else if (sliderThatWasMoved == vol2)
    {
        //[UserSliderCode_vol2] -- add your slider handling code here..
        //[/UserSliderCode_vol2]
    }
    else if (sliderThatWasMoved == pan2)
    {
        //[UserSliderCode_pan2] -- add your slider handling code here..
        //[/UserSliderCode_pan2]
    }
    else if (sliderThatWasMoved == modAmount2)
    {
        //[UserSliderCode_modAmount2] -- add your slider handling code here..
        //[/UserSliderCode_modAmount2]
    }
    else if (sliderThatWasMoved == tune3)
    {
        //[UserSliderCode_tune3] -- add your slider handling code here..
        //[/UserSliderCode_tune3]
    }
    else if (sliderThatWasMoved == veloA3)
    {
        //[UserSliderCode_veloA3] -- add your slider handling code here..
        //[/UserSliderCode_veloA3]
    }
    else if (sliderThatWasMoved == veloD3)
    {
        //[UserSliderCode_veloD3] -- add your slider handling code here..
        //[/UserSliderCode_veloD3]
    }
    else if (sliderThatWasMoved == pitchD3)
    {
        //[UserSliderCode_pitchD3] -- add your slider handling code here..
        //[/UserSliderCode_pitchD3]
    }
    else if (sliderThatWasMoved == fmamnt3)
    {
        //[UserSliderCode_fmamnt3] -- add your slider handling code here..
        //[/UserSliderCode_fmamnt3]
    }
    else if (sliderThatWasMoved == fmdepth3)
    {
        //[UserSliderCode_fmdepth3] -- add your slider handling code here..
        //[/UserSliderCode_fmdepth3]
    }
    else if (sliderThatWasMoved == drive3)
    {
        //[UserSliderCode_drive3] -- add your slider handling code here..
        //[/UserSliderCode_drive3]
    }
    else if (sliderThatWasMoved == vol3)
    {
        //[UserSliderCode_vol3] -- add your slider handling code here..
        //[/UserSliderCode_vol3]
    }
    else if (sliderThatWasMoved == pan3)
    {
        //[UserSliderCode_pan3] -- add your slider handling code here..
        //[/UserSliderCode_pan3]
    }
    else if (sliderThatWasMoved == modAmount3)
    {
        //[UserSliderCode_modAmount3] -- add your slider handling code here..
        //[/UserSliderCode_modAmount3]
    }
    else if (sliderThatWasMoved == filterType1)
    {
        //[UserSliderCode_filterType1] -- add your slider handling code here..
        //[/UserSliderCode_filterType1]
    }
    else if (sliderThatWasMoved == tune5)
    {
        //[UserSliderCode_tune5] -- add your slider handling code here..
        //[/UserSliderCode_tune5]
    }
    else if (sliderThatWasMoved == snareNoiseFreq2)
    {
        //[UserSliderCode_snareNoiseFreq2] -- add your slider handling code here..
        //[/UserSliderCode_snareNoiseFreq2]
    }
    else if (sliderThatWasMoved == veloA5)
    {
        //[UserSliderCode_veloA5] -- add your slider handling code here..
        //[/UserSliderCode_veloA5]
    }
    else if (sliderThatWasMoved == veloD5)
    {
        //[UserSliderCode_veloD5] -- add your slider handling code here..
        //[/UserSliderCode_veloD5]
    }
    else if (sliderThatWasMoved == pitchD5)
    {
        //[UserSliderCode_pitchD5] -- add your slider handling code here..
        //[/UserSliderCode_pitchD5]
    }
    else if (sliderThatWasMoved == SnareEqFreq2)
    {
        //[UserSliderCode_SnareEqFreq2] -- add your slider handling code here..
        //[/UserSliderCode_SnareEqFreq2]
    }
    else if (sliderThatWasMoved == snareEqGain2)
    {
        //[UserSliderCode_snareEqGain2] -- add your slider handling code here..
        //[/UserSliderCode_snareEqGain2]
    }
    else if (sliderThatWasMoved == snareMix2)
    {
        //[UserSliderCode_snareMix2] -- add your slider handling code here..
        //[/UserSliderCode_snareMix2]
    }
    else if (sliderThatWasMoved == vol5)
    {
        //[UserSliderCode_vol5] -- add your slider handling code here..
        //[/UserSliderCode_vol5]
    }
    else if (sliderThatWasMoved == pan5)
    {
        //[UserSliderCode_pan5] -- add your slider handling code here..
        //[/UserSliderCode_pan5]
    }
    else if (sliderThatWasMoved == modAmount5)
    {
        //[UserSliderCode_modAmount5] -- add your slider handling code here..
        //[/UserSliderCode_modAmount5]
    }
    else if (sliderThatWasMoved == filterType2)
    {
        //[UserSliderCode_filterType2] -- add your slider handling code here..
        //[/UserSliderCode_filterType2]
    }
    else if (sliderThatWasMoved == veloD6)
    {
        //[UserSliderCode_veloD6] -- add your slider handling code here..
        //[/UserSliderCode_veloD6]
    }
    else if (sliderThatWasMoved == snareEqGain3)
    {
        //[UserSliderCode_snareEqGain3] -- add your slider handling code here..
        //[/UserSliderCode_snareEqGain3]
    }
    else if (sliderThatWasMoved == SnareEqFreq3)
    {
        //[UserSliderCode_SnareEqFreq3] -- add your slider handling code here..
        //[/UserSliderCode_SnareEqFreq3]
    }
    else if (sliderThatWasMoved == vol6)
    {
        //[UserSliderCode_vol6] -- add your slider handling code here..
        //[/UserSliderCode_vol6]
    }
    else if (sliderThatWasMoved == pan6)
    {
        //[UserSliderCode_pan6] -- add your slider handling code here..
        //[/UserSliderCode_pan6]
    }
    else if (sliderThatWasMoved == tune6)
    {
        //[UserSliderCode_tune6] -- add your slider handling code here..
        //[/UserSliderCode_tune6]
    }
    else if (sliderThatWasMoved == modOscTune1)
    {
        //[UserSliderCode_modOscTune1] -- add your slider handling code here..
        //[/UserSliderCode_modOscTune1]
    }
    else if (sliderThatWasMoved == modOscTune2)
    {
        //[UserSliderCode_modOscTune2] -- add your slider handling code here..
        //[/UserSliderCode_modOscTune2]
    }
    else if (sliderThatWasMoved == HatFmMod1)
    {
        //[UserSliderCode_HatFmMod1] -- add your slider handling code here..
        //[/UserSliderCode_HatFmMod1]
    }
    else if (sliderThatWasMoved == HatFmMod2)
    {
        //[UserSliderCode_HatFmMod2] -- add your slider handling code here..
        //[/UserSliderCode_HatFmMod2]
    }
    else if (sliderThatWasMoved == veloA6)
    {
        //[UserSliderCode_veloA6] -- add your slider handling code here..
        //[/UserSliderCode_veloA6]
    }
    else if (sliderThatWasMoved == repeat1)
    {
        //[UserSliderCode_repeat1] -- add your slider handling code here..
        //[/UserSliderCode_repeat1]
    }
    else if (sliderThatWasMoved == repeat2)
    {
        //[UserSliderCode_repeat2] -- add your slider handling code here..
        //[/UserSliderCode_repeat2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff">
    <TEXT pos="-12 76 76 30" fill="solid: ff000000" hasStroke="0" text="BD"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 840 0 l 40 0</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 952 40 l 40 40</PATH>
    <TEXT pos="44 36 76 30" fill="solid: ff000000" hasStroke="0" text="Tune"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="180 36 76 30" fill="solid: ff000000" hasStroke="0" text="Velo A"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="252 36 76 30" fill="solid: ff000000" hasStroke="0" text="Velo D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="412 36 76 30" fill="solid: ff000000" hasStroke="0" text="Pitch D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="596 36 76 30" fill="solid: ff000000" hasStroke="0" text="FM Amnt"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="668 36 76 30" fill="solid: ff000000" hasStroke="0" text="FM Detn"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="748 36 76 30" fill="solid: ff000000" hasStroke="0" text="Drive"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="4 428 28 30" fill="solid: ff000000" hasStroke="0" text="SD"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 960 392 l 40 392</PATH>
    <TEXT pos="52 388 48 30" fill="solid: ff000000" hasStroke="0" text="Tune"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="172 388 76 30" fill="solid: ff000000" hasStroke="0" text="Velo A"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="244 388 76 30" fill="solid: ff000000" hasStroke="0" text="Velo D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="404 388 76 30" fill="solid: ff000000" hasStroke="0" text="Pitch D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="588 388 76 30" fill="solid: ff000000" hasStroke="0" text="Filter F"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="660 388 76 30" fill="solid: ff000000" hasStroke="0" text="Filter Reso"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="332 388 76 30" fill="solid: ff000000" hasStroke="0" text="Mix"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="844 36 76 30" fill="solid: ff000000" hasStroke="0" text="Volume"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="908 36 76 30" fill="solid: ff000000" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="836 388 76 30" fill="solid: ff000000" hasStroke="0" text="Volume"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="900 388 76 30" fill="solid: ff000000" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="108 388 76 30" fill="solid: ff000000" hasStroke="0" text="Noise F"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="492 36 76 30" fill="solid: ff000000" hasStroke="0" text="ModAmount"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="484 388 76 30" fill="solid: ff000000" hasStroke="0" text="ModAmount"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="-12 76 76 30" fill="solid: ff000000" hasStroke="0" text="BD"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="-20 180 76 30" fill="solid: ff000000" hasStroke="0" text="BD"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 832 0 l 32 0</PATH>
    <TEXT pos="36 148 76 30" fill="solid: ff000000" hasStroke="0" text="Tune"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="172 148 76 30" fill="solid: ff000000" hasStroke="0" text="Velo A"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="244 148 76 30" fill="solid: ff000000" hasStroke="0" text="Velo D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="404 148 76 30" fill="solid: ff000000" hasStroke="0" text="Pitch D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="588 148 76 30" fill="solid: ff000000" hasStroke="0" text="FM Amnt"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="660 148 76 30" fill="solid: ff000000" hasStroke="0" text="FM Detn"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="740 148 76 30" fill="solid: ff000000" hasStroke="0" text="Drive"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="836 148 76 30" fill="solid: ff000000" hasStroke="0" text="Volume"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="900 148 76 30" fill="solid: ff000000" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="484 148 76 30" fill="solid: ff000000" hasStroke="0" text="ModAmount"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="-20 180 76 30" fill="solid: ff000000" hasStroke="0" text="BD"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 832 0 l 32 0</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 960 152 l 40 152</PATH>
    <TEXT pos="36 276 76 30" fill="solid: ff000000" hasStroke="0" text="Tune"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="172 276 76 30" fill="solid: ff000000" hasStroke="0" text="Velo A"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="244 276 76 30" fill="solid: ff000000" hasStroke="0" text="Velo D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="404 276 76 30" fill="solid: ff000000" hasStroke="0" text="Pitch D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="588 276 76 30" fill="solid: ff000000" hasStroke="0" text="FM Amnt"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="660 276 76 30" fill="solid: ff000000" hasStroke="0" text="FM Detn"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="740 276 76 30" fill="solid: ff000000" hasStroke="0" text="Drive"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="836 276 76 30" fill="solid: ff000000" hasStroke="0" text="Volume"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="900 276 76 30" fill="solid: ff000000" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="484 276 76 30" fill="solid: ff000000" hasStroke="0" text="ModAmount"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="-20 316 76 30" fill="solid: ff000000" hasStroke="0" text="BD"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 960 280 l 48 280</PATH>
    <TEXT pos="748 388 76 30" fill="solid: ff000000" hasStroke="0" text="Filter Type"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 960 496 l 40 496</PATH>
    <TEXT pos="4 540 28 30" fill="solid: ff000000" hasStroke="0" text="SD"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="36 492 76 30" fill="solid: ff000000" hasStroke="0" text="Tune"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="172 492 76 30" fill="solid: ff000000" hasStroke="0" text="Velo A"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="244 492 76 30" fill="solid: ff000000" hasStroke="0" text="Velo D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="404 492 76 30" fill="solid: ff000000" hasStroke="0" text="Pitch D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="588 492 76 30" fill="solid: ff000000" hasStroke="0" text="Filter F"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="660 492 76 30" fill="solid: ff000000" hasStroke="0" text="Filter Reso"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="332 492 76 30" fill="solid: ff000000" hasStroke="0" text="Mix"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="836 492 76 30" fill="solid: ff000000" hasStroke="0" text="Volume"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="900 492 76 30" fill="solid: ff000000" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="108 492 76 30" fill="solid: ff000000" hasStroke="0" text="Noise F"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="484 492 76 30" fill="solid: ff000000" hasStroke="0" text="ModAmount"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="748 492 76 30" fill="solid: ff000000" hasStroke="0" text="Filter Type"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <PATH pos="0 0 100 100" fill="solid: ff362aa5" hasStroke="1" stroke="1.60000002, mitered, butt"
          strokeColour="solid: ff000000" nonZeroWinding="1">s 960 600 l 48 600</PATH>
    <TEXT pos="596 596 76 30" fill="solid: ff000000" hasStroke="0" text="Filter F"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="668 596 76 30" fill="solid: ff000000" hasStroke="0" text="Filter Reso"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="324 596 76 30" fill="solid: ff000000" hasStroke="0" text="Velo D"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="836 596 76 30" fill="solid: ff000000" hasStroke="0" text="Volume"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="900 596 76 30" fill="solid: ff000000" hasStroke="0" text="Pan"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="36 596 76 30" fill="solid: ff000000" hasStroke="0" text="Tune"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="100 596 76 30" fill="solid: ff000000" hasStroke="0" text="mod1 f"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="172 596 76 30" fill="solid: ff000000" hasStroke="0" text="mod2 f"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="420 596 76 30" fill="solid: ff000000" hasStroke="0" text="gain1"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="492 596 76 30" fill="solid: ff000000" hasStroke="0" text="gain2"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="252 596 76 30" fill="solid: ff000000" hasStroke="0" text="Velo A"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="4f03517362eb46ec" memberName="tune1" virtualName=""
          explicitFocusOrder="0" pos="48 64 64 72" min="0" max="1000" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="14f00b477c145d5" memberName="veloA1" virtualName=""
          explicitFocusOrder="0" pos="184 64 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="d670697c4007d965" memberName="veloD1" virtualName=""
          explicitFocusOrder="0" pos="256 64 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="54c56f86d7518d57" memberName="pitchD1"
          virtualName="" explicitFocusOrder="0" pos="424 64 64 72" min="0"
          max="5" int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="94ef69aaa8cb0055" memberName="fmamnt1"
          virtualName="" explicitFocusOrder="0" pos="600 64 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="cd1992a3e0be8940" memberName="fmdepth1"
          virtualName="" explicitFocusOrder="0" pos="672 64 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="d3384654b4f8387b" memberName="drive1" virtualName=""
          explicitFocusOrder="0" pos="752 64 64 72" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="f20249fbd5d3fccb" memberName="tune4" virtualName=""
          explicitFocusOrder="0" pos="48 416 64 72" min="0" max="1000"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="c9bb0f5b854feda2" memberName="snareNoiseFreq"
          virtualName="" explicitFocusOrder="0" pos="120 416 64 72" min="0"
          max="1000" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="2141f10c0a4d31f4" memberName="veloA4" virtualName=""
          explicitFocusOrder="0" pos="189 416 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="fbaae89833e5f3a2" memberName="veloD4" virtualName=""
          explicitFocusOrder="0" pos="261 416 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="588c057e64a2768a" memberName="pitchD4"
          virtualName="" explicitFocusOrder="0" pos="429 416 64 72" min="0"
          max="5" int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="ca051b41677e6ef2" memberName="SnareEqFreq"
          virtualName="" explicitFocusOrder="0" pos="605 416 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="3e61cac26fb15b01" memberName="snareEqGain"
          virtualName="" explicitFocusOrder="0" pos="677 416 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="d1d53d7f6e802a2a" memberName="snareMix"
          virtualName="" explicitFocusOrder="0" pos="336 416 64 16" min="0"
          max="100" int="0.01" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="77d84fabe46bffd6" memberName="vol1" virtualName=""
          explicitFocusOrder="0" pos="848 64 64 72" min="0" max="100" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="10f644fa05562a51" memberName="vol4" virtualName=""
          explicitFocusOrder="0" pos="848 416 64 72" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="ec7badf74f924d4f" memberName="pan1" virtualName=""
          explicitFocusOrder="0" pos="920 64 64 72" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="d58a4960c6038dbe" memberName="pan4" virtualName=""
          explicitFocusOrder="0" pos="920 416 64 72" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="503d0a10cf599ca5" memberName="modAmount1"
          virtualName="" explicitFocusOrder="0" pos="496 64 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="50ee0f4df42f5043" memberName="modAmount4"
          virtualName="" explicitFocusOrder="0" pos="504 416 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="aa87e8e6c5d244ff" memberName="tune2" virtualName=""
          explicitFocusOrder="0" pos="43 170 64 72" min="0" max="1000"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="49ccefd4a0852f49" memberName="veloA2" virtualName=""
          explicitFocusOrder="0" pos="179 170 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="31ae60db534c34f6" memberName="veloD2" virtualName=""
          explicitFocusOrder="0" pos="251 170 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="a878358c23fac146" memberName="pitchD2"
          virtualName="" explicitFocusOrder="0" pos="419 170 64 72" min="0"
          max="5" int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="c4a9435cf11a2f6a" memberName="fmamnt2"
          virtualName="" explicitFocusOrder="0" pos="595 170 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="71d173be7cdb09dd" memberName="fmdepth2"
          virtualName="" explicitFocusOrder="0" pos="667 170 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="4175c87459bbc6a9" memberName="drive2" virtualName=""
          explicitFocusOrder="0" pos="747 170 64 72" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="61c2b9343f74a524" memberName="vol2" virtualName=""
          explicitFocusOrder="0" pos="843 170 64 72" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="696b2b80d3a3fb4e" memberName="pan2" virtualName=""
          explicitFocusOrder="0" pos="915 170 64 72" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="def68121053b6561" memberName="modAmount2"
          virtualName="" explicitFocusOrder="0" pos="491 170 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="6edaf1a00e2f4cd6" memberName="tune3" virtualName=""
          explicitFocusOrder="0" pos="45 302 64 72" min="0" max="1000"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="4d55bc949149169a" memberName="veloA3" virtualName=""
          explicitFocusOrder="0" pos="181 302 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="bffb39deff5b6fb3" memberName="veloD3" virtualName=""
          explicitFocusOrder="0" pos="253 302 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="dc3bfd6b87656f19" memberName="pitchD3"
          virtualName="" explicitFocusOrder="0" pos="421 302 64 72" min="0"
          max="5" int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="efcb74cf8ad0848e" memberName="fmamnt3"
          virtualName="" explicitFocusOrder="0" pos="597 302 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="96471b96cd7d0bb5" memberName="fmdepth3"
          virtualName="" explicitFocusOrder="0" pos="669 302 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="70b85171dccc8689" memberName="drive3" virtualName=""
          explicitFocusOrder="0" pos="749 302 64 72" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="f499634d518686d4" memberName="vol3" virtualName=""
          explicitFocusOrder="0" pos="845 302 64 72" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="83f5dd3eae02b459" memberName="pan3" virtualName=""
          explicitFocusOrder="0" pos="917 302 64 72" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="cf0b2989015ee9bd" memberName="modAmount3"
          virtualName="" explicitFocusOrder="0" pos="493 302 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="57c45f1c65fa6970" memberName="filterType1"
          virtualName="" explicitFocusOrder="0" pos="760 416 64 72" min="1"
          max="7" int="1" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="bbea198836f61b54" memberName="tune5" virtualName=""
          explicitFocusOrder="0" pos="44 517 64 72" min="0" max="1000"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="97fdb16bb454f4fb" memberName="snareNoiseFreq2"
          virtualName="" explicitFocusOrder="0" pos="116 517 64 72" min="0"
          max="1000" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="e0da54d38b80afef" memberName="veloA5" virtualName=""
          explicitFocusOrder="0" pos="185 517 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="34286d42c73a469d" memberName="veloD5" virtualName=""
          explicitFocusOrder="0" pos="257 517 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="85200efcc9fca2cd" memberName="pitchD5"
          virtualName="" explicitFocusOrder="0" pos="425 517 64 72" min="0"
          max="5" int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="3ec15a6ffd18f094" memberName="SnareEqFreq2"
          virtualName="" explicitFocusOrder="0" pos="601 517 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="a70e95f954edfeda" memberName="snareEqGain2"
          virtualName="" explicitFocusOrder="0" pos="673 517 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="840e87d8f9202da5" memberName="snareMix2"
          virtualName="" explicitFocusOrder="0" pos="336 520 64 16" min="0"
          max="100" int="0.01" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="a052914092f50a8b" memberName="vol5" virtualName=""
          explicitFocusOrder="0" pos="844 517 64 72" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="36f2c6ea487ef5f7" memberName="pan5" virtualName=""
          explicitFocusOrder="0" pos="916 517 64 72" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="3ab5909dfbd49022" memberName="modAmount5"
          virtualName="" explicitFocusOrder="0" pos="500 517 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="b8378885e24a4af6" memberName="filterType2"
          virtualName="" explicitFocusOrder="0" pos="756 517 64 72" min="1"
          max="7" int="1" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="455d32b39a5f7ebc" memberName="veloD6" virtualName=""
          explicitFocusOrder="0" pos="328 624 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="5944399cb6afe612" memberName="snareEqGain3"
          virtualName="" explicitFocusOrder="0" pos="672 624 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="2dcca844227acef5" memberName="SnareEqFreq3"
          virtualName="" explicitFocusOrder="0" pos="600 624 64 72" min="0"
          max="100" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="cd1647ae11763aca" memberName="vol6" virtualName=""
          explicitFocusOrder="0" pos="840 624 64 72" min="0" max="100"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="8acc2c5f8b9a7af8" memberName="pan6" virtualName=""
          explicitFocusOrder="0" pos="912 624 64 72" min="0" max="1" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="354ee15905733b8c" memberName="tune6" virtualName=""
          explicitFocusOrder="0" pos="40 624 64 72" min="0" max="1000"
          int="0.01" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="8b9aa5f092d802c0" memberName="modOscTune1"
          virtualName="" explicitFocusOrder="0" pos="112 624 64 72" min="0"
          max="1000" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="b6e062e9cc6c65b2" memberName="modOscTune2"
          virtualName="" explicitFocusOrder="0" pos="184 624 64 72" min="0"
          max="1000" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="37f9fe3b8c395f5e" memberName="HatFmMod1"
          virtualName="" explicitFocusOrder="0" pos="424 624 64 72" min="0"
          max="1000" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="3a9d47534653c2be" memberName="HatFmMod2"
          virtualName="" explicitFocusOrder="0" pos="504 624 64 72" min="0"
          max="1000" int="0.01" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="0.5"/>
  <SLIDER name="new slider" id="1141c2c5c7695990" memberName="veloA6" virtualName=""
          explicitFocusOrder="0" pos="256 624 64 72" min="0" max="5" int="0.01"
          style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="fcad3c3a7458747b" memberName="repeat1"
          virtualName="" explicitFocusOrder="0" pos="344 440 48 48" min="0"
          max="20" int="1" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="7c806bc71725af3d" memberName="repeat2"
          virtualName="" explicitFocusOrder="0" pos="344 539 48 48" min="0"
          max="20" int="1" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
