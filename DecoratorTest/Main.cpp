#include "Engine.h"
#include "EngineDecorator.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
//    cout<<"OPTION 1"<<endl;  //This creates several engine objects when you want to create a specific type of engine.
//    cout<<"\n"<<endl;
//    Engine* eng;
//    eng = new VacuumMerlinEngine();
//    cout<<"The type of engine is: "<<eng->getType()<<endl;
//
//    Engine* why = new MerlinEngine();
//    cout<<"The type of engine is: "<<why->getType()<<endl;
//
//    cout<<"\n"<<endl;
//    cout<<"-------------------------------------------------------"<<endl;
//

    cout<<"\n"<<endl;
    cout<<"OPTION 2"<<endl; //HOW IT SHOULD WORK
    cout<<"\n"<<endl;

    Engine* deco = new Core();
    EngineDecorator* engdeco = new MerlinEngine(deco);

    //deco->setType("MerlinEngine");
    cout<<"The type of engine created was: "<<engdeco->getType()<<endl;
    engdeco->addEngine(new VacuumMerlinEngine(deco));
    //deco->setType("VacuumMerlinEngine");
    cout<<"The type of engine created was: "<<engdeco->getType()<<endl;
    engdeco->addEngine(new MerlinEngine(deco));
    //deco->setType("MerlinEngine");
    cout<<"The type of engine created was: "<<engdeco->getType()<<endl;


    cout<<"\n"<<endl;
    cout<<"-------------------------------------------------------"<<endl;

//
//    cout<<"\n"<<endl;
//    cout<<"OPTION 3"<<endl;
//
//    Engine* eng1;
//
//    eng1 = new MerlinEngine();
//    cout<<"Type: "<<eng1->getType()<<endl;
//    eng1->addEngine(new VacuumMerlinEngine());
//    eng1->setType("VacuumMerlinEngine");
//    cout<<"Type: "<<eng1->getType()<<endl;
//    eng1->addEngine(new MerlinEngine);
//    eng1->setType("MerlinEngine");
//    cout<<"Type: "<<eng1->getType()<<endl;
//
//    delete eng;
//    delete why;
        //delete deco;
        //engdeco = nullptr;
//    delete eng1;






    return 0;

}


