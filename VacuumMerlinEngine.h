#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H
#include "EngineDecorator.h"
#include <string>
#include <iostream>

class VacuumMerlinEngine : public EngineDecorator
{
    public:
        VacuumMerlinEngine();   //added by Nasiphi -17h09
        VacuumMerlinEngine(Engine* e); 
        ~VacuumMerlinEngine();

};

#endif

