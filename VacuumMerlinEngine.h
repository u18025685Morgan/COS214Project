#include <string>
#include <iostream>
#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H
#include "EngineDecorator.h"

class VacuumMerlinEngine : public EngineDecorator
{
    public:
        VacuumMerlinEngine(); 
        ~VacuumMerlinEngine();

};

#endif

