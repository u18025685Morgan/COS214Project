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

void CargoDragonMaker::stageseparation()
{
    cout<<"----------Cargo Dragon In Transit to International Space Station----------"<<endl<<endl;
    cout<<this->name<<" "<<"Cargo Dragon has successfully separated from 2nd stage"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Cargo Dragon is now in orbit"<<endl;
    sleep(4);
    cout<<this->name<<" "<<"Cargo Dragon is approaching International Space Station"<<endl;
    sleep(1);
    cout<<this->name<<" "<<"Cargo Dragon has successfully docked onto International Space Station"<<endl;
    cout<<"--------------------------------------------------------------"<<endl<<endl;
}

bool CargoDragonMaker::setPayloadMass(int a)
{
    payloadmass = a;
    if (payloadmass + a > 6000)
        return false;
    else
        return true;
	
}

int CargoDragonMaker::getPayloadMass()
{
    return payloadmass;
} 

void CargoDragonMaker::returntoearth()
{
    cout<<"----------Cargo Dragon Returning to Earth----------"<<endl<<endl;
    cout<<this->name<<" "<<"Cargo Dragon has detached from ISS"<<endl;
    sleep(1);
    cout<<"Trunk section jetisoned to burn up in atmosphere"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Thrusters fired for 15 min de-orbit burn"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Cargo Dragon is re-entering atmosphere"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Cargo Dragon Parachutes have been deployed"<<endl;
    sleep(1);
    cout<<this->name<<" "<<"Cargo Dragon Splashdown off coast of Florida"<<endl;
    cout<<"--------------------------------------------------------------"<<endl<<endl;

}