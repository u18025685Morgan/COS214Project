#include "Engine.h"
#ifndef ENGINEDECORATOR_H
#define ENGINEDECORATOR_H

class EngineDecorator : public Engine
{
    private:
        Engine* engine;
    public:
        EngineDecorator();
        virtual void operation();
        Engine* getType();
        void setType(Engine* e);
    protected:
        ~EngineDecorator();

};

#endif


