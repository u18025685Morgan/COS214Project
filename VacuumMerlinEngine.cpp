#include "VacuumMerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

VacuumMerlinEngine::VacuumMerlinEngine()
{
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

