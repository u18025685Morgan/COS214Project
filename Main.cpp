#include "Rocket.h"
#include "RocketFactory.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include <iostream>
#include <string>
using namespace std;

int main()
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









    return 0;

}

