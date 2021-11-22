#ifndef CargoDragonMaker_H
#define CargoDragonMaker_H 
#include <iostream>
#include "Dragon.h"
using namespace std;
class CargoDragonMaker : public Dragon
{
public:
	CargoDragonMaker();
	~CargoDragonMaker();
	CargoDragonMaker(string);
	string getName();
	bool setPayloadMass(int);
	int getPayloadMass();
	void stageseparation();
	void returntoearth();

private:
	string name;
	int payloadmass = 0;
	int maxpayload = 6000;
};
#endif 
