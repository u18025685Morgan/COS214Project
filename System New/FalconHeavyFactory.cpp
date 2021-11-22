#include "FalconHeavyFactory.h"
#include "FalconHeavy.h"
#include <string>
#include <iostream>
using namespace std;

Rocket* FalconHeavyFactory::buildRocket()
{
    cout<<"Falcon Heavy."<<endl;
    return new FalconHeavy();
}
