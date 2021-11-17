#include "Engine.h"
#include "EngineDecorator.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"OPTION 1"<<endl;  //This creates several engine objects when you want to create a specific type of engine.
    cout<<"\n"<<endl;
    Engine* eng;
    eng = new VacuumMerlinEngine();
    cout<<"The type of engine is: "<<eng->getType()<<endl;

    Engine* why = new MerlinEngine();
    cout<<"The type of engine is: "<<why->getType()<<endl;

    cout<<"\n"<<endl;
    cout<<"-------------------------------------------------------"<<endl;


    cout<<"\n"<<endl;
    cout<<"OPTION 2"<<endl; //Uses the decorator, but the type needs to be explicitly set.
    cout<<"\n"<<endl;

    Engine* deco = new EngineDecorator();
    deco->addEngine(new MerlinEngine());
    //deco->setType("MerlinEngine");
    cout<<"The type of engine created was: "<<deco->getType()<<endl;
    deco->addEngine(new VacuumMerlinEngine());
    //deco->setType("VacuumMerlinEngine");
    cout<<"The type of engine created was: "<<deco->getType()<<endl;
    deco->addEngine(new MerlinEngine());
    //deco->setType("MerlinEngine");
    cout<<"The type of engine created was: "<<deco->getType()<<endl;


    cout<<"\n"<<endl;
    cout<<"-------------------------------------------------------"<<endl;


    cout<<"\n"<<endl;
    cout<<"OPTION 3"<<endl;

    Engine* eng1;

    eng1 = new MerlinEngine();
    cout<<"Type: "<<eng1->getType()<<endl;
    eng1->addEngine(new VacuumMerlinEngine());
    eng1->setType("VacuumMerlinEngine");
    cout<<"Type: "<<eng1->getType()<<endl;
    eng1->addEngine(new MerlinEngine);
    eng1->setType("MerlinEngine");
    cout<<"Type: "<<eng1->getType()<<endl;

    delete eng;
    delete why;
    delete deco;
    delete eng1;






    return 0;

}


