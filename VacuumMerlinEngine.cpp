#include "VacuumMerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

VacuumMerlinEngine::VacuumMerlinEngine(Engine* e):EngineDecorator(e)
{

    Engine::setType("VacuumMerlinEngine");

    cout<<"Adding a Vacuum Merlin Engine"<<endl;
}

VacuumMerlinEngine::~VacuumMerlinEngine()
{}

