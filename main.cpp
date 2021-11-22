#include "Rocket.h"
#include "RocketFactory.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"
#include "Falcon9.h"
#include "FalconHeavy.h"

#include "Command.h"
#include "Button.h"
#include "TurnOn.h"
#include "TurnOff.h"

#include "Mission.h"
#include "MissionStrategy.h"

#include "CrewDragonMaker.h"

#include <iostream>
#include <string>
using namespace std;

void Command_designPattern()
{
    cout << "How to use command design pattern\n";
    //creation
    Rocket* rocket = new FalconHeavy();            //receiver
    Command* on  = new TurnOn(rocket);      //command
    Command* off  = new TurnOff(rocket);    //command
    Button* onButton = new Button(on);      //invoker
    Button* offButton = new Button(off);    //invoker

    //turn Rocket on
    onButton->press();

    //turn Rocket off
    offButton->press();

    //deletion
    delete offButton;
    delete onButton;
    delete off;
    delete on;
    delete rocket;
}

void test1()
{
    //cout<<"Testing code and compilation."<<endl;
    RocketFactory* rockets[2];
    rockets[0] = new FalconHeavyFactory();
    rockets[1] = new Falcon9Factory();

    Rocket* SpaceX[4];

    for (int i=0; i<4; i++)
    {
        SpaceX[i] = rockets[i%2]->build();
        SpaceX[i]->launchRocket();
    }

    for (int i=0; i<4; i++)
    {
        delete SpaceX[i];
    }

    for (int i=0; i<2; i++)
    {
        delete rockets[i];
    }
}

void testStrategy()
{
    MissionStrategy* mission[2];            //Context

    // Three contexts following different strategies
    mission[0]= new RocketStrategy();
    mission[1]= new DragonStrategy();

    for(int i=0  ;  i<2  ;  i++)
        mission[i]->buildMission();

    for(int i=0  ;  i<2  ;  i++)
        delete mission[i];
}

void testDragonStrategy()
{
    MissionStrategy* mission;            //Context

    // Three contexts following different strategies
    mission= new DragonStrategy();

        mission->buildMission();

        delete mission;
}

void testDragon()
{
    Dragon* Hogwarts = new CrewDragonMaker("Hogwarts");
    Hogwarts->selectNumberSeats(7);
    Hogwarts->insertCrewMember("Tawanda","Male",19,78);
    Hogwarts->insertCrewMember("Risenga","Male",21,78);
    Hogwarts->insertCrewMember("Nasiphi","Female",21,65);
    cout<<"Crew Dragon :"<<Hogwarts->getName()<<endl<<endl;
    Hogwarts->getCrewInfo();
    Rocket* falc9 = new Falcon9();
    SpaceCommand* r = new Falcon9();
    int mass;

    cout<<"Enter Payload Mass for Crew Dragon "<<Hogwarts->getName()<<" : ";
    cin>>mass;
    // Hogwarts->
    if (Hogwarts->setPayloadMass(mass) == true)
    {
        falc9->launch();
        cout<<endl;
        Hogwarts->stageseparation();
    }
    else
    {
        cout<<"WARNING : MAX PAYLOAD MASS REACHED, REDUCE PAYLOAD MASS!!!"<<endl<<endl;
    }
}

void test()
{
    Rocket* falcH = new FalconHeavy();
    Rocket* falc9 = new Falcon9();
    //spacecommand object calling print
    SpaceCommand* r = new Falcon9();


    falcH->launch();
    //print this is a Falcon9 rocket
    r->print();
    falc9->launch();
}

int main()
{
    //test1();
    testDragonStrategy();
    //testDragon();
    //testStrat();
    return 0;

}

