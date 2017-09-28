//HomeOwner.cpp

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "HomeOwner.h"

using namespace std;

void HomeOwner::update() {

	currentsensors = HSptr->GetSensorStatus();		//get sensor info, alert if there is an event
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


HomeOwner::HomeOwner(HouseSecurity *HSptr, string myPhoneNumber, string myEmail, string myName) {
	ownerstruct homeowner;

	homeowner.home -> *HSptr;
	homeowner.name = myName;
	homeowner.number = myPhoneNumber;
	homeowner.email = myEmail;
}