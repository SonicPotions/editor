Sonic Potions Drumsynth Editor
==============================

Software editor for the sonic potions drum synthesizer.
check out www.sonic-potions.com

This is still work in progress!
So far a very basic standalone midi editor for the sound parameters is working.

Also included is the source for a genetic pattern generator and a patch name generator.
Those have no GUI atm.

The repo contains a working VC08 project.
It should be able to compile on unix and OSX based systems, too.
But I haven't come around to set it up.
It is based on the JUCE framework from Raw Material Software.


stuff that is still missing:
- good layout/design
- VST plugin mode
- sequencer editor
- patch manager
- MIDI input (so far controler values are only send, not read from the device
- probably a lot more...