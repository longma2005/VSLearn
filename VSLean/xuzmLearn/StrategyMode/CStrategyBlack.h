#pragma once
#include "IStrategy.h"

// �ڲ���
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