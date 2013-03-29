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

#include "PresetLoader.h"
#include "Patch.h"
#include "Log.h"
#include "NameGenerator.h"


#include <time.h>

class PatchGenerator : public Thread 
{
public:
	PatchGenerator() : Thread("PatchThread")
	{
		/* initialize random seed: */
		srand ( time(NULL) );

		mMutationRate = 0.2f;
		mMaxMutationOffset = 0.15f;

		findParentPatches("E:/gewerbe sonic potions/SynthDIY/DrumSynthEditor/DrumSynthVst/Patches/Generation1",mParentPatches);

		//combineAllParents();
	};
	~PatchGenerator()
	{
		mParentPatches.clear();
	}

	void run()
	{
		srand ( time(NULL) );
		int patchCount = 25;
		
		for(int i=0;i<mParentPatches.size();i++)
		{
			ScopedPointer<Patch> father = mPresetLoader.loadPatch(mParentPatches[i]);

			for(int j=0;j<mParentPatches.size();j++)
			{
				if(mParentPatches[i] != mParentPatches[j])
				{
					ScopedPointer<Patch> mother = mPresetLoader.loadPatch(mParentPatches[j]);	

					ScopedPointer<Patch> child = generateChild(father,mother);

					mPresetLoader.savePatch(File(String("E:/gewerbe sonic potions/SynthDIY/DrumSynthEditor/DrumSynthVst/Patches/Generation2/") + String("P0")+String(patchCount++) + String(".SND")),child);
				}
			}
		}
	}

	/**combine each parent with all other parents if mLike != DISLIKE*/
	void combineAllParents()
	{
		gloLogText->clear();
		startThread();
		
	};

	Patch* generateChild(Patch* father, Patch* mother)
	{
		//generate an empty child
		Patch* child = new Patch();

		//get parent parameters
		selectParentParameters(father,mother,child);

		//Now mutate some parameters
		mutateParameters(child);


		
		String name = nameGen.generateName();
		child->setName(name);

		ScopedPointer<MessageManagerLock> lock = new MessageManagerLock();
		gloLogText->setText(gloLogText->getText()  + name + String("\n"));
		lock = 0;

		//return the new child
		return child;

	}

private:
	void mutateParameters(Patch* child)
	{
		

		//how many parameters to mutate?
		int parameters2mutate = mMutationRate * NUM_PARAMS;
		
#ifdef LOG_VERBOSE
		ScopedPointer<MessageManagerLock> lock = new MessageManagerLock();
		gloLogText->setText(gloLogText->getText() + String("Mutating ") + String(parameters2mutate) + String(" parameters out of ") + String(NUM_PARAMS) + String("\n"));
		lock=0;
#endif
		struct SelectedParameter
		{
			int index;
			Parameter par;
		};

#ifdef LOG_VERBOSE
		lock = new MessageManagerLock();
		gloLogText->setText(gloLogText->getText() + String("selected parameters: "));
		lock = 0;
#endif
		//pick 'parameters2mutate' number of random parameters
		OwnedArray<SelectedParameter> selectedParameters;
		for(int i=0;i<parameters2mutate;i++)
		{

			bool found = true;
			int randomParamNo=0;

			while(found)
			{
				const float rnd = (rand()%NUM_PARAMS)/(float)NUM_PARAMS;
				randomParamNo = rnd* NUM_PARAMS;

				//check if parameter is already selected
				found = false;
				
				for(int j=0;j<selectedParameters.size();j++)
				{
					if(selectedParameters[j]->index == randomParamNo)
					{
						found = true;
						break;
					}
				}
			}
			//we found a new unused param number
			SelectedParameter* par = new SelectedParameter();
			par->index = randomParamNo;
			selectedParameters.add(par);
#ifdef LOG_VERBOSE		
			lock = new MessageManagerLock();
			gloLogText->setText(gloLogText->getText() +  String(randomParamNo) + String(", "));
			lock = 0;
#endif			

		}
#ifdef LOG_VERBOSE
		lock = new MessageManagerLock();
		gloLogText->setText(gloLogText->getText() +  String("\n"));
		lock = 0;
#endif
		//Now we got all parameter numbers to mutate
		jassert(selectedParameters.size() == parameters2mutate);
		
		//Lets mutate them
		for(int i=0;i<parameters2mutate;i++)
		{
			//generate random mutation amount
			float rnd = (rand()%1000)/1000.f;
			float mutate = rnd * mMaxMutationOffset;
#ifdef LOG_VERBOSE
			lock = new MessageManagerLock();
			gloLogText->setText(gloLogText->getText() +  String("Mutating parameter ") + String(selectedParameters[i]->index) +String(" by ") + String(mutate) + String("%\n"));
			lock = 0;
#endif			
			//get range
			int max = child->getParamMax(selectedParameters[i]->index);
			int min = child->getParamMin(selectedParameters[i]->index);
			int range = child->getRange(selectedParameters[i]->index);
			int value = child->getParameter(selectedParameters[i]->index);
			rnd = (rand()%1000)/1000.f;
			//mutate
			bool add = (rnd>=0.5f);
			
			int newValue;
			
			if(add) newValue = value + range*mutate;
			else newValue = value - range*mutate;

			if(newValue> max) newValue=range;
			if(newValue< min) newValue = 0;
#ifdef LOG_VERBOSE
			lock = new MessageManagerLock();
			gloLogText->setText(gloLogText->getText() +  String("original value: ") + String(value) + String(" new value: ")+ String(newValue)+ String("\n") );
			lock = 0;
#endif
			child->setParameter(selectedParameters[i]->index,newValue);
		}
	}
	void selectParentParameters(Patch* father, Patch* mother, Patch* child)
	{
		#ifdef LOG_VERBOSE
		ScopedPointer<MessageManagerLock> lock = new MessageManagerLock();
		gloLogText->setText(gloLogText->getText() + String("Combining parent parameters...\n"));
		gloLogText->setText(gloLogText->getText() + String("father: ") + father->getName() + String(" mother:") + mother->getName() + String("\n"));
		lock = 0;
#endif
		//randomly select parameters from mother an father for child
		for(int i=0;i<NUM_PARAMS;i++)
		{
			//generate a random number
			float rnd = (rand()%100)/100.f;

			if(rnd >= 0.5f)
			{
				//use father parameter
				child->setParameter(i,father->getParameter(i));
			}
			else
			{
				//use mother parameter
				child->setParameter(i,mother->getParameter(i));
			}
		}

		//increase generation no
		child->setGeneration(father->getGeneration()+1);
	}
	//returns number of found patches
	int findParentPatches(String path,Array<File> &results)
	{
		File foundParents(path);
		jassert(foundParents.exists());
		return foundParents.findChildFiles(results,File::findFiles,false,"*.snd");
	}
private:
	PresetLoader mPresetLoader;

	float mMutationRate;		// amount of parameters that are assigned a random offset [0:1] = [0:100%]
	float mMaxMutationOffset;	// the maximum amount y parameter can mutate [0:1] = [0:100%]

	Array<File> mParentPatches;

	NameGenerator nameGen;
};