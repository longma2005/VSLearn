#pragma once
#include "IStrategy.h"

// �����
class CStrategyRed:
	public IStrategy
{
public:
	CStrategyRed(){};
	~CStrategyRed(){};

	void Operate()
	{
		cout << "Operate Red..." << endl;
	}
};