/****/

#include "Starlink.h"
Starlink :: Starlink(GroundReceiver* gr,string n): Satellite(gr,n) //mediator dp
{
    gr->createReceiver();
}

string Starlink :: getMessage()              //mediator dp
{
    return message;
}

void Starlink :: setMessage(string msg)    //mediator dp
{
    message = msg;
    Satellite :: MessageChanged();
}

void Starlink ::MessageChanged() {}     //mediator dp


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