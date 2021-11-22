/**
 * Concrete Command participant of Command design pattern
 * **/

#ifndef TURNON_H
#define TURNON_H

#include "Command.h"

class TurnOn : public Command{
public:
    TurnOn(Rocket* r);
    TurnOn(Engine* e);
    void execute();
    void undo();
};


#endif //TURNON_H