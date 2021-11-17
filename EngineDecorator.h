#include "Engine.h"
#ifndef ENGINEDECORATOR_H
#define ENGINEDECORATOR_H

class EngineDecorator : public Engine
{
    private:
        Engine* engine;
    public:
        EngineDecorator();
        virtual void buildEngine(Engine* e);
        Engine* getEngine();
        void setEngine(Engine* e);
    protected:
        ~EngineDecorator();

};

#endif


