#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H
#include "RocketFactory.h"

class Falcon9Factory : public RocketFactory //A ConcreteCreator participant.
        {
        protected:
            Rocket* buildRocket(); //The factory method.
        };

#endif