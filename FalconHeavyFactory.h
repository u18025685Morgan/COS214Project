#include "RocketFactory.h"
#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H


class FalconHeavyFactory : public RocketFactory //Another ConcreteCreator participant of the Factor Method design pattern.
{
    protected:
        Rocket* buildRocket(); //The factory method.
};

#endif

