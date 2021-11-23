/**
 * Receiver participant of Command design pattern
 * Product participant of the Factory Method design pattern.
 * **/

#ifndef ROCKET_H
#define ROCKET_H

#include "SpaceCommand.h"
#include "RocketState.h"
#include "RocketInitialState.h"
#include <string>
#include <iostream>
#include "Engine.h"                //Added by Yane at 16:18
#include "EngineDecorator.h"       //Added by Yane at 16:18
#include "MerlinEngine.h"          //Added by Yane at 16:18
#include "VacuumMerlinEngine.h"    //Added by Yane at 16:18

class Rocket : public SpaceCommand
        {
        private:
            string name;                  //A way to see with what type of rocket you are working with.
            Engine** e;                   //Added by Yane at 16:18
            int numEngines;

        public:
         /**
        @brief Default constructor
        @param none 
        @return none, its a constructor
        */
            Rocket();  
       /**
        @brief Constructor taking the name of the rocket as a parameter
        @param string, the rocket name  
        @return none, its a constructor
    */
            Rocket(string rocketname);    
      /**
         @brief Returns the name/type of rocket.
        @param none  
        @return string, name of rocket
    */
           string getName();
           /**
               @brief Sets the name/type of rocket.
               @param string, that represents the type of rocket, there are only two types of rockets, Falcon9 or Falcon Heavy   
               @return none , its a void 
    */
            void setName(string n);      
              /**
               @brief launchRocket calls the launch function of the respective rocket
               @param string, that represents the type of rocket   
               @return none , its a void 
         */
            void launchRocket();
           /**
               @brief build Rocket responsible for building the rocket
               @param none  
               @return none , its a void 
         */
            void buildRocket();           //Added by Yane at 16:18
             /**
               @brief a pure virtual print function that is defined in concrete classes 
               @param none  
               @return none , its a void 
         */
            virtual void print();
           /**
               @brief sets the number of engines 
               @param int, the number of engines  
               @return none , its a void 
         */
            void setNumEngines(int num);    //added by Nasiphi
            /**
               @brief turns on rocket, command dp 
               @param none
               @return none , its a void 
         */
            void On();                    //turns Rocket on ->(Command dp)
             /**
               @brief turns off rocket, command dp 
               @param none
               @return none , its a void 
         */
            void Off();                   //turns Rocket off ->(Command dp)
             /**
               @brief a static fire test that checks what state the rocket is
               @param RocketState object 
               @return bool
         */
            bool staticFireTest(RocketState* obj); // function that checks state of rocket, if true then test successful

            virtual void launch()=0;       //virtual launch

        protected:

            virtual void build()=0;    //Added by Yane at 16:18
        };


#endif //ROCKET_H
