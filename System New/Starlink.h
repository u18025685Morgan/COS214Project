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
    /**
        @brief Constructor for Starlink for Mediator dp
        @param GroundReciever object and string
        @return none, it is void 
    */
    Starlink(GroundReceiver* gr,string n);      
    
    /**
        @brief returns message sent out for Mediator dp
        @param none
        @return string 
    */
    string getMessage();                       
    
    /**
        @brief sets message that needs to be sent out, calls MessageChanged() function for Mediator dp
        @param string
        @return none, it is void 
    */
    void setMessage(string msg);     
    
    /**
        @brief notifies other satellites about the msg change
        @param none
        @return none, it is void 
    */
    void MessageChanged();                   
    
    
    /**
        @brief Constructor for Prototype dp
        @param string
        @return none, it is void 
    */
    Starlink(string n);
    
    /**
        @brief launches satelite
        @param none
        @return none, it is void 
    */
    void launch();
    
    /**
        @brief gets Satellite name
        @param none
        @return string 
    */
    string getName();
    
    /**
        @brief set's Satellite name
        @param string
        @return none, it is void 
    */
    void setName(string n);
    
     /**
        @brief  gets type
        @param none
        @return string 
    */
    string getType();
    
     /**
        @brief lands Satellite
        @param none
        @return none, it is void 
    */
    void land();


};


#endif //STARLINK_H
