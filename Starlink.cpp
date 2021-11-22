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
