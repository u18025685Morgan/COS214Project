#include "CrewDragonMaker.h"

CrewDragonMaker::CrewDragonMaker() : Dragon()
{
	numseats = 0;
}

CrewDragonMaker::~CrewDragonMaker()
{
	numseats = 0;
}

CrewDragonMaker::CrewDragonMaker(string s)
{
	this->name = s;
}

void CrewDragonMaker::setName(string s)
{
	this->name = s;	
}

string CrewDragonMaker::getName()
{
	return name;
}

void CrewDragonMaker::selectNumberSeats(int x)
{
	this->numseats = x;
}

int CrewDragonMaker::getNumberSeats()
{
	return numseats;
}

void CrewDragonMaker::setPayloadMass(int a)
{
	if (payloadmass + a > 6000)
	{
		cout<<"WARNING : MAX PAYLOAD MASS REACHED, REDUCE PAYLOAD MASS!!!"<<endl;
	}else
	{
		this->payloadmass = a;	
	}
}

int CrewDragonMaker::getPayloadMass()
{
	return payloadmass;
} 

void CrewDragonMaker::insertCrewMember(string a,string b,int c,int d)
{
	if (getNumSeatsOccupied() >= getNumberSeats())
	{
		cout<<"UNABLE TO INSERT NEW CREW MEMBER, CREWDRAGON IS FULL!!!"<<endl;
	}
	else
	{	
		CrewDetails abc;
		abc.name = a;
		abc.sex = b;
		abc.age = c;
		abc.weight = d;
		Crew.push_back(abc);	
	}
}

void CrewDragonMaker::removeCrewMember(int a)
{
	Crew.erase(Crew.begin()+a+1);
}

int CrewDragonMaker::getNumSeatsOccupied()
{
	return Crew.size();
}

void CrewDragonMaker::getCrewInfo()
{
	cout<<"--------CREW MEMBERS--------"<<endl;
	for (int i = 0; i < Crew.size(); ++i)
	{
		cout<<i+1<<".  Name: "<<Crew[i].name<<" Sex: "<<Crew[i].sex<<" Age: "<<Crew[i].age<<" Weight: "<<Crew[i].weight<<endl;
	}
	if (Crew.size() == 0)
	{
		cout<<"NONE"<<endl;
	}
	cout<<"----------------------------"<<endl;
}

