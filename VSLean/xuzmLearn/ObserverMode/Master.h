#ifndef _MASTER_H
#define _MASTER_H

// 主人，观察者
class Master: public Observer
{
public:
	Master()
	{
		cout << "Master create . " << endl;
	};
	~Master()
	{
		cout << "Master destructor.." << endl;
	};
	void Notify()
	{
		cout << "Master: I know! " << endl;
	}
};

#endif