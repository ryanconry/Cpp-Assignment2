#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "IObserver.h"
//KeyHolder.h

#include "SensorStruct.h"
#include "SensorInfo.h"
#include "HouseSecurity.h"

#ifndef KeyHolder_h
#define KeyHolder_h

using namespace std;

class KeyHolder: public IObserver{		//class for keyholders inherits IObserver as public
	Sensors currentsensors;
	string myPhoneNumber;
	string myEmail;
	string myName;
	HouseSecurity *HSptr;

public:
	virtual void update();				//again showing polymorhpism and inheritance
	KeyHolder(HouseSecurity *HSptr, string myPhoneNumber, string myEmail, string myName);  //keyholder constructor
};
#endif 