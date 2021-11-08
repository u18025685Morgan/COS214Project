#include "EngineDecorator.h"
#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H

class MerlinEngine : public EngineDecorator
{
    public:
        VacuumMerlinEngine();
        ~VacuumMerlinEngine();

};

#endif

