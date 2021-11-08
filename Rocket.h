#include <string>
#include <iostream>
#ifndef ROCKET_H
#define ROCKET_H
#include "SpaceCommand.h"

class Rocket : public SpaceCommand //The Product participant of the Factory Method design pattern.
{
    private:
        std::string name; //A way to see with what type of rocket you are working with.
    public:
        Rocket();                   //Constructor.
        Rocket(std::string rocketname);
        std::string getName();           //Returns the name/type of rocket.
        void setName(std::string n);     //Sets the name/type of rocket.
        void launchRocket();
        void print();
    protected:
        virtual void launch() = 0;

};

#endif
