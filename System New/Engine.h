/**
 * Receiver participant for Command design pattern
 * 
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
     /**
          @brief a default constructor that is called, when Engine objects are instantiated 
          @param none 
          @return no return value
     */
    Engine();                          //Default constructor
     /**
        @brief  Constructor taking the type of engine as a parameter.
        @param string that represents the type of engine
        @return no return value, its a constructor 
    */
    Engine(string etype); 
    
     /**
        @brief  Constructor taking the number of engines as a parameter.
        @param int value that represents the number of engines 
        @return no return value, its a constructor 
    */
    Engine(int n); 
    
      /**
        @brief Constructor taking both the attributes of engines as parameters.
        @param string variable and int value that represents the type of engine as well as the number of engines 
        @return no return value, its a constructor
    */
    Engine(string etype, int n);       
    
     /**
        @brief Destructor, deallocates memory .
        @param none
        @return no return value 
    */
    virtual ~Engine();
     /**
        @brief Pure virtual function that makes this class abstract
        @param Engine pointer
        @return none, its a void 
    */
    virtual void addEngine(Engine* e) = 0;
     /**
        @brief Returns the type of engine being worked with
        @param none
        @return string type 
    */
    string getType();                  
     /**
        @brief Sets the type of engine.
        @param string, recieves the type of engine.
        @return none, its a void 
    */
    void setType(string et);           
    /**
        @brief Returns the number of engines of respective engine.
        @param none 
        @return int, the number of engines
    */
    int getNumEngines();               
     /**
        @brief Sets the number of engines of respective engine.
        @param int,  representing thr number of engines 
        @return none, its a void
    */
    void setNumEngines(int nr); 
    /**
        @brief turns Engine on command dp.
        @param none 
        @return none, its a void
    */
    void On();                          
    /**
        @brief turns Engine Off command dp
        @param none 
        @return none, its a void
    */
    void Off();                         
};

class Core : public Engine //ConcreteComponent paricipant of the Decorator DP.
        {
        public:
      /**
        @brief a function that will add engine, if needed 
        @param Engine object 
        @return none, its a void
    */
            virtual void addEngine(Engine* e)
            {};

        };

#endif //ENGINE_H
