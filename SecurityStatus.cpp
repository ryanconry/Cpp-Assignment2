//SecurityStatus.cpp

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <memory>
#include "SecurityStatus.h"
#include "IObserver.h"

using namespace std;

void SecurityStatus::AttachObserver(unique_ptr<IObserver> obj){
	observers.push_back(move(obj));				//attach member

}

unique_ptr<IObserver> SecurityStatus::DetachObserver(void){		//detach member

	unique_ptr<IObserver> detach = move(observers.back());
	observers.pop_back();
	return(detach);


}

void SecurityStatus::NotifyObservers(){

	for (const auto &ob : observers)				//notify all attached observers
	{
		ob->update();		
	}


}
