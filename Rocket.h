#include <string>
#include <iostream>
#ifndef ROCKET_H
#define ROCKET_H
#include "SpaceCommand.h"

using namespace std;

class Rocket : public SpaceCommand    //The Product participant of the Factory Method design pattern.
{
    private:
        string name;                  //A way to see with what type of rocket you are working with.
    public:
        Rocket();                     //Default constructor.
        Rocket(string rocketname);    //Constructor taking the name of the rocket as a parameeter.
        string getName();             //Returns the name/type of rocket.
        void setName(string n);       //Sets the name/type of rocket.
        void launchRocket();
        void print();

        void On();                    //turns Rocket on ->(Command dp)
        void Off();                   //turns Rocket off ->(Command dp)

    protected:
        virtual void launch() = 0;

};

#endif
