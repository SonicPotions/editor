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
#include "MainComponent.h"
#include "VoiceBasedDrumComponent.h"
#include "MainTabbedComponent.h"
#include "..\PatchGeneratorWindow.h"

//==============================================================================
/**
    This is the top-level window that we'll pop up. Inside it, we'll create and
    show a component from the MainComponent.cpp file (you can open this file using
    the Jucer to edit it).
*/
class HelloWorldWindow  : public DocumentWindow
{
public:
    //==============================================================================
    HelloWorldWindow()
        : DocumentWindow ("DrumSynthEditor",
                          Colours::lightgrey,
                          DocumentWindow::allButtons,
                          true)
    {
        // Create an instance of our main content component, and add it to our window..
		//MainTabComponent *mainTabComponent = new MainTabComponent();
		//setContentOwned (mainTabComponent, true);
		MainComponent* mainComp = new MainComponent();
        setContentOwned (mainComp, true);

		setMenuBar (mainComp);

        // Centre the window on the screen
        centreWithSize (getWidth(), getHeight());

		this->setResizable(true,true);

        // And show it!
        setVisible (true);
    }

    ~HelloWorldWindow()
    {
        // (the content component will be deleted automatically, so no need to do it here)
    }

    //==============================================================================
    void closeButtonPressed()
    {
        // When the user presses the close button, we'll tell the app to quit. This
        // HelloWorldWindow object will be deleted by the JUCEHelloWorldApplication class.
        JUCEApplication::quit();
    }
};

//==============================================================================
/** This is the application object that is started up when Juce starts. It handles
    the initialisation and shutdown of the whole application.
*/
class JUCEHelloWorldApplication : public JUCEApplication
{
public:
    //==============================================================================
    JUCEHelloWorldApplication()
    {
    }

    ~JUCEHelloWorldApplication()
    {
    }

    //==============================================================================
    void initialise (const String& commandLine)
    {
        // For this demo, we'll just create the main window...
        helloWorldWindow = new HelloWorldWindow();

        /*  ..and now return, which will fall into to the main event
            dispatch loop, and this will run until something calls
            JUCEAppliction::quit().

            In this case, JUCEAppliction::quit() will be called by the
            hello world window being clicked.
        */

		//patchGeneratorWindow = new PatchGeneratorWindow();
    }

    void shutdown()
    {
        // This method is where you should clear-up your app's resources..

        // The helloWorldWindow variable is a ScopedPointer, so setting it to a null
        // pointer will delete the window.
        helloWorldWindow = 0;

		patchGeneratorWindow = 0;
    }

    //==============================================================================
    const String getApplicationName()
    {
        return "DrumSynthEditor";
    }

    const String getApplicationVersion()
    {
        // The ProjectInfo::versionString value is automatically updated by the Jucer, and
        // can be found in the JuceHeader.h file that it generates for our project.
        return ProjectInfo::versionString;
    }

    bool moreThanOneInstanceAllowed()
    {
        return true;
    }

    void anotherInstanceStarted (const String& commandLine)
    {
    }

private:
    ScopedPointer<HelloWorldWindow> helloWorldWindow;
	ScopedPointer<PatchGeneratorWindow> patchGeneratorWindow;
};


//==============================================================================
// This macro creates the application's main() function..
START_JUCE_APPLICATION (JUCEHelloWorldApplication)
