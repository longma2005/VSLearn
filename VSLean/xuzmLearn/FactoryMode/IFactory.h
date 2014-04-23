#pragma once
#include "IFactory.h"
#include "IProduct.h"

// ���󹤳�����
class IFactory
{
public:
	IFactory(){};
	~IFactory(){};

	virtual IProduct* CreateProduct() = 0;
};