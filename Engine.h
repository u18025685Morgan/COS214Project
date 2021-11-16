#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
    private:
        string engineType; //String variable to disntinguish between the types of engines (VacuumMerlin/Merlin)
    public:
        Engine();
        Engine(string etype);
        virtual ~Engine();
        virtual void operation() = 0;
        string getType();
        void setType(string et);
};

#endif
