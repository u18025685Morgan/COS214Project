#include <iostream>
//Mediator needs
#include "GroundReceiver.h"
#include "Satellite.h"
#include "Starlink.h"
#include <string>
#include <vector>

//Command needs
#include "Command.h"
#include "Button.h"
#include "TurnOn.h"
#include "TurnOff.h"
#include "Rocket.h"
#include "Engine.h"

using namespace std;

void testingMediator()
{
    // 1.   creation
    GroundReceiver* GR = new GroundReceiver();
    Satellite* satList[3];
    satList[0] = new Starlink(GR,"ST01");
    satList[1] = new Starlink(GR,"ST02");
    satList[2] = new Starlink(GR,"ST03");

    // 2. send message
    satList[0]->setMessage("There is a problem in section 3\n");

    //3. what is message
    cout << satList[1]->getMessage();

    //4. Deletion
    for(int i=0  ;  i<3  ;  i++)
        delete satList[i];
    delete GR;

}

void testCommand_Rocket()
{
    cout << "How to use command design pattern with Rocket\n";
    //creation
    Rocket* rocket = new Rocket();            //receiver
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

void testCommand_Engine()
{
    cout << "How to use command design pattern with Engine\n";
    //creation
    Engine* engine = new Engine();            //receiver
    Command* on  = new TurnOn(engine);      //command
    Command* off  = new TurnOff(engine);    //command
    Button* onButton = new Button(on);      //invoker
    Button* offButton = new Button(off);    //invoker

    //turn Engine on
    onButton->press();

    //turn Engine off
    offButton->press();

    //deletion
    delete offButton;
    delete onButton;
    delete off;
    delete on;
    delete engine;
}



int main()
{
    testingMediator();
    testCommand_Engine();
    testCommand_Rocket();

    return 0;
}
