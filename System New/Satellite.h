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
     /**
        @brief constructor for Mediator dp
        @param GroundReceiver
        @return none, it is void 
    */
    Satellite(GroundReceiver* gr,string n);        
    
     /**
        @brief virtual function that notifies others when msg is changed for mediator dp
        @param none
        @return none, it is void 
    */
    virtual void MessageChanged();                 
    
     /**
        @brief virtual function that gets the message sent out for mediator dp
        @param none
        @return string 
    */
    virtual string getMessage();                    
    
     /**
        @brief sets the messae for mediator dp
        @param string
        @return none, it is void 
    */
    virtual void setMessage(string msg);         
    
    

     /**
        @brief Satellite constructor for prototype dp
        @param string
        @return none, it is void 
    */
    Satellite(string name);
    
     /**
        @brief pure virtual launch
        @param none
        @return none, it is void 
    */
    virtual void launch()=0;
    
    
    //  void communicate(Satellite* ab);
    
     /**
        @brief pure virtual setName
        @param string
        @return none, it is void 
    */
    virtual void setName(string n) = 0;
    
     /**
        @brief pure virtual getName
        @param none
        @return string
    */
    virtual string getName() = 0;
    
     /**
        @brief pure virtual land
        @param none
        @return none, it is void 
    */
    virtual void land() =0;
    
     /**
        @brief pure virtual getType
        @param none
        @return string
    */
    virtual string getType() = 0;


};



#endif //SATELLITE_H
