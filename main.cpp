#include <iostream>

#include "Command.h"
#include "Button.h"
#include "TurnOn.h"
#include "TurnOff.h"
#include "Rocket.h"
#include "Engine.h"

using namespace std;

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
    testCommand_Rocket();
    testCommand_Engine();
    return 0;
}
