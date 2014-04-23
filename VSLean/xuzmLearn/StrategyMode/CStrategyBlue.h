#pragma once
#include "IStrategy.h"

// À¶²ßÂÔ
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