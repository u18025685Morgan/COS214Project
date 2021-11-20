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

GroundReceiver* GroundReceiver :: createReceiver()
{
    return new GroundReceiver;
}

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