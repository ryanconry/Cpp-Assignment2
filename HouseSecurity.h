//HouseSecurity.h

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "SecurityStatus.h"
#include "SensorStruct.h"

#ifndef HouseSecurity_h
#define HouseSecurity_h

using namespace std;

class HouseSecurity : public SecurityStatus{

	Sensors mySensorStatus;				//instance of sensors
	Sensors defaults;
	defaults.door = false;
	defaults.window1 = false;
	defaults.window2 = false;


public:
	Sensors GetSensorStatus(void);		//function to gets private sensor data
	void SetSensorStatus(Sensors defaults);		//set sensors with default values false, false false
};
#endif
