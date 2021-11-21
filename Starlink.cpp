#include "Starlink.h"

Starlink :: Starlink(string n) : Satellite(n)
{}

void Starlink :: launch()
{
    cout << "Ground Receiver " << name << "is launched" << endl;

}

string Starlink :: getType()
{
    return "Starlink Satellite ";
}
void Starlink :: land()
{
    cout << "Starlink Satellite is landing" << endl;
}
string Starlink :: getName()
{
    return name;
}
void Starlink :: setName(string n)
{
    name = n;
}
