#ifndef MISSIONSTRATEGY_H
#define MISSIONSTRATEGY_H
#include <iostream>
using namespace std;

class MissionStrategy
{
private:
    string missionStratName;
public:
    MissionStrategy(string name);
    ~MissionStrategy();
    virtual void buildMission();

};

class RocketStrategy : public MissionStrategy
{
public:
    virtual void buildMission();
    
};

class EngineStrategy : public MissionStrategy
{
public:
    
    virtual void buildMission();
};

class DragonStrategy : public MissionStrategy
{
public:
    
    virtual void buildMission();
};
#endif // MISSIONSTRATEGY_H
