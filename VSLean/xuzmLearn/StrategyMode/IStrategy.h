#pragma once

// ²ßÂÔ»ùÀà
class IStrategy
{
public:
	IStrategy(){};
	~IStrategy(){};

	virtual void Operate() = 0;
};