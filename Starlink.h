/**
 * Concrete Colleague participant of Mediator design pattern
 * **/

#ifndef STARLINK_H
#define STARLINK_H

#include <string>
#include "Satellite.h"
#include "GroundReceiver.h"

using namespace std;

class Starlink :public Satellite{
    private:
        string message;                            //mediator dp
        string name;
        
        
    public:
        Starlink(GroundReceiver* gr,string n);      //mediator dp
        string getMessage();                        //mediator dp
        void setMessage(string msg);                //mediator dp
        void MessageChanged();                      //mediator dp
        Starlink(string n);
        void launch();
        string getName();
        void setName();
        string getType();


};


#endif //STARLINK_H
