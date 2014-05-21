/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: ATtiny85 (internal 8 MHz clock), Platform=avr, Package=attiny
*/

#define __AVR_ATtiny85__
#define __AVR_ATTINY85__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 8000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

//
void serOut(const char* str);
//

#include "C:\Users\Georg\Dropbox\WorkSpace\Arduino\sketchbook\hardware\attiny\variants\tiny8\pins_arduino.h" 
#include "C:\Program Files\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\Georg\Dropbox\WorkSpace\Arduino\sketchbook\Multiplex_SBUS\Multiplex_SBUS.ino"
