//main.cpp

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "HomeOwner.h"
#include "HouseSecurity.h"
#include "IObserver.h"
#include "KeyHolder.h"
#include "ownerstruct.h"
#include "SecurityStatus.h"
#include "SensorInfo.h"
#include "SensorStruct.h"

using namespace std;

void main() {
	HouseSecurity myHome;			//create an object for the house
	Sensors secure;					//create an object for the sensors 


	//create homeowners and keyholder with their data
	unique_ptr<HomeOwner> owner1(new HomeOwner(&myHome, "555 555 5555", "owner1@email.com", "Owner 1"));
	unique_ptr<HomeOwner> owner2(new HomeOwner(&myHome, "666 666 6666", "owner2@email.com", "Owner 2"));
	unique_ptr<KeyHolder> keyholder1(new KeyHolder(&myHome, "777 777 7777", "keyholder1@email.com", "Keyholder 1"));
	
	//attach the homeowners and keyholders to the list of observers
	myHome.AttachObserver(move(owner1));
	myHome.AttachObserver(move(owner2));
	myHome.AttachObserver(move(keyholder1));

	cout << "After attaching new observers..." << endl;

	//set sensors to secure
	myHome.SetSensorStatus(secure);

	//detach an observer
	myHome.DetachObserver(owner2);

	//a sensor has been tripped
	Sensors intruder(true, false, false);

	//set the sensors to recognize one has been tripped, notify observers
	myHome.SetSensorStatus(intruder);


}



