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

#include <string>

#include "Patch.h"
//---------------------------------------------------------------------------
class PresetLoader
{
public:
	PresetLoader()
	{
		
		
	};
	~PresetLoader()
	{
	};

	Patch* loadPatch(File path)
	{
		if(path.exists())
		{
			Patch* patch = new Patch();

			MemoryBlock mem;
			path.loadFileAsData(mem);

			char patchName[9];
			memset(patchName,0,9);
			memcpy(patchName,mem.getData(),8);

			patch->setName(patchName);

			for(int i=0;i<NUM_PARAMS;i++)
			{
				//f_read((FIL*)&preset_File,&parameters2[i].value,1,&bytesRead);	
				patch->setParameter(i,mem[i+8]);
			}

			return patch;
		}
		else jassertfalse;
		return NULL;
	}

	void savePatch(File path,Patch* patch)
	{
		//save name
		if(!path.exists())
			path.create();

		unsigned char data[8+NUM_PARAMS];
		memset(data,0,8);
		memcpy(data,patch->getName().toUTF8(),patch->getName().length());
		for(int i=0;i<NUM_PARAMS;i++)
		{
			data[8+i] = patch->getParameter(i);
		}
		path.replaceWithData(data,8+NUM_PARAMS);
	}

private:
	
private:
	
};
//---------------------------------------------------------------------------
