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
// 测试生产模式
void TestFactoryMode()
{
	string strTip = "=====生产模式=====\n";
	cout << strTip.c_str() << endl;

	cout << "生产数码产品,从数码工厂" << endl;
	IFactory* digitalFactory = new DigitalFactory<DigitalProduct>();
	IProduct* iProduct = digitalFactory->CreateProduct();
	iProduct->Show();

	delete iProduct;
	delete digitalFactory;

	cout << "生产手机产品,从手机工厂" << endl;
	IFactory* phoneFactory = new DigitalFactory<PhoneProduct>();
	iProduct = phoneFactory->CreateProduct();
	iProduct->Show();

	delete iProduct;
	delete phoneFactory;
}


// 测试观察者模式
void TestObserver()
{
	string strTip = "=====观察者模式=====\n" \
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

// 测试策略
void TestStrategy()
{
	string strTip = "=====策略模式=====\n" ;
	cout << strTip.c_str() << endl;

	cout << "无策略" << endl;
	CContext* pContext = new CContext(NULL);
	pContext->Operate();

	cout << "使用红策略" << endl;
	pContext->SetStrategy(new CStrategyRed());
	pContext->Operate();

	cout << "使用蓝策略" << endl;
	pContext->SetStrategy(new CStrategyBlue());
	pContext->Operate();

	cout << "使用黑策略" << endl;
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

