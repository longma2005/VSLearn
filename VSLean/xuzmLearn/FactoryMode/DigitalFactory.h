#pragma once
#include "IFactory.h"
#include "DigitalProduct.h"

// 模板数码工厂
template<class M>
class DigitalFactory
	: public IFactory
{
public:
	DigitalFactory(){};
	~DigitalFactory(){};

	IProduct* CreateProduct()
	{
		return new M();
	}
};