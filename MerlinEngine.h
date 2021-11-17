#include "EngineDecorator.h"
#include <string>
#include <iostream>
#ifndef MERLINENGINE_H
#define MERLINENGINE_H

class MerlinEngine : public EngineDecorator
{
    public:
        MerlinEngine();
        ~MerlinEngine();
       
    private: 
        int numEngines;

};

#endif
