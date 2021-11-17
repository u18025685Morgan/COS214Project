#include "EngineDecorator.h"
#include <string>
#include <iostream>
#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H

class VacuumMerlinEngine : public EngineDecorator
{
    public:
        VacuumMerlinEngine();
        void setNumEngines(int n);
        int getNumEngines(); 
        ~VacuumMerlinEngine();
        
    private:
        int numEngines;

};

#endif

