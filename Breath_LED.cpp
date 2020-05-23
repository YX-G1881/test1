#include"Breath_LED.h"

void breath::setModes(int pin,int mode)
{
	this->mode=mode;
	this->pin=pin;
	pinMode(pin,mode);
}

void breath::setValue(int value)
{
	this->value=value;
	for(int a=0;a<=255;a++)
	{
		analogWrite(pin,a);
		delay(value);
	}
	
	for(int a=255;a>=0;a--)
	{
		analogWrite(pin,a);
		delay(value);
	}
}

