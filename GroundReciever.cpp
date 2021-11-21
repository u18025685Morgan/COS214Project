#include "GroundReciever.h"

GroundReciever :: GroundReciever(string n)
{
    name = n;
}

void GroundReciever :: launch()
{
    cout << "Ground Receiver " << name << "is launched" << endl;
}

string GroundReciever :: getType()
{
    return "GroundReciever Satellite";
}

void GroundReciever :: land()
{
       cout << " GroundReciever Satellite i+s landing" << endl;
}

string StarLink :: getName()
{
    return name;
}
void Starlink :: setName(string n)
{
    name = n;
}
