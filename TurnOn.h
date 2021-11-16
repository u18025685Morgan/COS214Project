//
// Created by lisar on 2021/11/16.
//

#ifndef COS214PROJECT_MAIN_TURNON_H
#define COS214PROJECT_MAIN_TURNON_H

#include "Command.h"

class TurnOn : public Command {
public:
    TurnOn(Rocket* r);
    void execute();
    void undo();
};


#endif //COS214PROJECT_MAIN_TURNON_H
