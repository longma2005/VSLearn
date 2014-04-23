#pragma once

// 抽象产品接口
class IProduct
{
public:
	IProduct(){};
	~IProduct(){};

	virtual void Show() = 0;
};