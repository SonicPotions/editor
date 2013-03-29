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

#include "drumSynthSource\Parameters.h"
#include "drumSynthSource\menu.h"
#include "drumSynthSource\menuText.h"
#include "drumSynthSource\menuPages.h"

#include "./JuceLibraryCode/JuceHeader.h"

#define LIKE 1
#define DISLIKE 2
#define NOT_VOTED 0

#define MASK_PARAMETER 0x07

#define MASK_PAGE 0xf8
#define PAGE_SHIFT 3


#define NUM_SUB_PAGES 8	// a maximum of 8 subpages 

class Patch
{
public: 
	Patch()
	{
		initParameters();

		mLike = NOT_VOTED;
		mGeneration = 0;
	};
	~Patch()
	{
	};

	void setName(String name)
	{
		mName = name;
	}

	String getName()
	{
		return mName;
	}

	void setParameter(int idx, int value)
	{
		jassert(idx<NUM_PARAMS);
		parameters[idx].value = value;
	}

	int getParameter(int idx)
	{
		return parameters[idx].value;
	}

	void setGeneration(int generation)
	{
		mGeneration = generation;
	}

	int getGeneration()
	{
		return mGeneration;
	}

	void setOpinion(int op)
	{
		jassert(op>=0 && op <= 2);
		mLike = op;
	}

	int getDtype(int index)
	{
		return parameters[index].dtype;
	}

	int getRange(int paramNr)
	{
		return getParamMax(paramNr) - getParamMin(paramNr);
	}

