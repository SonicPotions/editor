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
#pragma once

#include "./drumSynthSource/Parameters.h"

#define MIDI_CC				0xb0	// 2 data bytes
#define MIDI_CC2			0xF4	// 2 data bytes
#define NRPN_FINE			98
#define NRPN_COARSE			99
#define DATA_ENTRY			0x06

#define NUM_VOICES 6
#define MAX_CONTROLS 41 //maximum numbers of controls for the editor

#define NONE -256

#define TYPE_SLIDER 0
#define TYPE_COMBO	1
#define TYPE_BUTTON 2

#define NUM_TRANS_WAVES 4

static int getControlType(int index, int voiceNr)
{
	switch(index)
	{

	case 19:
		if(voiceNr>=4)
		{
			return TYPE_SLIDER;
		}
	case 15:
		return TYPE_BUTTON;
		break;
	
	case 18:
		if(voiceNr>=4)
		{
			return TYPE_SLIDER;
		}
	case 4:
	case 27:
	case 20:
	case 21:
	case 22:
	case 13:
	case 41:
	case 32:
	case 35:
	case 30:
	case 33:
	case 36:
		return TYPE_COMBO;
		break;

	default: return TYPE_SLIDER; break;
	}
}

static const int controllerAssignments[NUM_VOICES][MAX_CONTROLS] = {
	//voice 1
	{ PAR_COARSE1,		PAR_FINE1,			NONE,					PAR_OSC_WAVE_DRUM1,	NONE, //Osc (1-5)
	  PAR_VELOA1,		PAR_VELOD1,			NONE,					PAR_VOL_SLOPE1, //Amp EG (6-9)
	  PAR_MOD_EG1,		PAR_PITCH_SLOPE1,	PAR_MODAMNT1,			PAR_VEL_DEST_1,		PAR_VELO_MOD_AMT_1,	PAR_VOLUME_MOD_ON_OFF1,// Modulation (10-15)
	  PAR_FMAMNT1,		PAR_FM_FREQ1,		PAR_MOD_WAVE_DRUM1,		PAR_MIX_MOD_1,		NONE,				NONE,// FM (16-21)
	  PAR_TRANS1_WAVE,	PAR_TRANS1_VOL,		PAR_TRANS1_FREQ,		// Transient (22-24)
	  PAR_FILTER_FREQ_1,PAR_RESO_1,			PAR_FILTER_TYPE_1,		PAR_FILTER_DRIVE_1,// Filter (25-28)
	  PAR_FREQ_LFO1,	PAR_SYNC_LFO1,		PAR_AMOUNT_LFO1,		PAR_WAVE_LFO1,		PAR_RETRIGGER_LFO1,	PAR_OFFSET_LFO1,	PAR_VOICE_LFO1,	PAR_TARGET_LFO1,// LFO (29-36)
	  PAR_VOL1,			PAR_PAN1,			PAR_VOICE_DECIMATION1,	PAR_DRIVE1,			PAR_AUDIO_OUT1// MIX (37-41)
	},

	{ PAR_COARSE2,		PAR_FINE2,			NONE,					PAR_OSC_WAVE_DRUM2,	NONE, //Osc (1-5)
	  PAR_VELOA2,		PAR_VELOD2,			NONE,					PAR_VOL_SLOPE2, //Amp EG (6-9)
	  PAR_MOD_EG2,		PAR_PITCH_SLOPE2,	PAR_MODAMNT2,			PAR_VEL_DEST_2,		PAR_VELO_MOD_AMT_2,	PAR_VOLUME_MOD_ON_OFF2,// Modulation (10-15)
	  PAR_FMAMNT2,		PAR_FM_FREQ2,		PAR_MOD_WAVE_DRUM2,		PAR_MIX_MOD_2,		NONE,				NONE,// FM (16-21)
	  PAR_TRANS2_WAVE,	PAR_TRANS2_VOL,		PAR_TRANS2_FREQ,		// Transient (22-24)
	  PAR_FILTER_FREQ_2,PAR_RESO_2,			PAR_FILTER_TYPE_2,		PAR_FILTER_DRIVE_2,// Filter (25-28)
	  PAR_FREQ_LFO2,	PAR_SYNC_LFO2,		PAR_AMOUNT_LFO2,		PAR_WAVE_LFO2,		PAR_RETRIGGER_LFO2,	PAR_OFFSET_LFO2,	PAR_VOICE_LFO2,	PAR_TARGET_LFO2,// LFO (29-36)
	  PAR_VOL2,			PAR_PAN2,			PAR_VOICE_DECIMATION2,	PAR_DRIVE2,			PAR_AUDIO_OUT2// MIX (37-41)
	},

	{ PAR_COARSE3,		PAR_FINE3,			NONE,					PAR_OSC_WAVE_DRUM3,	NONE, //Osc (1-5)
	  PAR_VELOA3,		PAR_VELOD3,			NONE,					PAR_VOL_SLOPE3, //Amp EG (6-9)
	  PAR_MOD_EG3,		PAR_PITCH_SLOPE3,	PAR_MODAMNT3,			PAR_VEL_DEST_3,		PAR_VELO_MOD_AMT_3,	PAR_VOLUME_MOD_ON_OFF3,// Modulation (10-15)
	  PAR_FMAMNT3,		PAR_FM_FREQ3,		PAR_MOD_WAVE_DRUM3,		PAR_MIX_MOD_3,		NONE,				NONE,// FM (16-31)
	  PAR_TRANS3_WAVE,	PAR_TRANS3_VOL,		PAR_TRANS3_FREQ,		// Transient (33-34)
	  PAR_FILTER_FREQ_3,PAR_RESO_3,			PAR_FILTER_TYPE_3,		PAR_FILTER_DRIVE_3,// Filter (35-38)
	  PAR_FREQ_LFO3,	PAR_SYNC_LFO3,		PAR_AMOUNT_LFO3,		PAR_WAVE_LFO3,		PAR_RETRIGGER_LFO3,	PAR_OFFSET_LFO3,	PAR_VOICE_LFO3,	PAR_TARGET_LFO3,// LFO (29-36)
	  PAR_VOL3,			PAR_PAN3,			PAR_VOICE_DECIMATION3,	PAR_DRIVE3,			PAR_AUDIO_OUT3// MIX (37-41)
	},

	{ PAR_COARSE4,		PAR_FINE4,			PAR_NOISE_FREQ1,		PAR_OSC_WAVE_SNARE,	PAR_MIX1,
	  PAR_VELOA4,		PAR_VELOD4,			PAR_REPEAT4,			PAR_VOL_SLOPE4,		
	  PAR_MOD_EG4,		PAR_PITCH_SLOPE4,	PAR_MODAMNT4,			PAR_VEL_DEST_4,		PAR_VELO_MOD_AMT_4,	PAR_VOLUME_MOD_ON_OFF4,// Modulation (10-15)
	  NONE,				NONE,				NONE,					NONE,				NONE,				NONE,
	  PAR_TRANS4_WAVE,	PAR_TRANS4_VOL,		PAR_TRANS4_FREQ,
	  PAR_FILTER_FREQ_4,PAR_RESO_4,			PAR_FILTER_TYPE_4,		PAR_FILTER_DRIVE_4,
	  PAR_FREQ_LFO4,	PAR_SYNC_LFO4,		PAR_AMOUNT_LFO4,		PAR_WAVE_LFO4,		PAR_RETRIGGER_LFO4,	PAR_OFFSET_LFO4,	PAR_VOICE_LFO4,	PAR_TARGET_LFO4,// LFO (29-36)
	  PAR_VOL4,			PAR_PAN4,			PAR_VOICE_DECIMATION4,	PAR_SNARE_DISTORTION,PAR_AUDIO_OUT4// MIX (37-41)

	},

	{ PAR_COARSE5,		PAR_FINE5,			NONE,					PAR_WAVE1_CYM,		NONE, //Osc (1-5)
	  PAR_VELOA5,		PAR_VELOD5,			PAR_REPEAT5,			PAR_VOL_SLOPE5,
	  NONE,				NONE,				NONE,					PAR_VEL_DEST_5,		PAR_VELO_MOD_AMT_5,	PAR_VOLUME_MOD_ON_OFF5,// Modulation (10-15)
	  PAR_MOD_OSC_F1_CYM,PAR_MOD_OSC_F2_CYM,PAR_MOD_OSC_GAIN1_CYM,	PAR_MOD_OSC_GAIN2_CYM,PAR_WAVE2_CYM,	PAR_WAVE3_CYM,
	  PAR_TRANS5_WAVE,	PAR_TRANS5_VOL,		PAR_TRANS5_FREQ,
	  PAR_FILTER_FREQ_5,PAR_RESO_5,			PAR_FILTER_TYPE_5,		PAR_FILTER_DRIVE_5,
	  PAR_FREQ_LFO5,	PAR_SYNC_LFO5,		PAR_AMOUNT_LFO5,		PAR_WAVE_LFO5,		PAR_RETRIGGER_LFO5,	PAR_OFFSET_LFO5,	PAR_VOICE_LFO5,	PAR_TARGET_LFO5,// LFO (29-36)
	  PAR_VOL5,			PAR_PAN5,			PAR_VOICE_DECIMATION5,	PAR_CYMBAL_DISTORTION,PAR_AUDIO_OUT5// MIX (37-41)
	},

	{ PAR_COARSE6,		PAR_FINE6,			NONE,					PAR_WAVE1_HH,		NONE, //Osc (1-6)
	  PAR_VELOA6,		PAR_VELOD6_CLOSED,	PAR_VELOD6_OPEN,			PAR_VOL_SLOPE6,
	  NONE,				NONE,				NONE,					PAR_VEL_DEST_6,		PAR_VELO_MOD_AMT_6,	PAR_VOLUME_MOD_ON_OFF6,// Modulation (10-16)
	  PAR_MOD_OSC_F1,	PAR_MOD_OSC_F2,		PAR_MOD_OSC_GAIN1,		PAR_MOD_OSC_GAIN2,	PAR_WAVE2_HH,		PAR_WAVE3_HH,
	  PAR_TRANS6_WAVE,	PAR_TRANS6_VOL,		PAR_TRANS6_FREQ,
	  PAR_FILTER_FREQ_6,PAR_RESO_6,			PAR_FILTER_TYPE_6,		PAR_FILTER_DRIVE_6,
	  PAR_FREQ_LFO6,	PAR_SYNC_LFO6,		PAR_AMOUNT_LFO6,		PAR_WAVE_LFO6,		PAR_RETRIGGER_LFO6,	PAR_OFFSET_LFO6,	PAR_VOICE_LFO6,	PAR_TARGET_LFO6,// LFO (29-36)
	  PAR_VOL6,			PAR_PAN6,			PAR_VOICE_DECIMATION6,	PAR_HAT_DISTORTION,PAR_AUDIO_OUT6// MIX (37-41)
	},
};