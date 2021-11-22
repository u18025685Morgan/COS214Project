#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include "EngineDecorator.h"
#include <string>
#include <iostream>

class MerlinEngine : public EngineDecorator
        {
        public:
            MerlinEngine(Engine* e);
            ~MerlinEngine();
       

        };

#endif