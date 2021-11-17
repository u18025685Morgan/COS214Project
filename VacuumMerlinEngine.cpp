#include "Engine.h"
#include "VacuumMerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

VacuumMerlinEngine::VacuumMerlinEngine()
{   
    //set type of engine to vacuumMerlin using inherited functions
    
    cout<<"Building a Vacuum Merlin Engine"<<endl;
}

void VacuumMerlinEngine::setNumEngines(int n){
    numEngines = n;
}

int VacuumMerlinEngine::getNumEngine(){
    return numEngines;
}

VacuumMerlinEngine::~VacuumMerlinEngine()
{}