	int getParamMin(int paramNr)
	{
		switch(parameters[paramNr].dtype&0x0F)
			{


				case DTYPE_PM63:
					return -63;
					break;
					
								
				case DTYPE_1B6:
					return 1; 
				break;

				case DTYPE_1B16:
					return 1; 
					break;

				default:
					return 0;
					break;

		
			}
	}
	int getParamMax(int paramNr)
	{
		switch(parameters[paramNr].dtype&0x0F)
			{


				case DTYPE_TARGET_SELECTION_VELO:
					return (NUM_SUB_PAGES * 8 -1); 
				break;
			
				case DTYPE_TARGET_SELECTION_LFO:
					return (NUM_SUB_PAGES * 8 -1); 		
				break;
			
				default:
				case DTYPE_0B127:
					return 127;
					break;

				case DTYPE_PM63:
					return 63;
					break;
					
				case DTYPE_AUTOM_TARGET:
					return END_OF_SOUND_PARAMETERS-1;
					break;
				
				case DTYPE_0B255:
					return 255;
					break;
				
				case DTYPE_1B6:
					return 6; 
				break;

				case DTYPE_1B16:
					return 16; 
					break;
				case DTYPE_MIX_FM:
				case DTYPE_ON_OFF:
				case DTYPE_0b1:
					 return 1;
					break;				
				case DTYPE_MENU:
				{
					//get the used menu (upper 4 bit)
					const uint8_t menuId = (parameters[paramNr].dtype>>4);
					//get the number of entries
					uint8_t numEntries;
					switch(menuId)
					{
						case MENU_AUDIO_OUT:
							numEntries = outputNames[0][0];
						
						break;
					
						case MENU_FILTER:
							numEntries = filterTypes[0][0];
						break;
					
						case MENU_SYNC_RATES:
							numEntries = syncRateNames[0][0];
						break;
					
						case MENU_LFO_WAVES:
							numEntries = lfoWaveNames[0][0];
						break;
					
						case MENU_RETRIGGER:
							numEntries = retriggerNames[0][0];
						break;		
						
						case MENU_SEQ_QUANT:
							numEntries = quantisationNames[0][0];
						break;						
						
						case MENU_NEXT_PATTERN:
							numEntries = nextPatternNames[0][0];
						break;			
					
						case MENU_WAVEFORM:
							numEntries = waveformNames[0][0];
							//value = 127*frac; //TODO to adapt full midi cc range <-> leads to inconsitencies
						break;
					
						case MENU_ROLL_RATES:
							numEntries = rollRateNames[0][0];
						break;
					
						default:
							numEntries = 0;
						break;
					}
				
					return numEntries-1;
				
				}
				break;

		
			}
	}
private:
	void initParameters()
	{
		//from menu_init()
		//init the parameter array dtype fields to  DTYPE_0B127;
		parameters[PAR_EUKLID_LENGTH].value = 16;
	parameters[PAR_EUKLID_STEPS].value = 16;
	

	//init the parameter array dtype fields to  DTYPE_0B127;
	for(int i=0;i<NUM_PARAMS;i++)
	{
		parameters[i].dtype = DTYPE_0B127;
		/*
		if(i<PAR_BEGINNING_OF_GLOBALS)
		{
			parameters2[i].dtype = DTYPE_0B127;
		}
		*/	
	}
	
	//Now set up the non 0B127 types
	parameters[PAR_MIDI_CHAN_1].dtype		= DTYPE_1B16;
	parameters[PAR_MIDI_CHAN_2].dtype		= DTYPE_1B16;
	parameters[PAR_MIDI_CHAN_3].dtype		= DTYPE_1B16;
	parameters[PAR_MIDI_CHAN_4].dtype		= DTYPE_1B16;
	parameters[PAR_MIDI_CHAN_5].dtype		= DTYPE_1B16;
	parameters[PAR_MIDI_CHAN_6].dtype		= DTYPE_1B16;
	
	parameters[PAR_AUDIO_OUT1].dtype		= DTYPE_MENU | (MENU_AUDIO_OUT<<4);
	parameters[PAR_AUDIO_OUT2].dtype		= DTYPE_MENU | (MENU_AUDIO_OUT<<4);
	parameters[PAR_AUDIO_OUT3].dtype		= DTYPE_MENU | (MENU_AUDIO_OUT<<4);
	parameters[PAR_AUDIO_OUT4].dtype		= DTYPE_MENU | (MENU_AUDIO_OUT<<4);
	parameters[PAR_AUDIO_OUT5].dtype		= DTYPE_MENU | (MENU_AUDIO_OUT<<4);
	parameters[PAR_AUDIO_OUT6].dtype		= DTYPE_MENU | (MENU_AUDIO_OUT<<4);
	
	parameters[PAR_OSC_WAVE_DRUM1].dtype	= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_OSC_WAVE_DRUM2].dtype	= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_OSC_WAVE_DRUM3].dtype	= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_WAVE1_CYM].dtype			= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_WAVE1_HH].dtype			= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_OSC_WAVE_SNARE].dtype	= DTYPE_MENU | (MENU_WAVEFORM<<4);
	
	parameters[PAR_MOD_WAVE_DRUM1].dtype	= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_MOD_WAVE_DRUM2].dtype	= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_MOD_WAVE_DRUM3].dtype	= DTYPE_MENU | (MENU_WAVEFORM<<4);
	
	parameters[PAR_WAVE2_CYM].dtype			= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_WAVE3_CYM].dtype			= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_WAVE2_HH].dtype			= DTYPE_MENU | (MENU_WAVEFORM<<4);
	parameters[PAR_WAVE3_HH].dtype			= DTYPE_MENU | (MENU_WAVEFORM<<4);
	
	parameters[PAR_FILTER_TYPE_4].dtype		= DTYPE_MENU | (MENU_FILTER<<4);
	parameters[PAR_FILTER_TYPE_5].dtype		= DTYPE_MENU | (MENU_FILTER<<4);
	parameters[PAR_FILTER_TYPE_6].dtype		= DTYPE_MENU | (MENU_FILTER<<4);
	parameters[PAR_FILTER_TYPE_1].dtype		= DTYPE_MENU | (MENU_FILTER<<4);
	parameters[PAR_FILTER_TYPE_2].dtype		= DTYPE_MENU | (MENU_FILTER<<4);
	parameters[PAR_FILTER_TYPE_3].dtype		= DTYPE_MENU | (MENU_FILTER<<4);
	
	parameters[PAR_SYNC_LFO1].dtype			= DTYPE_MENU | (MENU_SYNC_RATES<<4);
	parameters[PAR_SYNC_LFO2].dtype			= DTYPE_MENU | (MENU_SYNC_RATES<<4);
	parameters[PAR_SYNC_LFO3].dtype			= DTYPE_MENU | (MENU_SYNC_RATES<<4);
	parameters[PAR_SYNC_LFO4].dtype			= DTYPE_MENU | (MENU_SYNC_RATES<<4);
	parameters[PAR_SYNC_LFO5].dtype			= DTYPE_MENU | (MENU_SYNC_RATES<<4);
	parameters[PAR_SYNC_LFO6].dtype			= DTYPE_MENU | (MENU_SYNC_RATES<<4);
	
	parameters[PAR_WAVE_LFO1].dtype			= DTYPE_MENU | (MENU_LFO_WAVES<<4);
	parameters[PAR_WAVE_LFO2].dtype			= DTYPE_MENU | (MENU_LFO_WAVES<<4);
	parameters[PAR_WAVE_LFO3].dtype			= DTYPE_MENU | (MENU_LFO_WAVES<<4);
	parameters[PAR_WAVE_LFO4].dtype			= DTYPE_MENU | (MENU_LFO_WAVES<<4);
	parameters[PAR_WAVE_LFO5].dtype			= DTYPE_MENU | (MENU_LFO_WAVES<<4);
	parameters[PAR_WAVE_LFO6].dtype			= DTYPE_MENU | (MENU_LFO_WAVES<<4);
	
	parameters[PAR_ROLL].dtype			= DTYPE_MENU | (MENU_ROLL_RATES<<4);
	
	
	parameters[PAR_STEP_NOTE].dtype			= DTYPE_PM63;
	
	parameters[PAR_FINE1].dtype = DTYPE_PM63;
	parameters[PAR_FINE2].dtype = DTYPE_PM63;
	parameters[PAR_FINE3].dtype = DTYPE_PM63;
	parameters[PAR_FINE4].dtype = DTYPE_PM63;
	parameters[PAR_FINE5].dtype = DTYPE_PM63;
	parameters[PAR_FINE6].dtype = DTYPE_PM63;
	
	parameters[PAR_PAN1].dtype = DTYPE_PM63;
	parameters[PAR_PAN2].dtype = DTYPE_PM63;
	parameters[PAR_PAN3].dtype = DTYPE_PM63;
	parameters[PAR_PAN4].dtype = DTYPE_PM63;
	parameters[PAR_PAN5].dtype = DTYPE_PM63;
	parameters[PAR_PAN6].dtype = DTYPE_PM63;
	
	parameters[PAR_P1_DEST].dtype = DTYPE_AUTOM_TARGET;
	parameters[PAR_P2_DEST].dtype = DTYPE_AUTOM_TARGET;
	parameters[PAR_AUTOM_TRACK].dtype = DTYPE_0b1;
	
	

	parameters[PAR_BPM].dtype				= DTYPE_0B255;
	
	parameters[PAR_MIX_MOD_1].dtype			= DTYPE_MIX_FM;
	parameters[PAR_MIX_MOD_2].dtype			= DTYPE_MIX_FM;
	parameters[PAR_MIX_MOD_3].dtype			= DTYPE_MIX_FM;
	
	parameters[PAR_VOLUME_MOD_ON_OFF1].dtype= DTYPE_ON_OFF;
	parameters[PAR_VOLUME_MOD_ON_OFF2].dtype= DTYPE_ON_OFF;
	parameters[PAR_VOLUME_MOD_ON_OFF3].dtype= DTYPE_ON_OFF;
	parameters[PAR_VOLUME_MOD_ON_OFF4].dtype= DTYPE_ON_OFF;
	parameters[PAR_VOLUME_MOD_ON_OFF5].dtype= DTYPE_ON_OFF;
	parameters[PAR_VOLUME_MOD_ON_OFF6].dtype= DTYPE_ON_OFF;
	
	parameters[PAR_VEL_DEST_1].dtype = 	DTYPE_TARGET_SELECTION_VELO;
	parameters[PAR_VEL_DEST_2].dtype = 	DTYPE_TARGET_SELECTION_VELO;
	parameters[PAR_VEL_DEST_3].dtype = 	DTYPE_TARGET_SELECTION_VELO;
	parameters[PAR_VEL_DEST_4].dtype = 	DTYPE_TARGET_SELECTION_VELO;
	parameters[PAR_VEL_DEST_5].dtype = 	DTYPE_TARGET_SELECTION_VELO;
	parameters[PAR_VEL_DEST_6].dtype = 	DTYPE_TARGET_SELECTION_VELO;
	
	parameters[PAR_EUKLID_LENGTH].dtype = DTYPE_1B16;
	parameters[PAR_EUKLID_STEPS].dtype = DTYPE_1B16;
	
	parameters[PAR_TARGET_LFO1].dtype = DTYPE_TARGET_SELECTION_LFO;
	parameters[PAR_TARGET_LFO2].dtype = DTYPE_TARGET_SELECTION_LFO;
	parameters[PAR_TARGET_LFO3].dtype = DTYPE_TARGET_SELECTION_LFO;
	parameters[PAR_TARGET_LFO4].dtype = DTYPE_TARGET_SELECTION_LFO;
	parameters[PAR_TARGET_LFO5].dtype = DTYPE_TARGET_SELECTION_LFO;
	parameters[PAR_TARGET_LFO6].dtype = DTYPE_TARGET_SELECTION_LFO;
	
	parameters[PAR_RETRIGGER_LFO1].dtype = DTYPE_MENU | (MENU_RETRIGGER<<4);
	parameters[PAR_RETRIGGER_LFO2].dtype = DTYPE_MENU | (MENU_RETRIGGER<<4);
	parameters[PAR_RETRIGGER_LFO3].dtype = DTYPE_MENU | (MENU_RETRIGGER<<4);
	parameters[PAR_RETRIGGER_LFO4].dtype = DTYPE_MENU | (MENU_RETRIGGER<<4);
	parameters[PAR_RETRIGGER_LFO5].dtype = DTYPE_MENU | (MENU_RETRIGGER<<4);
	parameters[PAR_RETRIGGER_LFO6].dtype = DTYPE_MENU | (MENU_RETRIGGER<<4);
	
	parameters[PAR_PATTERN_NEXT].dtype = DTYPE_MENU | (MENU_NEXT_PATTERN<<4);
	
	parameters[PAR_QUANTISATION].dtype = DTYPE_MENU | (MENU_SEQ_QUANT<<4);
	
	parameters[PAR_VOICE_LFO1].dtype	= DTYPE_1B6;
	parameters[PAR_VOICE_LFO2].dtype	= DTYPE_1B6;
	parameters[PAR_VOICE_LFO3].dtype	= DTYPE_1B6;
	parameters[PAR_VOICE_LFO4].dtype	= DTYPE_1B6;
	parameters[PAR_VOICE_LFO5].dtype	= DTYPE_1B6;
	parameters[PAR_VOICE_LFO6].dtype	= DTYPE_1B6;
	
	parameters[PAR_TRACK_LENGTH].dtype	= DTYPE_1B16;
	
	
	
	parameters[PAR_MORPH].dtype			= DTYPE_0B255;
	
	parameters[PAR_FETCH].dtype			= DTYPE_ON_OFF;
	parameters[PAR_FOLLOW].dtype			= DTYPE_ON_OFF;
	}
private:
	Parameter parameters[NUM_PARAMS];


private:
	int mLike;
	unsigned int mGeneration;

	String mName;
};
