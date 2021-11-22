/**
 * Receiver participant for Command design pattern
 * //Nasiphi can you add what participant this has for you for your design pattern
 * //Engine is the Component participant and Core is the ConcreteComponent participant of the Decorator design pattern.
 * **/

#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <iostream>

using namespace std;

class Engine {                             //Component paricipant of Decorator DP
private:
    string engineType;                 //String variable to distinguish between the types of engines (VacuumMerlin/Merlin)
    int numEngines;                    //Number of engines (to be set when stages are implemented)

public:
    Engine();                          //Default constructor
    Engine(string etype);              //Constructor taking the type of engine as a parameter.
    Engine(int n);                     //Constructor taking the number of engines as a parameter.
    Engine(string etype, int n);       //Constructor taking both the attributes of engines as parameters.
    virtual ~Engine();                 //Destructor
    virtual void addEngine(Engine* e) = 0;
    string getType();                  //Returns the type of engine being worked with.
    void setType(string et);           //Sets the type of engine.
    int getNumEngines();               //Returns the number of engines.
    void setNumEngines(int nr);        //Sets the number of engines.
    void On();                          //turns Engine on command dp
    void Off();                         //turns Engine Off command dp
};

class Core : public Engine //ConcreteComponent paricipant of the Decorator DP.
        {
        public:
            virtual void addEngine(Engine* e)
            {};

        };

#endif //ENGINE_H