//IObserver.h

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#ifndef IObserver_h
#define IObserver_h

using namespace std;

class IObserver{

public:
	virtual void update()=0;

};
#endif 

