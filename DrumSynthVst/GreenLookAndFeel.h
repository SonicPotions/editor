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
#include "../juce/extras/example projects/JuceLibraryCode/JuceHeader.h"

class GreenLookAndFeel : public LookAndFeel
{
public:
	GreenLookAndFeel()
	{
		/*
		setColour (Editor_backgroundColor, Colour (0xff000000));
		setColour (Editor_outlineId, Colour (0xff6aa52a));
		setColour (Editor_rectangleBackgroundId, Colour (0x563a8c0d));
		setColour (Editor_textId, Colour(0xff6aa52a));

		setColour ( Slider::rotarySliderFillColourId, Colour(0x7f8cb039));
		setColour ( Slider::rotarySliderOutlineColourId, Colour(0x7f8cb039));
		setColour ( Slider::textBoxTextColourId, Colour(0xff6aa52a));
		setColour ( Slider::textBoxOutlineColourId, Colour(0x7f8cb039));
*/

		File applicationDirectory = File::getSpecialLocation(File::currentApplicationFile).getParentDirectory();
		setSliderImage(ImageFileFormat::loadFrom(File(applicationDirectory.getFullPathName() + "/../resources/knob.png")),31,false);
	
	};

	~GreenLookAndFeel(){};

	/** this method is called by the default Juce::Slider paint() method to actually draw the slider*/
	void drawRotarySlider  (Graphics &g,
							int  	/*x*/,
							int  	/*y*/,
							int  	width,
							int  	height,
							float  	/*sliderPosProportional*/,
							float  	/*rotaryStartAngle*/,
							float  	/*rotaryEndAngle*/,
							Slider &  	slider 
							) 	
	{

		if (filmStripImage.isValid())
		{
			int value = (int) ((slider.getValue() - slider.getMinimum()) / (slider.getMaximum() - slider.getMinimum()) * (numFrames - 1));

			int imageHeight; 
			int imageWidth;
	        
			if (slider.getTextBoxPosition() == Slider::TextBoxBelow)
			{
				imageWidth = width - slider.getTextBoxHeight();
				imageHeight = height - slider.getTextBoxHeight();
			}
			else
			{
				imageWidth = width;
				imageHeight = height;
			}
			
			if(isHorizontal)
			{
				g.drawImage(filmStripImage, (int)((width - imageWidth) * 0.5), 0, imageWidth, imageHeight,
							value * frameWidth, 0, frameWidth, frameHeight);
			}
			else
			{
				g.drawImage(filmStripImage, (int)((width - imageWidth) * 0.5), 0, imageWidth, imageHeight,
							0, value * frameHeight, frameWidth, frameHeight);
			}
		}

	}

	/** Sets the image to use, you need to supply the number of frames within the image.
     */
    void setSliderImage (Image image, int numFrames_, bool isHorizontal_ = true)
	{
		 filmStripImage = image;

		if(filmStripImage.isValid())
		{
			numFrames = numFrames_;
			isHorizontal = isHorizontal_;
	        
			if(isHorizontal)
			{
				frameHeight = filmStripImage.getHeight();
				frameWidth = filmStripImage.getWidth() / numFrames;
			}
			else
			{
				frameHeight = filmStripImage.getHeight() / numFrames;
				frameWidth = filmStripImage.getWidth();
			}
		}
		else
		{
			numFrames = 0;
		}
		
	};

	enum ColorId
	{
		Editor_backgroundColor,
		Editor_outlineId,
		Editor_textId,
		Editor_baseColor_3,
		Editor_baseColor_4,
		Editor_rectangleBackgroundId,
		
	};
private:
	/** the image for the filmstrip slider*/
	Image filmStripImage;
	int numFrames;
	int frameHeight;
	int	frameWidth;
	bool isHorizontal;

};
