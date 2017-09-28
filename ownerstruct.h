//ownerstuct.h

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "IObserver.h"

#ifndef ownerstruct_h
#define ownerstruct_h

#include <string>


using namespace std;

struct ownerstruct{
	string name;
	string number;
	string email;
	HouseSecurity *home;

};

#endif