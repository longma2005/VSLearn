#ifndef _OBSERVABLE_H
#define _OBSERVABLE_H
#include "Observer.h"

// 被观察者
class Observable
{
public:
	Observable(){};
	~Observable(){};

	// 添加观察者
	void AddObserver(Observer* pObserver)
	{
		cout << "添加Observer" << endl;
		vecObservers.push_back(pObserver);
	}
	
	void RemoveObserver(Observer* pObserver)
	{
		vector<Observer*>::const_iterator it = vecObservers.begin();
		for (;it != vecObservers.end(); it++)
		{
			if ((*it) == pObserver)
			{
				cout << "移除Observer" << endl;
				vecObservers.erase(it);
				break;
			}
		}
	}
	// 执行通知
	void NotifyObserver()
	{
		cout << "NotifyObserver" << endl;
		vector<Observer*>::const_iterator it = vecObservers.begin();
		for (;it != vecObservers.end(); it++)
		{
			(*it)->Notify();
		}
	}

private:
	vector<Observer*> vecObservers;

};
#endif
