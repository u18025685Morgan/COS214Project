#include "EngineDecorator.h"
#include <iostream>
#include <string>
using namespace std;

EngineDecorator::EngineDecorator(Engine* e)
{
    if (e != nullptr)
    {
        engine = e;
    }
}

void EngineDecorator::addEngine(Engine* e)
{
    Engine::setType(e->getType());
    cout<<"Adding a new engine"<<endl;
}

Engine* EngineDecorator::getEngine()
{
    return engine;
}

void EngineDecorator::setEngine(Engine* e)
{
    if (e != nullptr)
    {
        engine = e;
    }
}

EngineDecorator::~EngineDecorator()
{
    if (engine != nullptr)
    {
        delete engine;
    }
}

