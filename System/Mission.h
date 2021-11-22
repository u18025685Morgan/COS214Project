#ifndef MISSION_H
#define MISSION_H
#include <iostream>
using namespace std;
#include "Engine.h"             //! Engine Hierarchy uses the Mission class
#include "MissionStrategy.h"    //! added the Strategy class component of the Strategy design pattern

class Mission
        {
        private:
            MissionStrategy * strategy; //! pointer to strategy object, varies depending on the concrete strategy chosen

        public:
            Mission(MissionStrategy * strategy);    //! copy constructor
            ~Mission();                             //! destructor
            void startMission();                    //! main function that commences the mission with the selected strategies

        };

#endif // MISSION_H