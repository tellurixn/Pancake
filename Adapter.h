#pragma once
#include "IDrop.h"
#include "Submitter.h"

//�����-������� ��� Submitter'�
class Adapter : public IDrop
{
private:
	Submitter* submitter;
public:
	virtual void Give();
	Adapter(Submitter* submitter);
};

