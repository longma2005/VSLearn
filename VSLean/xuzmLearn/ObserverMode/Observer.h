#ifndef _OBSERVER_H_
#define _OBSERVER_H_

// π€≤Ï’ﬂ
class Observer
{
public:
	Observer(){};
	~Observer(){};
	virtual void Notify() = 0;
};

#endif