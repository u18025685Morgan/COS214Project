#ifndef CrewDragonMaker_H
#define CrewDragonMaker_H 
#include <iostream>
#include <vector>
#include "Dragon.h"
using namespace std;

struct CrewDetails
        {
    string name;
    string sex;
    int age;
    int weight;
        };

class CrewDragonMaker : public Dragon
        {
        public:

            CrewDragonMaker();
            ~CrewDragonMaker();
            CrewDragonMaker(string);
            void setName(string);
            string getName();
            void selectNumberSeats(int x);
            void insertCrewMember(string,string,int,int);
            void removeCrewMember(int);
            void getCrewInfo();
            int getNumSeatsOccupied();
            int getNumberSeats();
            bool setPayloadMass(int);
            int getPayloadMass();
            void stageseparation();
            void returntoearth();

        private:
            string name;
            int numseats;
            int payloadmass;
            std::vector<CrewDetails> Crew;
        };

#endif 