#include "Falcon9Factory.h"
#include "Falcon9.h"
#include <string>
#include <iostream>
using namespace std;

Rocket* Falcon9Factory::buildRocket()
{
    cout<<"Falcon 9."<<endl;
    return new Falcon9();
}