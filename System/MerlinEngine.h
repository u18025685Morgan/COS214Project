#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include "EngineDecorator.h"
#include <string>
#include <iostream>

class MerlinEngine : public EngineDecorator
        {
        public:
            MerlinEngine(Engine* e); //Constructor that takes an Engine object as paramter.
            ~MerlinEngine(); //Default destructor.
       

        };

#endif
