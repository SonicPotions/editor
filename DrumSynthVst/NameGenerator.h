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

#include <time.h>
//#include "MarkovNameGenerator.h"
//#include "MarkovName/CRandomName.h"
#include "MarkovName/Markov.h"

#define NUM_NAMES 30

#define NUM_VOWELS 5
#define NUM_CONS 19//21
#define NUM_DOUBLES 10
#define NUM_ENDS 10
#define NUM_BEGINS 10

#define NUM_PATTERNS 11
/*
static char namePatterns[NUM_PATTERNS][10] = 
{
	{"b_vcve_"},
	{"cvcvc"},
	{"b_vcv"},
	{"b_vcvvc"},
	{"cvd_vcvc"},
	{"cvvc"},
	{"cvvcvc"},
	{"cvd_v"},
	{"cvcv vcv"},
	{"cve_"},
	{"cvcve_"},
};

static char endings[NUM_ENDS][3] = 
{
	{"nd"},
	{"ch"},
	{"rg"},
	{"ck"},
	{"rt"},
	{"rg"},
	{"cl"},
	{"pr"},
	{"rs"},
	{"pl"},
};

static char beginnings[NUM_BEGINS][3] = 
{
	{"pl"},
	{"kn"},
	{"br"},
	{"gr"},
	{"fr"},
	{"tr"},
	{"ch"},
	{"cl"},
	{"sc"},
	{"dr"},
};

static char doubles[NUM_DOUBLES][3] = 
{
	{"ss"},
	{"ck"},
	{"zz"},
	{"nn"},
	{"rt"},
	{"rg"},
	{"cl"},
	{"pr"},
	{"rs"},
	{"pl"},
};

static char vowels[NUM_VOWELS] = {'a','e','i','o','u'};
static char consonants[NUM_CONS] = 
{
	'b',
	'c',
	'd',
	'f',
	'g',
	'h',
	//'j',
	'k',
	'l',
	'm',
	'n',
	'p',
	'q',
	'r',
	's',
	't',
	'v',
	'w',
	'x',
	//'y',
	'z'
};


static char nameList[NUM_NAMES][5] =
	{
		{"Teck"},
		{"Star"},
		{"Moon"},
		{"beep"},
		{"Funk"},
		{"Beat"},
		{"Hard"},
		{"Soft"},
		{"Cake"},
		{"Clik"}, //10

		{"Boom"},
		{"Daft"},
		{"Pole"},
		{"Mars"},
		{"Leet"},
		{"Crab"},
		{"Lost"},
		{"Soul"},
		{"Pink"},
		{"Rare"}, //20

		{"Bass"},
		{"Ogre"},
		{"Zapp"},
		{"Flow"},
		{"Dark"},
		{"Blue"},
		{"Frog"},
		{"Drum"},
		{"Mess"},
		{"Deep"}, //30
	};


static String markovNames(     "Proton,Solaris,Groove,Beat,funk,jam,wobble, drum, deep, hard, soft, chip, bleep, beep,\
						kit, playful,fruit,weed,broken,arrow,wide,screen,frog,tribal,tempest,cheesy,bass,klang,\
						clapper,stomper,sonic,potion,pikatchu,scope,kling,zerg,who,tardis,zap,metall,bell,pop,\
						cypher,phreak,freak,fraggle,pounding,cruise,sky,starlab,planet,obsidian,emerald,ruby,pane,\
						ooze,turtle,splinter,krank,rock,steady,bebop");
						*/
//---------------------------------------------------------------------------
class NameGenerator
{
public:
	NameGenerator()
	{

		/*
		//pMarkov = new MarkovNameGenerator(markovNames,2,4,8);
		std::ifstream inFile("namelist.txt");
		if(inFile.good())
		{
			markovGenerator.inputFile(inFile);
			//markovGenerator.outputList(NULL);
			markovGenerator.processFile(false);
		}
		else
			jassertfalse;
		*/

		File input(File::getCurrentWorkingDirectory().getFullPathName() + String("/resources/3wordNamelist.txt"));
		input.readLines(m3Letters);
		m3Letters.removeDuplicates(true);

		
		for(int i=0;i<m3Letters.size();i++)
		{
			
			m3Letters.set(i,m3Letters[i].removeCharacters(String("!\"#$%&'()*+,/[]\\^_`:;<=>? " )));

		}

		

		
		
	};
	~NameGenerator()
	{
	}

