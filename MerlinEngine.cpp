#include "MerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

MerlinEngine::MerlinEngine():EngineDecorator()
{
    cout<<"Building a Merlin Engine"<<endl;
}

MerlinEngine::~MerlinEngine()
{}
