#include "MerlinEngine.h"
#include <string>
#include <iostream>
using namespace std;

//added by Nasiphi -17h07
MerlinEngine:: MerlinEngine(){
}

MerlinEngine::MerlinEngine(Engine* e):EngineDecorator(e)
{
    Engine::setType("MerlinEngine");
    cout<<"Adding a Merlin Engine"<<endl;
}

MerlinEngine::~MerlinEngine()
{}
