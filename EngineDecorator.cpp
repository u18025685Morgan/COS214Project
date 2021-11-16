#include "EngineDecorator.h"
using namespace std;

EngineDecorator::EngineDecorator()
{
    engine = nullptr;
}

Engine* EngineDecorator::getType()
{
    return engine;
}

void EngineDecorator::setType(Engine* e)
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

