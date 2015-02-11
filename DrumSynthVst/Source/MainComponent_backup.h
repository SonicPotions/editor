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

#ifndef __JUCER_HEADER_MAINCOMPONENT_MAINCOMPONENTBACKUP_C99C20CE__
#define __JUCER_HEADER_MAINCOMPONENT_MAINCOMPONENTBACKUP_C99C20CE__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public SliderListener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    Slider* tune1;
    Slider* veloA1;
    Slider* veloD1;
    Slider* pitchD1;
    Slider* fmamnt1;
    Slider* fmdepth1;
    Slider* drive1;
    Slider* tune4;
    Slider* snareNoiseFreq;
    Slider* veloA4;
    Slider* veloD4;
    Slider* pitchD4;
    Slider* SnareEqFreq;
    Slider* snareEqGain;
    Slider* snareMix;
    Slider* vol1;
    Slider* vol4;
    Slider* pan1;
    Slider* pan4;
    Slider* modAmount1;
    Slider* modAmount4;
    Slider* tune2;
    Slider* veloA2;
    Slider* veloD2;
    Slider* pitchD2;
    Slider* fmamnt2;
    Slider* fmdepth2;
    Slider* drive2;
    Slider* vol2;
    Slider* pan2;
    Slider* modAmount2;
    Slider* tune3;
    Slider* veloA3;
    Slider* veloD3;
    Slider* pitchD3;
    Slider* fmamnt3;
    Slider* fmdepth3;
    Slider* drive3;
    Slider* vol3;
    Slider* pan3;
    Slider* modAmount3;
    Slider* filterType1;
    Slider* tune5;
    Slider* snareNoiseFreq2;
    Slider* veloA5;
    Slider* veloD5;
    Slider* pitchD5;
    Slider* SnareEqFreq2;
    Slider* snareEqGain2;
    Slider* snareMix2;
    Slider* vol5;
    Slider* pan5;
    Slider* modAmount5;
    Slider* filterType2;
    Slider* veloD6;
    Slider* snareEqGain3;
    Slider* SnareEqFreq3;
    Slider* vol6;
    Slider* pan6;
    Slider* tune6;
    Slider* modOscTune1;
    Slider* modOscTune2;
    Slider* HatFmMod1;
    Slider* HatFmMod2;
    Slider* veloA6;
    Slider* repeat1;
    Slider* repeat2;
    Path internalPath1;
    Path internalPath2;
    Path internalPath3;
    Path internalPath4;
    Path internalPath5;
    Path internalPath6;
    Path internalPath7;
    Path internalPath8;
    Path internalPath9;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    MainComponent (const MainComponent&);
    const MainComponent& operator= (const MainComponent&);
};


#endif   // __JUCER_HEADER_MAINCOMPONENT_MAINCOMPONENTBACKUP_C99C20CE__
