//
// Created by lisar on 2021/11/16.
//

#ifndef COS214PROJECT_MAIN_TURNOFF_H
#define COS214PROJECT_MAIN_TURNOFF_H

#include "Command.h"

class TurnOff : public Command{
public:
    TurnOff(Rocket* r);
    void execute();
    void undo();
};


#endif //COS214PROJECT_MAIN_TURNOFF_H
