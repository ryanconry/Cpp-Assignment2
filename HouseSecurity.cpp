#include <iostream>
#include <vector>
#include <numeric>
//HouseSecurity.cpp

#include <algorithm>
#include <memory>
#include "HouseSecurity.h"
#include "SensorStruct.h"
#include "SecurityStatus.h"

using namespace std;

Sensors HouseSecurity::GetSensorStatus(void){

	return mySensorStatus;			//provide status of private data
}
void HouseSecurity::SetSensorStatus(Sensors defaults){

	mySensorStatus = defaults;		//set the sensors to false
	NotifyObservers();

}

