#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
    public:
        Engine();
        virtual ~Engine();
        virtual void operation() = 0;
};

#endif
