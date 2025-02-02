// Dallas.h

#ifndef _DALLAS_h
#define _DALLAS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "C:\Users\Timdows\Documents\Arduino\libraries\MySensors\core\MySensorsCore.h"
#include <DallasTemperature.h>
#include <OneWire.h>

class DallasClass
{
protected:
	int childId;
	int pin;

	// Make sure the OneWire 3th party empty constructor exists
	OneWire oneWire;
	DallasTemperature sensors;

public:
	void Init(int childId, int pin);
	void ReadSensor();
};


#endif
