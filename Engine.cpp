/** DESIGN PATTERNS
 * Command dp
 *
 * **/

#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
{}

Engine::Engine(string etype)
{
    engineType = etype;
}

Engine::Engine(int n)
{
    numEngines = n;
}

Engine::Engine(string etype, int n)
{
    engineType = etype;
    numEngines = n;
}

Engine::~Engine()
{}

string Engine::getType()
{
    return engineType;
}

void Engine::setType(string et)
{
    engineType = et;
}

int Engine::getNumEngines()
{
    return numEngines;
}

void Engine::setNumEngines(int nr)
{
    numEngines = nr;
}

void Engine ::On()                  //command dp
{
    cout << "Turning Engine on\n";
}

void Engine ::Off()                 //command dp
{
    cout << "Turning Engine off\n";
}