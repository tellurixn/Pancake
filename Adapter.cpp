#include "Adapter.h"

void Adapter::Give()
{
	submitter->ServeCutlery();
}

Adapter::Adapter(Submitter* submitter)
{
	this->submitter = submitter;
}
