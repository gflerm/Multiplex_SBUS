/*
	Multiplex SBUS Sensor using TINY85 @ 8Mhz
	Single wire half duplex serial at 38400 baud on Port B5
	Vcc = 3.3V

*/



#include <BasicSerial3.h>



void setup()
{
}

void serOut(const char* str)
{
	while (*str) TxByte (*str++);
}

void loop(){
	byte c;
	serOut("Serial echo test\n\r");
	while ( c = RxByte() ){
		TxByte(c);
	}
	delay(1000);
}
