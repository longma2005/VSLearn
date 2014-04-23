#pragma once
#include "IStrategy.h"

// ºÚ²ßÂÔ
class CStrategyBlack:
	public IStrategy
{
public:
	CStrategyBlack(){};
	~CStrategyBlack(){};

	void Operate()
	{
		cout << "Operate Black..." << endl;
	}
};