#ifndef STARLINK_H
#define STARLINK_H

#include "Satellite.h"

class StarLink
{   
    public: 

        StarLink(string n);

        Satellite* clone();
        void launch();

    private:
    string name;
    Satellite *SLPrototype;


};
#endif