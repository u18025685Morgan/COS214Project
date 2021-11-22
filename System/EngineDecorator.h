#ifndef ENGINEDECORATOR_H
#define ENGINEDECORATOR_H
#include "Engine.h"

class EngineDecorator : public Engine
        {
        private:
            Engine* engine; //Engine attribute.
        public:
            EngineDecorator(Engine* e);                 //Constructor that takes an Engine object as parameter and sets it to the Engine attribute.
            virtual void addEngine(Engine* e);          //Adds an engine (decorates an engine to become a specific engine)
            Engine* getEngine();                        //Returns the engine attribute
            void setEngine(Engine* e);                  //Sets the Engine attribute.
        protected:
            ~EngineDecorator();                         //Default destructor.

        };

#endif
