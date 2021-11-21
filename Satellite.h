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
       virtual void launch()=0;
      //  void communicate(Satellite* ab);
       virtual void setName(string n) = 0;
       virtual string getName() = 0;
        virtual void land() =0;
        virtual string getType() = 0;
    

};



#endif //SATELLITE_H
