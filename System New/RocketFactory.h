#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H
#include "Rocket.h"

class RocketFactory //The Creator participant of the Factory Method Design Pattern.
{
        
        public:
                /**
                @brief Outputs a message stating that the rocket is being constructed and returns the buildRocket function.
                @param none
                @return The buildRocket function.
                **/
                Rocket* build();
        protected:
                **
                @brief Outputs a message that shos the rocket is being build.
                @param none
                @return Rocket*, a pointer to a Rocket Object.
                **/
                virtual Rocket* buildRocket() = 0; //The factory method.

        };

#endif
