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
     /**
        @brief default constructor for mediator dp
        @param none
        @return none, it is void 
    */
    GroundReceiver();                              
    
     /**
        @brief default deconstructor for mediator dp
        @param none
        @return none, it is void 
    */
    ~GroundReceiver();                              
    
     /**
        @brief notifies all satellites in satelliteList with message from sat for meiator dp
        @param Satelite object
        @return none, it is void 
    */
    void notify(Satellite* sat);                   
    
    /**
        @brief creates a new GroundReceiver object for mediator dp
        @param none
        @return GroundReceiver object 
    */
    GroundReceiver* createReceiver();            

    /**
        @brief constructor for Prototype dp
        @param string
        @return none, it is void 
    */
    GroundReceiver(string n);       //prototype dp
    
    /**
        @brief clones for prototype dp
        @param none
        @return Satellite object
    */
    Satellite *clone();
    
    /**
        @brief launches
        @param none
        @return none, it is void 
    */
    void launch();
    
    /**
        @brief gets the type
        @param none
        @return string
    */
    string getType();
    
    /**
        @brief lands Rocket
        @param none
        @return none, it is void 
    */
    void land();



};


#endif //GROUNDRECEIVER_H
