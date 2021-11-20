/**
 * Colleague participant of Mediator design pattern
 *_____ participant of Prototype design pattern
 * **/

#ifndef SATELLITE_H
#define SATELLITE_H

#include "GroundReceiver.h"
#include <string>
using namespace std;

class GroundReceiver;       //medaitor DP

class Satellite {
    private:
        GroundReceiver* GR;                         //mediator dp
        string message;                             //mediator dp
        string name;

    public:
        Satellite(GroundReceiver* gr,string n);             //mediator dp
        virtual void MessageChanged();                      //mediator dp
        virtual string getMessage();                        //mediator dp
        virtual void setMessage(string msg);                //mediator dp

        Satellite(string name);
        void launch();
        void communicate(Satellite* ab);
        void setName(string n);
        string getName();

};



#endif //SATELLITE_H
