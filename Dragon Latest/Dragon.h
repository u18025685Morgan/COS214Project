#ifndef Dragon_H
#define Dragon_H 
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;
class Dragon
{
private:
	int payloadmass;
	int seats;
	string name;
	int CreworCargo;
public:
	Dragon(){};
	virtual ~Dragon(){};
	virtual void setName(string a) 
	{
		this->name;
	}
	virtual string getName()
	{
		return name;
	}
	virtual bool setPayloadMass(int x)
	{
		if(x > 6000)
		{
		return false;

			
		}
		else
		{
			this->payloadmass = x;
			return true;
		}
	}
	virtual int getPayloadMass()
	{
		return payloadmass;
	}
	virtual void selectNumberSeats(int x)
	{
		this->seats = x;
	}
	virtual int getNumberSeats()
	{
		return seats;
	}

	void releaseparachute()
	{
		cout<<"PARACHUTE RELEASED SUCCESSFULLY"<<endl<<endl;
	}

	virtual void removeCargo(int x)
	{
		payloadmass -= x;
		cout<<x<<" kg cargo successfully removed"<<endl;
	}

	virtual void insertCrewMember(string,string,int,int){}
	virtual void removeCrewMember(int){}
	virtual void getCrewInfo(){}
	virtual int getNumSeatsOccupied(){return seats;}

	virtual void stageseparation()
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

	virtual void returntoearth()
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

	void CreworCargo_(int x)
	{
		this->CreworCargo = x;
	}


};
#endif 
