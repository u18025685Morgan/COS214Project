#ifndef SPACECOMMAND_H
#define SPACECOMMAND_H
using namespace std;

class SpaceCommand{
public:
    //pure virtual print out
    virtual void print() = 0;
    //
    virtual ~SpaceCommand();
};
#endif
