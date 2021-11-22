//
// Created by lisar on 2021/11/22.
//

#include "Dragon.h"
Dragon :: Dragon(){}

Dragon :: ~Dragon(){}

void Dragon :: setName(string a)
{
    this->name;
}

string Dragon :: getName()
{
    return name;
}

void Dragon :: setPayloadMass(int x)
{
    this->payloadmass = x;
}

int Dragon :: getPayloadMass()
{
    return payloadmass;
}
void Dragon :: selectNumberSeats(int x)
{
    this->seats = x;
}
int Dragon :: getNumberSeats()
{
    return seats;
}

void Dragon :: releaseparachute()
{
    cout<<"PARACHUTE RELEASED SUCCESSFULLY"<<endl<<endl;
}

void Dragon :: removeCargo(int x)
{
    payloadmass -= x;
    cout<<x<<" kg cargo successfully removed"<<endl;
}

void Dragon :: insertCrewMember(string,string,int,int){}
void Dragon :: removeCrewMember(int){}
void Dragon :: getCrewInfo(){}
int Dragon :: getNumSeatsOccupied(){return seats;}

void Dragon :: stageseparation()
{
    cout<<"----------Dragon In Transit to International Space Station----------"<<endl<<endl;
    cout<<this->name<<" "<<"Dragon has successfully separated from 2nd stage"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Dragon is now in orbit"<<endl;
    sleep(4);
    cout<<this->name<<" "<<"Crew Dragon is approaching International Space Station"<<endl;
    sleep(1);
    cout<<this->name<<" "<<"Crew Dragon has successfully docked onto International Space Station"<<endl;
    cout<<"--------------------------------------------------------------"<<endl<<endl;

}

void Dragon :: returntoearth()
{
    cout<<"----------Dragon Returning to Earth----------"<<endl<<endl;
    cout<<this->name<<" "<<"Dragon has detached from ISS"<<endl;
    sleep(1);
    cout<<"Trunk section jetisoned to burn up in atmosphere"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Thrusters fired for 15 min de-orbit burn"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Dragon is re-entering atmosphere"<<endl;
    sleep(2);
    cout<<this->name<<" "<<"Dragon Parachutes have been deployed"<<endl;
    sleep(1);
    cout<<this->name<<" "<<"Dragon Splashdown off coast of Florida"<<endl;
    cout<<"--------------------------------------------------------------"<<endl<<endl;
}

void Dragon :: CreworCargo_(int x)
{
    this->CreworCargo = x;
}