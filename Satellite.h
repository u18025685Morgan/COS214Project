//
// Created by lisar on 2021/11/09.
//
/**
 Colleague Participant of Mediator design pattern
 ________Participant of Prototype pattern
 * **/
#ifndef SATELLITE_H
#define SATELLITE_H

#include "SpaceCommand.h"
#include <string>

class Satellite {
private:
    SpaceCommand* SC;               //mediator dp
    string message;                 //mediator dp
    string name;

public:
    Satellite(SpaceCommand* sc, string name);                //mediator dp
    Satellite(SpaceCommand* sc, string msg, string name);    //mediator dp
    void MessageChanged();                      //mediator dp
    string getMessage();                        //mediator dp
    void setMessage(string msg);                //mediator dp

    Satellite(string name);
    void launch();
    void communicate(Satellite* ab);
    void setName(string n);
    string getName();
 Satellite *clone();
 


    
};


#endif //LISA_CODE_SATELLITE_H
