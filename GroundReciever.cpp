#include "GroundReciever.h"

GroundReciever :: GroundReciever(string n)
{
    name = n;
}

void GroundReciever :: launch()
{
    cout << "Ground Receiver " << name << "is launched" << endl;
}

Satellite* GroundReciever :: clone()
{
    
}
