#pragma once
#include "IFactory.h"
#include "DigitalProduct.h"

// ģ�����빤��
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