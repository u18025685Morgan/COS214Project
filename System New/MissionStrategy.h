#ifndef MISSIONSTRATEGY_H
#define MISSIONSTRATEGY_H
#include <iostream>
#include "RocketFactory.h"
#include "Rocket.h"
#include "Engine.h"
#include "Dragon.h"         //! added all of the classes used to build the mission
using namespace std;

class MissionStrategy           //! Strategy class of the Strategy design pattern
        {
        private:
            string missionStratName;    //! given every mission strategy a name to keep track
            Rocket* rocketChoice;      //! shows the type of rocket used in the strategy
            string rocketType;

        public:
            MissionStrategy(string name);   //! @brief Constructor that takes the name of the mission as a parameter
                                            //! @param name must be a valid string
            ~MissionStrategy();             //! @brief Destructor
            virtual void buildMission();    //! @brief virtual function that builds specific parts of the mission depending on what the client wants
            void setName(string n);         //! @brief setter function to set the name of the mission strategy
                                            //! @param name must be a valid string
            string getName();               //! @brief getter function to get the name of the mission strategy
                                            //! @return string The name of the mission strategy
            void setRocketChoice(Rocket * r); //! @brief setter function to set the rocketChoice
                                              //! @param r must be an instantiated Rocket
            Rocket* getRocketChoice();       //! @brief getter function to get the rocketChoice
                                               //! @return Rocket * The rocket chosen 

        };

class RocketStrategy : public MissionStrategy   //! ConcreteStrategy class in the Strategy design pattern
        {
        public:
            RocketStrategy();               //! @brief Constructor that uses the base class's constructor

            virtual void buildMission();    //! @brief Implementation of the buildMission function that asks the client which type of rocket to use

        };

class EngineStrategy : public MissionStrategy   //! ConcreteStrategy class in the Strategy design pattern
        {
        public:
            EngineStrategy();               //! @brief Constructor that uses the base class's constructor

            virtual void buildMission();     //! @brief Implementation of the buildMission function that asks the client which type of engine to use
        };

class DragonStrategy : public MissionStrategy    //! ConcreteStrategy class in the Strategy design pattern
        {
        public:
            DragonStrategy();               //! @brief Constructor that uses the base class's constructor
            virtual void buildMission();     //! @brief Implementation of the buildMission function that asks the client which type of dragon to use
        };
#endif // MISSIONSTRATEGY_H
