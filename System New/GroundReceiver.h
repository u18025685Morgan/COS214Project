/**
 * Mediator participant of Mediator design pattern
 * Sengi....
 * **/

#ifndef GROUNDRECEIVER_H
#define GROUNDRECEIVER_H

#include "Satellite.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Satellite;        //mediator dp DO NOT REMOVE THIS

class GroundReceiver{
private:
    vector<Satellite*> satelliteList;               //mediator dp

    string name;//sengi
    Satellite* GRPrototype;//sengi

public:
    GroundReceiver();                               //mediator dp
    ~GroundReceiver();                              //mediator dp
    void notify(Satellite* sat);                    //mediator dp
    GroundReceiver* createReceiver();               //mediator dp

    GroundReceiver(string n);       //prototype dp
    Satellite *clone();
    void launch();
    string getType();
    void land();



};


#endif //GROUNDRECEIVER_H