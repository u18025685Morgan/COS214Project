#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H
#include "EngineDecorator.h"
#include <string>
#include <iostream>

class VacuumMerlinEngine : public EngineDecorator
        {
        public:
            VacuumMerlinEngine(Engine* e); //Constructor that takes an Engine object as a parameter.
            ~VacuumMerlinEngine(); //Destructor

        };

#endif
