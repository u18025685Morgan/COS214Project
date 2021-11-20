/**
 *
 * **/

#include "Satellite.h"
#include <string>

using namespace std;

Satellite :: Satellite(GroundReceiver* gr,string n)
{
    GR = gr;
    name = n;
}

void Satellite :: MessageChanged()          //mediator dp
{
    GR->notify(this);
}

string Satellite :: getMessage()              //mediator dp
{
    return message;
}

void Satellite :: setMessage(string msg)    //mediator dp
{
    message = msg;
    MessageChanged();
}

string Satellite :: getName()
{
    return name;
}

