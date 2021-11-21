/**
 *
 * **/

#include "GroundReceiver.h"

GroundReceiver ::GroundReceiver()        //mediator dp
{}

GroundReceiver :: ~GroundReceiver()        //mediator dp
{}

void GroundReceiver ::notify(Satellite *sat)        //mediator dp
{
    cout << sat->getName();
    cout << " sends message:\t ";
    cout << sat->getMessage();
    cout << "\t notifying the others!\n";

    for(int i=0  ;  i<satelliteList.size()  ;  i++)
        notify(satelliteList[i]);

}

GroundReceiver* GroundReceiver :: createReceiver() //mediator dp
{
    return new GroundReceiver;
}



GroundReceiver :: GroundReceiver(string n)
{
    name = n;
}

void GroundReceiver :: launch()
{
    cout << "Ground Receiver " << name << "is launched" << endl;
}

string GroundReceiver :: getType()
{
    return "GroundReceiver Satellite";
}

void GroundReceiver :: land()
{
    cout << " GroundReceiver Satellite i+s landing" << endl;
}

/*
string Starlink :: getName()
{
    return name;
}
void Starlink :: setName(string n)
{
    name = n;
}
*/