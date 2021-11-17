#include "EngineDecorator.h"
#include "VacuumMerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

VacuumMerlinEngine::VacuumMerlinEngine(): EngineDecorator()
{   
    //set type of engine to vacuumMerlin using inherited functions
    setType("VacuumMerlinEngine");
    cout<<"Building a Vacuum Merlin Engine"<<endl;
}

VacuumMerlinEngine::~VacuumMerlinEngine()
{}