	String generateName()
	{
		String name;
		String name2;
		switch(rand()%3)
		{
		case 0: //3 letter word + 5
			name = m3Letters[rand()%m3Letters.size()];
			name2 = markovGenerator.generateName(3,5);

			if(name.length()+name2.length() < 8)
			{
				name.append(" ",1);
			}
			name.append(name2,5);
			return String(name);
			break;
		case 1: // 8 letter word
			return markovGenerator.generateName(3,8);
			break;

		default:
		case 2: // 4+4
			name = markovGenerator.generateName(3,4);
			name2 = markovGenerator.generateName(3,4);
			if(name.length()+name2.length() < 8)
			{
				name.append(" ",1);
			}
			name.append(name2,4);
			return String(name);
			break;
		}
		
		   
		  // std::ofstream outFile("Stats.txt", std::ios_base::trunc);
		   
		   
		  // name.outputList(outFile);
/*		   
		   std::cout << name.outputName(3, 9) << '\n' << 
			   name.outputName(3, 9) << '\n' << 
			   name.outputName(3, 9) << '\n' << 
			   name.outputName(3, 9) << '\n' << 
			   name.outputName(3, 9) << '\n';
*/
		   //name.



		/*
		float rnd1,rnd2;
		rnd1 = (rand()%1000)/1000.f;
		rnd2 = (rand()%1000)/1000.f;

		//String name1 = String(nameList[(int)(rnd1*NUM_NAMES)]).dropLastCharacters(2)

		String name = String(nameList[(int)(rnd1*NUM_NAMES)]) + String(nameList[(int)(rnd2*NUM_NAMES)]);
		name.toLowerCase();
		return name;
		*/

		/*
		//select name pattern
		char pattern[9];
		char name[9];
		name[8]=0;

		memset(pattern,0,9);
		memcpy(pattern,namePatterns[(rand()%(NUM_PATTERNS))],8);
		
		int pos=0;
		while(pattern[pos]!=0)
		{
			if(pattern[pos]=='c')
			{
				//add consonant
				int rndCons = (rand()%(NUM_CONS));
				name[pos] = consonants[rndCons];
			}
			else if(pattern[pos]=='v')
			{
				//add vowel
				int rndVowel = (rand()%(NUM_VOWELS));
				name[pos] = vowels[rndVowel];
			}
			else if(pattern[pos]=='d')
			{
				//double
				int rnd = (rand()%(NUM_DOUBLES));
				name[pos++] = doubles[rnd][0];
				name[pos] = doubles[rnd][1];
			}
			else if(pattern[pos]=='e')
			{
				//double
				int rnd = (rand()%(NUM_ENDS));
				name[pos++] = endings[rnd][0];
				name[pos] = endings[rnd][1];
			}
			else if(pattern[pos]=='b')
			{
				//double
				int rnd = (rand()%(NUM_BEGINS));
				name[pos++] = beginnings[rnd][0];
				name[pos] = beginnings[rnd][1];
			}
			else if(pattern[pos]==' ')
			{
				name[pos] = ' ';
			}

			
			pos++;
		}

		//first letter upper case
		name[0] -= 32;
		//terminate string
		name[pos] = 0;

		return String(name);
		*/

		/*
		float rndVowel = (rand()%NUM_VOWELS);
		float rndVowel2 = (rand()%NUM_VOWELS);
		float rndCons = (rand()%NUM_CONS);
		float rndCons2 = (rand()%NUM_CONS);

		String cvc =  String(consonants[(int)rndCons]) + String(vowels[(int)rndVowel]) + String(consonants[(int)rndCons2]);
		
		rndVowel = (rand()%NUM_VOWELS);
		rndVowel2 = (rand()%NUM_VOWELS);
		rndCons = (rand()%NUM_CONS);
		rndCons2 = (rand()%NUM_CONS);

		String vvc =  String(vowels[(int)rndVowel]) + String(vowels[(int)rndVowel2]) + String(consonants[(int)rndCons]);

		String name  = cvc + vvc;
		return name;
		*/
	}
private:
	//ScopedPointer<MarkovNameGenerator> pMarkov;
	Markov markovGenerator;
	StringArray m3Letters;
	
};