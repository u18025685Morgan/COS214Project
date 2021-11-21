#include "Starlink.h"


StarLink :: StarLink()
{

}
StarLink :: StarLink(string n)
{
    name = n;
}

void StarLink :: launch()
{
         cout << "Ground Receiver " << name << "is launched" << endl;

}

string StarLink :: getType()
{
    return "StarLink Satellite ";
}
void StarLink :: land()
{
    cout << "Starlink Satellite is landing" << endl;
}
string StarLink :: getName()
{
    return name;
}
void Starlink :: setName(string n)
{
    name = n;
}








