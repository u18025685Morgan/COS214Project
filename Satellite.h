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
    void get();
    void set(SpaceCommand* sc);

};


#endif //COS214PROJECT_MAIN_SATELLITE_H
