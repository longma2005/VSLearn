#pragma once
#include "IProduct.h"

// ÊýÂë²úÆ·
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