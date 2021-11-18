#ifndef ENGINEDECORATOR_H
#define ENGINEDECORATOR_H
#include "Engine.h"

class EngineDecorator : public Engine
{
    private:
        Engine* engine;
    public:
        EngineDecorator(Engine* e);
        virtual void addEngine(Engine* e);
        Engine* getEngine();
        void setEngine(Engine* e);
    protected:
        ~EngineDecorator();

};

#endif


