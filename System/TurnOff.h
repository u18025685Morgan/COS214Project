/**
 * Concrete Command participant of Command design Pattern
 * **/

#ifndef TURNOFF_H
#define TURNOFF_H

#include "Command.h"

class TurnOff : public Command{
public:
    TurnOff(Rocket* r);
    TurnOff(Engine* e);
    void execute();
    void undo();
};


#endif //TURNOFF_H