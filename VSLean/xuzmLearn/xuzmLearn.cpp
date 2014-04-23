// xuzmLearn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ObserverMode/Dog.h"
#include "ObserverMode/Master.h"

#include "StrategyMode/CContext.h"
#include "StrategyMode/IStrategy.h"
#include "StrategyMode/CStrategyBlack.h"
#include "StrategyMode/CStrategyBlue.h"
#include "StrategyMode/CStrategyRed.h"

#include "FactoryMode/IFactory.h"
#include "FactoryMode/IProduct.h"
#include "FactoryMode/DigitalFactory.h"
#include "FactoryMode/DigitalProduct.h"
#include "FactoryMode/PhoneProduct .h"

#include "SmartPtr/SmartPtr.h"
// ��������ģʽ
void TestFactoryMode()
{
	string strTip = "=====����ģʽ=====\n";
	cout << strTip.c_str() << endl;

	cout << "���������Ʒ,�����빤��" << endl;
	IFactory* digitalFactory = new DigitalFactory<DigitalProduct>();
	IProduct* iProduct = digitalFactory->CreateProduct();
	iProduct->Show();

	delete iProduct;
	delete digitalFactory;

	cout << "�����ֻ���Ʒ,���ֻ�����" << endl;
	IFactory* phoneFactory = new DigitalFactory<PhoneProduct>();
	iProduct = phoneFactory->CreateProduct();
	iProduct->Show();

	delete iProduct;
	delete phoneFactory;
}


// ���Թ۲���ģʽ
void TestObserver()
{
	string strTip = "=====�۲���ģʽ=====\n" \
			"Master -> Observer\n" \
			"Dog -> Observable\n\n";
	cout << strTip.c_str() << endl;
	Master* master = new Master;
	Dog* dog = new Dog;
	dog->AddObserver(master);
	dog->Cry();
	dog->Smile();

	delete master;
	delete dog;

	cout << "====================" << endl;
}

// ���Բ���
void TestStrategy()
{
	string strTip = "=====����ģʽ=====\n" ;
	cout << strTip.c_str() << endl;

	cout << "�޲���" << endl;
	CContext* pContext = new CContext(NULL);
	pContext->Operate();

	cout << "ʹ�ú����" << endl;
	pContext->SetStrategy(new CStrategyRed());
	pContext->Operate();

	cout << "ʹ��������" << endl;
	pContext->SetStrategy(new CStrategyBlue());
	pContext->Operate();

	cout << "ʹ�úڲ���" << endl;
	pContext->SetStrategy(new CStrategyBlack());
	pContext->Operate();

	delete pContext;
}

class Stub
{
public:
	Stub()
	{
		cout<<"stub create.."<<endl;
	}
	~Stub()
	{
		cout<<"stub destroy.."<<endl;
	}
	void print()
	{
		cout<<"stub print()..."<<endl;
	}
};
void TestSmartPtr()
{
	SmartPtr<Stub> t(new Stub());
	t->print();
}
int _tmain(int argc, _TCHAR* argv[])
{
	//TestStrategy();
	//TestFactoryMode();
	TestSmartPtr();
	
	system("pause");
	return 0;
}

