#pragma once
#include "IStrategy.h"

// ������
class CStrategyBlue:
	public IStrategy
{
public:
	CStrategyBlue(){};
	~CStrategyBlue(){};

	void Operate()
	{
		cout << "Operate Blue..." << endl;
	}
};