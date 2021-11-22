#ifndef Dragon_H
#define Dragon_H 
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;
class Dragon
        {
        private:
            int payloadmass;
            int seats;
            string name;
            int CreworCargo;
        public:
            Dragon();
            virtual ~Dragon();
            virtual void setName(string a);
            virtual string getName();
            virtual void setPayloadMass(int x);
            virtual int getPayloadMass();
            virtual void selectNumberSeats(int x);
            virtual int getNumberSeats();

            void releaseparachute();

            virtual void removeCargo(int x);

            virtual void insertCrewMember(string,string,int,int);
            virtual void removeCrewMember(int);
            virtual void getCrewInfo();
            virtual int getNumSeatsOccupied();

            virtual void stageseparation();

            virtual void returntoearth();

            void CreworCargo_(int x);


        };
#endif 