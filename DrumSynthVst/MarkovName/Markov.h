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

#include "../JuceLibraryCode/JuceHeader.h"
#include <time.h>

//---------------------------------------------------------------------------
class ChainElement
{
public:
	ChainElement(String data)
	{
		mData = data;
		mBeginning = false;
	}

	~ChainElement()
	{
		mParent = NULL;
	}

	void setBeginning(bool isBeginning)
	{
		mBeginning = isBeginning;
	}

	bool isBeginning()
	{
		return mBeginning;
	}

	String getData()
	{
		return mData;
	}

	int numChilds()
	{
		return mChildren.size();
	}

	ChainElement* getChild(int idx)
	{
		return mChildren[idx];
	}

	void addChild(ChainElement* child)
	{
		mChildren.add(child);
	}

	void addEnd(ChainElement* end)
	{
		mEnding.add(end);
	}

	ChainElement* getEnd(int idx)
	{
		return mEnding[idx];
	}

	int numEnds()
	{
		return mEnding.size();
	}

	void setParent(ChainElement* parent)
	{
		mParent = parent;
	}

	ChainElement* getParent()
	{
		return mParent;
	}
private:
	bool mBeginning;
	String mData;
	Array<ChainElement*> mChildren;
	Array<ChainElement*> mEnding;
	ChainElement* mParent;
};
//---------------------------------------------------------------------------
class Markov
{

public:
	Markov()
	{
		srand(time(NULL));
		learn(File(File::getCurrentWorkingDirectory().getFullPathName() + String("/namelist.txt")),3);
	}

	~Markov()
	{

	}
	//min not used yet!!!
	String generateName(int min, int max)
	{
		String name;

			int rnd = rand()%mChain.size();
			ChainElement* startToken = mChain[rnd];
			while(!isValidStartToken(startToken))
			{
				rnd = rand()%mChain.size();
				startToken = mChain[rnd];

			}

			name.append(startToken->getData(),mOrder);

			appendNextToken(&name,max,startToken);
		

			name = name.toLowerCase();
			char *n = name.toUTF8().getAddress();
			n[0] -= 32;
			return n;
	}

	bool isValidStartToken(ChainElement* e)
	{

#if 1
		//needs children
		if(e->numChilds()<=0) return false;
		if(e->isBeginning()) return true;
		return false;
#else
		//needs children
		if(e->numChilds()<=0) return false;
		//should be vowel/consonant  or Consonant/vowel
		if(isVowel(e->getData()[0]))
		{
			//1st vowel
			//check second vowel
			if(isVowel(e->getData()[1]))
			{
				return false;
			}
			return true;
		}
		else
		{
			//check second vowel
			if(isVowel(e->getData()[1]))
			{
				return true;
			}
			return false;
		}

		return true;
#endif
	}

	bool isVowel(char c)
	{
		if(c=='a') return true;
		if(c=='e') return true;
		if(c=='i') return true;
		if(c=='o') return true;
		if(c=='u') return true;
		return false;
	}

	void appendNextToken(String* name, int max, ChainElement* token)
	{
		ChainElement* e = NULL;
		if(name->length()+mOrder<=max)
		{
			if(token->numChilds() >0)
			{
				int rnd = rand()%token->numChilds();

			

				e = token->getChild(rnd);

				name->append(e->getData(),mOrder);

				appendNextToken(name,max,e);
			}
		}
		if(name->length()<max)
		{
			if(token!=NULL && token->numEnds())
			{
				int rnd = rand()%token->numEnds();
				name->append(token->getEnd(rnd)->getData(),token->getEnd(rnd)->getData().length());
			}
			
		}
	}

	/**read namelist and build chains of specified order*/
	void learn(File namelist, int order)
	{
		mOrder = order;

		StringArray names;

		if(namelist.exists())
		{
			
			ScopedPointer<FileInputStream> input = namelist.createInputStream();
			
			while(!input->isExhausted())
			{
				String line = input->readNextLine();
				if(line != String::empty)
					names.addTokens(line," ",String::empty);
			}
		}
		else
			jassertfalse;

#if 0
//save optimized name list
		
		

		for(int i=0;i<names.size();i++)
		{
			
			names.set(i,names[i].removeCharacters(String("!\"#$%&'()*+,-./[]\^_`:;<=>?")));

			if(names[i].length() < 4)
			{
				names.remove(i);
				i--;
			}

		}

		names.removeDuplicates(true);
		names.sort(true);
		
		String list = names.joinIntoString(String("\n"));
		File outfile(File::getCurrentWorkingDirectory().getFullPathName() + String("/namelist_out.txt"));
		outfile.create();
		outfile.replaceWithText(list);

#endif

		buildChains(names);
	}

private:

	void buildChains(StringArray names)
	{

		String token;
			String prevToken;
		
		for(int i=0;i<names.size();i++)
		{
			token = String::empty;
			prevToken = String::empty;


			String name = names[i];

			int j=0;
			for(j=0;(j+mOrder)<=name.length();)
			{
				
				int breakCnt=0;
				for(int k=0;k<mOrder;)
				{
					if(j+k+breakCnt < name.length())
					{
						char letter = name[j+k+breakCnt];
						if(letter >= 'A' && letter <= 'z')
						{
							k++;
							token.append(&letter,1);
							
						}
						else
						{
							breakCnt++;
							if(breakCnt>=10) break;
						}
					}
					else break;
					
					
				}

				

				ChainElement* e = addTokenToChain(token,prevToken);

				if(j==0)
				{
					//if it is the first element of a word set beginning flag
					e->setBeginning(true);
				}

			
				prevToken = token;
				token = String::empty;
				


				j += mOrder;
			}
			int length = name.length();
			bool compare = (j<length);
			
			if(compare)
			{
				int test = 1;
				//we have some letters left
				String end;
				while(j<name.length())
				{
					char letter[2];
					letter[0]= name[j++];
					letter[1]=0;
					end.append(letter,1);
				}
				addEndTokenToChain(end,prevToken);
			}

			
		}
	}

	void addEndTokenToChain(String token, String prev)
	{

		token = token.toLowerCase();
		prev = prev.toLowerCase();

		
		ChainElement* end;
		end = new ChainElement(token);
			
		ChainElement* e = chainContainsToken(prev);
		if(e!=NULL)
			e->addEnd(end);


	}

	ChainElement* addTokenToChain(String token, String prev)
	{

		token = token.toLowerCase();
		prev = prev.toLowerCase();

		//check if token is already in chain
		ChainElement* element = chainContainsToken(token);

		if(element == NULL)
		{
			//non existent yet
			element = new ChainElement(token);
			
			mChain.add(element);
		}
		else
		{
			//allready existing
			if(prev != String::empty)
			{
				//if we know the previous token we can add this token to its list of children
				ChainElement* e = chainContainsToken(prev);
				jassert(e!=NULL);
				e->addChild(element);
			}
		}

		return element;

	}

	ChainElement* chainContainsToken(String token)
	{
		for(int i=0;i<mChain.size();i++)
		{
			if((mChain[i]->getData() == token))
			{
						return mChain[i];
				
			}
		}
		return NULL;
	}

private:
	int mOrder;

	OwnedArray<ChainElement> mChain;
	
	
 
 };