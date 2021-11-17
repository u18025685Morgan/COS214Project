#include "MerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

MerlinEngine::MerlinEngine():EngineDecorator()
{
    cout<<"Building a Merlin Engine"<<endl;
}

void MerlinEngine::setNum(int num){
      numEngines = num; 
}

int MerlinEngine::getNumEngines(){
    return numEngines;
}

MerlinEngine::~MerlinEngine()
{}
