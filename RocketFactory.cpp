#include "RocketFactory.h"
#include <iostream>
#include <string>
using namespace std;

Rocket* RocketFactory::build()
{
    cout<<"Rocket under construction - ";
    return buildRocket();

}
