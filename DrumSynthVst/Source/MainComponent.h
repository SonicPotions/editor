/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  25 Mar 2013 6:25:13pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_MAINCOMPONENT_MAINCOMPONENT_6CBD1282__
#define __JUCER_HEADER_MAINCOMPONENT_MAINCOMPONENT_6CBD1282__

//[Headers]     -- You can add your own extra header files here --
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
#include "../JuceLibraryCode/JuceHeader.h"
#include "MainTabbedComponent.h"
#include "AudioDemoSetupPage.h"
#include "AboutScreen.h"
#include "../GreenLookAndFeel.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public MenuBarModel,
                       public ApplicationCommandTarget,
                       public TextEditor::Listener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	//----- command target
	ApplicationCommandTarget* getNextCommandTarget()
    {
        // this will return the next parent component that is an ApplicationCommandTarget (in this
        // case, there probably isn't one, but it's best to use this method in your own apps).
        return findFirstTargetParentComponent();
    }

    void getAllCommands (Array <CommandID>& commands)
    {
        // this returns the set of all commands that this target can perform..
        const CommandID ids[] = {  showMidiSettings ,saveFile,saveFileAs,newFile,openFile,showAboutScreen};

        commands.addArray (ids, numElementsInArray (ids));
    }

    // This method is used when something needs to find out the details about one of the commands
    // that this object can perform..
    void getCommandInfo (CommandID commandID, ApplicationCommandInfo& result)
    {

        switch (commandID)
        {
        case showMidiSettings:
           	result.setInfo ("MIDI Setup", "select the MIDI device","settings", 0);
            break;

		case openFile:
           	result.setInfo ("Open File", "load preset from file","file", 0);
            break;

        case saveFile:
           	result.setInfo ("Save File", "save preset to a file","file", 0);
            break;

		case saveFileAs:
           	result.setInfo ("Save File As", "save preset to a new file","file", 0);
            break;

		case newFile:
           	result.setInfo ("New File", "start new project","file", 0);
            break;

		case showAboutScreen:
           	result.setInfo ("About", "show info screen","info", 0);
            break;

        default:
            break;
        };
    }

    // this is the ApplicationCommandTarget method that is used to actually perform one of our commands..
    bool perform (const InvocationInfo& info)
    {
        switch (info.commandID)
        {
		case showAboutScreen:
			{
			DialogWindow::showDialog("About",&mAboutScreen,this,findColour(DocumentWindow::backgroundColourId),true,false,false);
			}
			break;
        case showMidiSettings:
			DialogWindow::showDialog("MIDI Setup",mMidiSetupPage,this,findColour(DocumentWindow::backgroundColourId),true,false,false);
            break;

		case openFile:
		//	this->mArpEditorComponent->loadFromUserSpecifiedFile(true);
			break;

		case saveFile:
		//	this->mArpEditorComponent->save(true,true);
            break;

		case saveFileAs:
		//	this->mArpEditorComponent->saveAsInteractive(true);
            break;

		case newFile:
          // 	this->mArpEditorComponent->init();
            break;


        default:
            return false;
        };

        return true;
    }
	//---------------------
	enum CommandIDs
    {
        showMidiSettings				= 0x2000,
		saveFile						= 0x2001,
		saveFileAs						= 0x2002,
		newFile							= 0x2003,
		openFile						= 0x2004,
		showAboutScreen					= 0x2005,

    };

	const StringArray getMenuBarNames()
    {
        const char* const names[] = { "File", "Settings","About", 0 };

        return StringArray (names);
    }

	 const PopupMenu getMenuForIndex (int menuIndex, const String& /*menuName*/)
    {
        ApplicationCommandManager*  commandManager = mCommandManager;

        PopupMenu menu;

        if (menuIndex == 0)
        {
			 menu.addCommandItem (commandManager, newFile);
			 menu.addCommandItem (commandManager, openFile);
			 menu.addCommandItem (commandManager, saveFile);
			 menu.addCommandItem (commandManager, saveFileAs);
            menu.addSeparator();
            menu.addCommandItem (commandManager, StandardApplicationCommandIDs::quit);
        }
        else if (menuIndex == 1)
        {
             menu.addCommandItem (commandManager, showMidiSettings);
        }
		else if(menuIndex == 2)
		{
			menu.addCommandItem(commandManager, showAboutScreen);
		}

        return menu;
    }

    void menuItemSelected (int menuItemID, int /*topLevelMenuIndex*/)
    {
        // most of our menu items are invoked automatically as commands, but we can handle the
        // other special cases here..
    }


    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	ScopedPointer<ApplicationCommandManager> mCommandManager;
	ScopedPointer<AudioDemoSetupPage> mMidiSetupPage;
	AudioDeviceManager mDeviceManager;
	AboutScreen mAboutScreen;

	ScopedPointer<LookAndFeel> mLookAndFeel;

    //[/UserVariables]

    //==============================================================================
    MainTabComponent* mTabbedComponent;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    MainComponent (const MainComponent&);
    const MainComponent& operator= (const MainComponent&);
};


#endif   // __JUCER_HEADER_MAINCOMPONENT_MAINCOMPONENT_6CBD1282__
