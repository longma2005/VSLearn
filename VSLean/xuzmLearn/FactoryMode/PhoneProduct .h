#pragma once
#include "IProduct.h"

// 手机产品
class PhoneProduct
	: public IProduct
{
public:
	PhoneProduct(){};
	~PhoneProduct(){};

	void Show()
	{
		cout << "I am PhoneProduct ..." << endl;
	}
};