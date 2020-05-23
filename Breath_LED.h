#include "Arduino.h"
#ifndef _BREATH_LED_H_
#define _BREATH_LED_H_

class breath
{
	public:
		breath();
		void setModes(int pin,int mode);
		void setValue(int value);
	private:
		int pin;
		int mode;
		int value;
}

#endif
