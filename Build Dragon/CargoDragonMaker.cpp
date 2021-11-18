#include "CargoDragonMaker.h"

CargoDragonMaker::CargoDragonMaker() : Dragon()
{
	payloadmass = 0;
}

CargoDragonMaker::~CargoDragonMaker()
{
	payloadmass = 0;
}

CargoDragonMaker::CargoDragonMaker(string s)
{
	this->name = s;
}

string CargoDragonMaker::getName()
{
	return name;
}

void CargoDragonMaker::setPayloadMass(int a)
{
	if (payloadmass + a > 6000)
	{
		cout<<"WARNING : MAX PAYLOAD MASS REACHED!!!"<<endl;
		cout<<"REDUCE PAYLOAD MASS"<<endl;
	}else
	{
		this->payloadmass = a;	
	}
	
}

int CargoDragonMaker::getPayloadMass()
{
	return payloadmass;
} 
