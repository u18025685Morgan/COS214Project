#include "VacuumMerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

//added by Nasiphi  -17h09
VacuumMerlinEngine::VacuumMerlinEngine(){
}

VacuumMerlinEngine::VacuumMerlinEngine(Engine* e):EngineDecorator(e)
{

    Engine::setType("VacuumMerlinEngine");

    cout<<"Adding a Vacuum Merlin Engine"<<endl;
}

VacuumMerlinEngine::~VacuumMerlinEngine()
{}

