#pragma once

// �����Ʒ�ӿ�
class IProduct
{
public:
	IProduct(){};
	~IProduct(){};

	virtual void Show() = 0;
};