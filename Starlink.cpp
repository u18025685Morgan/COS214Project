#include "Starlink.h"

StarLink :: StarLink(string n)
{
    name = n;
}

void StarLink :: launch()
{
         cout << "Ground Receiver " << name << "is launched" << endl;

}

Satellite* Satellite :: clone()
{
    return new Satellite(*this);
}