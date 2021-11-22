#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H
#include "RocketFactory.h"

class Falcon9Factory : public RocketFactory //A ConcreteCreator participant.
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
