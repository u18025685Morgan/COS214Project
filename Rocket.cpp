#include "Rocket.h"

#include <iostream>
using namespace std;

Rocket::Rocket()
{}

Rocket::Rocket(string rocketname)
{
    name = rocketname;
}

string Rocket::getName()
{
    return name;
}

void Rocket::setName(string n)
{
    name = n;
}

void Rocket::launchRocket()
{
    launch();
}

void Rocket::print(){
    cout<<"This is a "<< getName() << " type Rocket"<<endl; 
}

//commmand design pattern
void Rocket ::On() //command dp
{
    cout << "Turning Rocket on\n";
}

void Rocket ::Off() //command dp
{
    cout << "Turning Rocket off\n";
}