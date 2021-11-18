#include "FalconHeavy.h"
#include <iostream>
#include <string>
using namespace std;

FalconHeavy::FalconHeavy(string nameR):Rocket(nameR)
{

}
void FalconHeavy::build()
{
    cout<<"A Falcon Heavy rocket is being build."<<endl;

}

void FalconHeavy::launch()
{
    cout<<"A Falcon Heavy rocket launches."<<endl;
}
