#ifndef _MASTER_H
#define _MASTER_H

// ���ˣ��۲���
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