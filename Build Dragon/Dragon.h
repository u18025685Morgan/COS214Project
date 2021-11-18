#ifndef Dragon_H
#define Dragon_H 
#include <iostream>
#include <string>
using namespace std;
class Dragon
{
public:
	Dragon(){};
	virtual ~Dragon(){};
	virtual void setName(string)=0;
	virtual string getName()=0;
	virtual void setPayloadMass(int x)
	{
		this->payloadmass = x;
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
		cout<<"PARACHUTE RELEASED SUCCESSFULLY"<<endl;
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
private:
	int payloadmass;
	int seats;
};
#endif 
