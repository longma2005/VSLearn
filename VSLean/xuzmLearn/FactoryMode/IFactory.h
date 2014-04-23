#pragma once
#include "IFactory.h"
#include "IProduct.h"

// 抽象工厂基类
class IFactory
{
public:
	IFactory(){};
	~IFactory(){};

	virtual IProduct* CreateProduct() = 0;
};