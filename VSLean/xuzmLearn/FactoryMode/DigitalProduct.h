#pragma once
#include "IProduct.h"

// �����Ʒ
class DigitalProduct
	: public IProduct
{
public:
	DigitalProduct(){};
	~DigitalProduct(){};

	void Show()
	{
		cout << "I am DigitalProduct.... " << endl;
	}
};