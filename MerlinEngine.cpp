#include "MerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

MerlinEngine::MerlinEngine():EngineDecorator()
{
    setType("MerlinEngine");
    cout<<"Adding a Merlin Engine"<<endl;
}

MerlinEngine::~MerlinEngine()
{}
