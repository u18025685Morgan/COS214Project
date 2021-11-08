#include "EngineDecorator.h"
using namespace std;

EngineDecorator::EngineDecorator()
{
    enginType = nullptr;
}

Engine* EngineDecorator::getType()
{
    return engineType;
}

void EngineDecorator::setType(Engine* e)
{
    if (e != nullptr)
    {
        engineType = e;
    }
}

EngineDecorator::~EngineDecorator()
{
    if (engineType != nullptr)
    {
        delete enginType;
    }
}

