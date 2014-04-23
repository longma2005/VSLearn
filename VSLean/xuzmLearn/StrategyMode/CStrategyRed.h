#pragma once
#include "IStrategy.h"

// ºì²ßÂÔ
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