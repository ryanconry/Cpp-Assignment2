//KeyHolder.cpp

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "KeyHolder.h"
#include "ownerstruct.h"

using namespace std;

void KeyHolder::update() {					//similar to the homeowner class

	currentsensors = HSptr->GetSensorStatus();
	if (currentsensors.door) {
		cout << myName << "says the door is open" << endl;
	}
	else if (currentsensors.window1) {
		cout << myName << "says window1 is open" << endl;
	}
	else if (currentsensors.window2) {
		cout << myName << "says window2 is open" << endl;
	}
	else {
		cout << myName << "says everything is secure" << endl;
	}


}


KeyHolder::KeyHolder(HouseSecurity *HSptr, string myPhoneNumber, string myEmail, string myName) {
	ownerstruct keyholder;

	keyholder.home -> *HSptr;
	keyholder.name = myName;
	keyholder.number = myPhoneNumber;
	keyholder.email = myEmail;
}