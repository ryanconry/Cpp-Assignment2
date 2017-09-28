//SercurityStatus.h

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "ownerstruct.h"
#include "IObserver.h"

#ifndef SecurityStatus_h
#define SecurityStatus_h

using namespace std;

class SecurityStatus{

	vector <unique_ptr<IObserver>> observers;		//using vectors for observer functionality

public:

	virtual void AttachObserver(unique_ptr<IObserver> obj);		//attach observers using unique pointers
	unique_ptr<IObserver> DetachObserver(void);					//detach observers
	void NotifyObservers();										//notify attached observers of an event
};
#endif 