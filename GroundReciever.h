#ifndef GROUND-RECIEVER_H
#define GROUND-RECIEVER_H

#include "Satellite.h"

class GroundReciever
{
    public: 
    GroundReciever(string n);

    Satellite *clone();
    void launch();
    

    private:
     string name;
     Satellite *GRPrototype;



};
#endif