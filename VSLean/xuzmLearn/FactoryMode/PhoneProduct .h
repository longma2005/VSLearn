#pragma once
#include "IProduct.h"

// �ֻ���Ʒ
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