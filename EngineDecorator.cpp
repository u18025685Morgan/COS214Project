#include "EngineDecorator.h"
#include <iostream>
#include <string>
using namespace std;

EngineDecorator::EngineDecorator()
{
    engine = nullptr;
}

void EngineDecorator::buildEngine(Engine* e)
{
    cout<<"Building a new engine"<<endl;
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

