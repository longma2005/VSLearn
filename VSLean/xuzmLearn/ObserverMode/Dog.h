#ifndef _DOG_H
#define _DOG_H
#include "Observable.h"
#include "CommonDefine.h"
// 主人的狗,被观察者
class Dog : 
	public Observable
{
public:
	Dog()
	{
		_nType = Observable_Op_Type_None;
		cout << "Dog Create ..." << endl;
	};
	~Dog()
	{
		cout << "Dog destructor ..." << endl;
	};

	void Cry()
	{
		_nType = Observable_Op_Type_Cry;
		cout << "Dog: Cry" << endl;
		NotifyObserver();
	}
	void Smile()
	{
		_nType = Observable_Op_Type_Smile;
		cout << "Dog: Smile" << endl;
		NotifyObserver();
	}

private:
	Observable_Op_Type _nType;
};

#endif