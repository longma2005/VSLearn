#pragma once

// ���Ի���
class IStrategy
{
public:
	IStrategy(){};
	~IStrategy(){};

	virtual void Operate() = 0;
};