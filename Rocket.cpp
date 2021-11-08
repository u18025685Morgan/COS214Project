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
