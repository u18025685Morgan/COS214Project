//
// Created by lisar on 2021/11/16.
//

#ifndef SATELLITE_H
#define SATELLITE_H

#include "SpaceCommand.h"

class Satellite {
private:
    SpaceCommand* SC;

public:
    void changed();
    SpaceCommand* get();
    //get is supposed to return a spaceCOmmand pointer
    void set(SpaceCommand* sc);
    void launch();
    void Communicate(Satellite *ab);

};


#endif //COS214PROJECT_MAIN_SATELLITE_H
