#pragma once
#include "IStrategy.h"

class CContext
{
public:
	CContext(IStrategy* s): m_strategy(s)
	{
	};
	~CContext(){};

	void SetStrategy(IStrategy* s)
	{
		m_strategy = s;
	}

	void Operate()
	{
		if (m_strategy)
		{
			m_strategy->Operate();
		}
		else
		{
			cout << "ÎŞStrategy" << endl;
		}
	}
private:
	IStrategy* m_strategy;
};