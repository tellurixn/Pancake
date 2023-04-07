#pragma once
#include "IDrop.h"
#include "Submitter.h"

//Класс-адаптер для Submitter'а
class Adapter : public IDrop
{
private:
	Submitter* submitter;
public:
	virtual void Give();
	Adapter(Submitter* submitter);
};

