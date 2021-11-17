#include "Engine.h"
#include "EngineDecorator.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //cout<<"Testing code and compilation."<<endl;
    cout<<"OPTION 1"<<endl;  //This creates several engine objects when you want to create a specific type of engine.
    cout<<"\n"<<endl;
    Engine* eng;
    eng = new VacuumMerlinEngine();
    cout<<"The type of engine is: "<<eng->getType()<<endl;
    eng->buildEngine(new MerlinEngine());
    cout<<"The type of engine is: "<<eng->getType()<<endl;
    Engine* why = new MerlinEngine();
    cout<<"The type of engine is: "<<why->getType()<<endl;

    cout<<"\n"<<endl;
    cout<<"-------------------------------------------------------"<<endl;


    cout<<"\n"<<endl;
    cout<<"OPTION 2"<<endl; //Uses the decorator, but the type needs to be explicitly set.
    cout<<"\n"<<endl;

    Engine* deco = new EngineDecorator();
    deco->buildEngine(new MerlinEngine());
    //deco->setType("MerlinEngine");
    cout<<"The type of engine created was: "<<deco->getType()<<endl;
    deco->buildEngine(new VacuumMerlinEngine());
    //deco->setType("VacuumMerlinEngine");
    cout<<"The type of engine created was: "<<deco->getType()<<endl;
    deco->buildEngine(new MerlinEngine());
    //deco->setType("MerlinEngine");
    cout<<"The type of engine created was: "<<deco->getType()<<endl;

    delete eng;
    delete why;
    delete deco;





    return 0;

}


