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

using namespace std;

class Rocket : public SpaceCommand    //The Product participant of the Factory Method design pattern.
{
    private:
        string name;                  //A way to see with what type of rocket you are working with.
        Engine** e;                   //Added by Yane at 16:18
    public:
        Rocket();                     //Default constructor.
        Rocket(string rocketname);    //Constructor taking the name of the rocket as a parameeter.
        string getName();             //Returns the name/type of rocket.
        void setName(string n);       //Sets the name/type of rocket.
        void launchRocket();
        void buildRocket();           //Added by Yane at 16:18
        void print();

        void On();                    //turns Rocket on ->(Command dp)
        void Off();                   //turns Rocket off ->(Command dp)
        bool staticFireTest(RocketInitialState* obj); // function that checks state of rocket, if true then test successful

    protected:
        virtual void launch() = 0;
        virtual void build() = 0;    //Added by Yane at 16:18

};

#endif
