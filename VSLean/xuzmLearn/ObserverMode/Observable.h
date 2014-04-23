#ifndef _OBSERVABLE_H
#define _OBSERVABLE_H
#include "Observer.h"

// ���۲���
class Observable
{
public:
	Observable(){};
	~Observable(){};

	// ��ӹ۲���
	void AddObserver(Observer* pObserver)
	{
		cout << "���Observer" << endl;
		vecObservers.push_back(pObserver);
	}
	
	void RemoveObserver(Observer* pObserver)
	{
		vector<Observer*>::const_iterator it = vecObservers.begin();
		for (;it != vecObservers.end(); it++)
		{
			if ((*it) == pObserver)
			{
				cout << "�Ƴ�Observer" << endl;
				vecObservers.erase(it);
				break;
			}
		}
	}
	// ִ��֪ͨ
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
