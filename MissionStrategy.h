#ifndef MISSIONSTRATEGY_H
#define MISSIONSTRATEGY_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class MissionStrategy
{
private:
    string missionStratName;
    Rocket * rocketChoice;
    Engine * engineChoice;
    Dragon * dragonChoice;
public:
    MissionStrategy(string name);
    ~MissionStrategy();
    virtual void buildMission();
    void setName(string n);
    
    
};

class RocketStrategy : public MissionStrategy
{
public:
    RocketStrategy();

    virtual void buildMission();
    
};

class EngineStrategy : public MissionStrategy
{
public:
    EngineStrategy();
    
    virtual void buildMission();
};

class DragonStrategy : public MissionStrategy
{
public:
    DragonStrategy();
    virtual void buildMission();
};
#endif // MISSIONSTRATEGY_H
