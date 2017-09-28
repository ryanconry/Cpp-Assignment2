//HomeOwner.h
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "IObserver.h"
#include "HouseSecurity.h"
#include "SensorStruct.h"

#ifndef HomeOwner_h
#define HomeOwner_h

using namespace std;

class HomeOwner: public IObserver{			//inherit IObserver class as public

	Sensors currentsensors;					//create instance of current sensors
	string myPhoneNumber;
	string myEmail;
	string myName;
	HouseSecurity *HSptr;

public:
	virtual void update();					//update() from IObserver, example of polymorphism and inheritance
	HomeOwner(HouseSecurity *HSptr, string myPhoneNumber, string myEmail, string myName);	//homeowner constructor

};
#endif 
