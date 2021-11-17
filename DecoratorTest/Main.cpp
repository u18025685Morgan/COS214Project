#include "Engine.h"
#include "EngineDecorator.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //cout<<"Testing code and compilation."<<endl;
    Engine* eng;
    eng = new EngineDecorator();
    eng->buildEngine(new VacuumMerlinEngine());

    eng->buildEngine(new MerlinEngine());



    delete eng;





    return 0;

}


