#include "Falcon9.h"
#include <iostream>
#include <string>
using namespace std;

Falcon9::Falcon9(string nameR):Rocket(nameR)
{

}

void Falcon9::build()
{
    cout<<"A Falcon 9 rocket is being build."<<endl;
}

void Falcon9::launch()
{
    cout<<"A Falcon 9 rocket launches."<<endl;
}
