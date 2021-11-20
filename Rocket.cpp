/** DESIGN PATTERNS:
 * Command dp
 *
 * **/

#include "Rocket.h"
#include "RocketState.h"
#include "RocketInitialState.h"
#include "Engine.h"             //Added by Yane at 16:21
#include "EngineDecorator.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"
#include <iostream>
using namespace std;

Rocket::Rocket()
{}

Rocket::Rocket(string rocketname)
{
    name = rocketname;
}

string Rocket::getName()
{
    return name;
}

void Rocket::setName(string n)
{
    name = n;
}

void Rocket::setNumEngines(int num){
    numEngines = num;
}

void Rocket::launchRocket()
{
    launch();
}

void Rocket::print(){
    cout<<"This is a "<< getName() << " type Rocket"<<endl;
}

//commmand design pattern
void Rocket ::On() //command dp
{
    cout << "Turning Rocket on\n";
}

void Rocket ::Off() //command dp
{
    cout << "Turning Rocket off\n";
}

bool Rocket ::staticFireTest(RocketState* obj){
    if (obj->getRocketState() == "ready"){
        return true;
    }
    else{
        return false;
    }
}

void Rocket::buildRocket()  //Added by Yane at 16:22
{
    build();
    Engine* core = new Core();
    if (name == "Falcon 9")
    {
        e = new Engine*[10];

        for (int i=0; i<9; i++)
        {
            e[i] = new MerlinEngine(core);
        }
        e[9] = new VacuumMerlinEngine(core);
        cout<<"9 Merlin Engines and 1 Vacuum Merlin Engine has been added"<<endl;

    }
    else
    {
        e = new Engine*[28];

        for (int i=0; i<27; i++)
        {
            e[i] = new MerlinEngine(core);
        }
        e[27] = new VacuumMerlinEngine(core);
        cout<<"27 Merlin Engines and 1 Vacuum Merlin Engine has been added"<<endl;

    }
}