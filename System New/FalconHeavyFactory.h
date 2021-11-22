#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H
#include "RocketFactory.h"

class FalconHeavyFactory : public RocketFactory //Another ConcreteCreator participant of the Factor Method design pattern.
        {
        protected:
                /**
                @brief Outputs a message stating that the rocket is being built.
                @param none
                @return Rocket*, a pointer to a Rocket Object.
                **/     
                Rocket* buildRocket(); //The factory method.
        };

#endif
