#include "MissionStrategy.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"

#include "CrewDragonMaker.h"
#include "CargoDragonMaker.h"

MissionStrategy::MissionStrategy(string name)               //! @brief Constructor that takes the name of the mission strategy as a parameter
{                                                           //! @param name must be a valid string
    missionStratName = name;                                //! Also outputs a string that has the name
    cout << "Mission strategy: " << missionStratName << " is being chosen." << endl;
}

MissionStrategy::~MissionStrategy()
{
}

void MissionStrategy::setName(string n)
{
    missionStratName = n;                   //! @brief setter of missionStratName
}                                           //! @param n must be a valid string

string MissionStrategy::getName()
{
    return missionStratName;                //! @brief getter of missionStratName
}                                           //! @return string The mission strategy name

void MissionStrategy::setRocketChoice(Rocket * r)
{
    rocketChoice = nullptr;                 //! @brief setter for rocketChoice
    rocketChoice = r;                       //! @param r must be an instantiated Rocket object
}

Rocket* MissionStrategy::getRocketChoice()
{
    return rocketChoice;                    //! @brief getter of rocketChoice
}                                           //! @return Rocket * the rokcet choice

void MissionStrategy ::buildMission() {}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// RocketStrategy functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

RocketStrategy::RocketStrategy() : MissionStrategy("rocket")
{
    //! uses base class constructor to show that a rocket is being chosen
}


void RocketStrategy::buildMission()
{
    int rocket;
    cout << "What kind of Rocket would you like to use for this mission strategy? 1 - Falcon9, 2 - FalconHeavy" << endl;
    cin >> rocket;

    //! @brief Asks client what they want and then depending on that a rocket is created using the Factory method

    if(rocket == 1)
    {
        RocketFactory * n;
        n = new Falcon9Factory();
        Falcon9* nine=new Falcon9;
        n->build();                 //! outputs that a Falcon9 is being built
        nine->buildRocket();         //! actually builds the rocket
        setRocketChoice(nine);        //! sets the rocketChoice to be that of Falcon9
    }
    else if (rocket == 2)
    {
        RocketFactory * h;
        h = new FalconHeavyFactory();
        FalconHeavy* heavy = new FalconHeavy;
        h->build();                 //! outputs that a FalconHeavy is being built
        heavy->buildRocket();        //! actually builds the rocket
        setRocketChoice(heavy);       //! sets the rocketChoice to be that of FalconHeavy
    }
    else
    {
        cout << "You did not chose a valid answer, program will exit" << endl;          //! Shows the client that the input was invalid
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// EngineStrategy functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EngineStrategy::EngineStrategy() : MissionStrategy("engine")
{
    //! uses base class constructor to show that a rocket is being chosen
}


void EngineStrategy::buildMission()
{

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// DragonStrategy Functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

DragonStrategy::DragonStrategy() : MissionStrategy("dragon")
{
    //! uses base class constructor to show that a rocket is being chosen
}

//! @brief asks client what kind of cargo is going to be used in the mission

void DragonStrategy::buildMission()
{
    cout<<"CHOOSE 1.CREW DRAGON  2.CARGO DRAGON: ";
    int bcda;
    cin>>bcda;
    if (bcda == 1)
    {
    
        string crewName;
        cout << "Please insert the name of your crew: ";
        cin >> crewName;                                        //! asks the client the name of their crew and then creates a Dragon that has that name
        Dragon* Hogwarts = new CrewDragonMaker(crewName);       //! Creates a new Crew with the inputted name
        cout<<"SELECT MISSION TYPE [1->TO ISS  2->BACK TO EARTH] : ";
        //MISSION 1 : crew
        //MISSION 2: cargo
        int abcd;
        cin>>abcd;
      
        if (abcd == 1)
        {
              //build rocket
            MissionStrategy* missionRocket;
            missionRocket= new RocketStrategy();
            missionRocket->buildMission();

                int seatNum;
            cout << "How many seats do you want in your cockpit?" << endl;
            cin >> seatNum;

            while(seatNum > 7 || seatNum <= 0)      //!Check to see if a valid number of seats was inputted
                {
                cout << "Invalid seat amount! You can have a maximum of 7 seats and a minimum of 1. How many seats do you want?" << endl;
                cin >> seatNum;
                }
            Hogwarts->selectNumberSeats(seatNum);

            int crewNum;
            cout << "How many crew members are going on this mission: ";
            cin >> crewNum;
            int count = 1;

            while(count <= crewNum)   //! loop through amount of crew members and insert their details
                {
                string crewName;
                string crewGend;
                int crewAge;
                double crewWeight;
                cout << "Please insert a name for crew member number " << count << ": " << endl;
                cin >> crewName;

                cout << "Please insert a gender for crew member number " << count << ": " << endl;
                cin >> crewGend;

                cout << "Please insert an age for crew member number " << count << ": " << endl;
                cin >> crewAge;

                cout << "Please insert a weight for crew member number " << count << ": " << endl;
                cin >> crewWeight;

                Hogwarts->insertCrewMember(crewName,crewGend,crewAge,crewWeight);

                count++;
                }


            cout<<"Crew Dragon :"<<Hogwarts->getName()<<endl<<endl;
            Hogwarts->getCrewInfo();
            int mass;

            cout<<"Please Enter the Payload Mass for Crew Dragon: "<<Hogwarts->getName()<<" : ";
            cin>>mass;

            while(Hogwarts->setPayloadMass(mass) == false)      //! Check to see if the mass is too big for the Dragon
                {
                cout<<"WARNING : MAX PAYLOAD MASS REACHED, REDUCE PAYLOAD MASS!!!"<<endl;
                cout<<"Please Enter the Payload Mass for Crew Dragon: "<<Hogwarts->getName()<<" : ";
                cin>>mass;
                }

            Rocket* r = missionRocket->getRocketChoice();

            r->launch();
            cout<<endl;
            Hogwarts->stageseparation();
        }
        else if (abcd == 2)
        {
            Hogwarts->returntoearth();
        }

        // delete missionRocket;
    }
    else if (bcda == 2)
    {
        string crewName;
        cout << "Please insert the mission name: ";
        cin >> crewName;                                        //! asks the client the name of their crew and then creates a Dragon that has that name
        Dragon* Hogwarts = new CargoDragonMaker(crewName);
        cout<<"SELECT MISSION TYPE [1->TO ISS  2->BACK TO EARTH] : ";
        int abcd;
        cin>>abcd;

        if (abcd == 1)
        {
              //build rocket
            MissionStrategy* missionRocket;
            missionRocket= new RocketStrategy();
            missionRocket->buildMission();

           
            int mass;

            cout<<"Please Enter the Payload Mass for Cargo Dragon: "<<Hogwarts->getName()<<" : ";
            cin>>mass;

            while(Hogwarts->setPayloadMass(mass) == false)      //! Check to see if the mass is too big for the Dragon
                {
                cout<<"WARNING : MAX PAYLOAD MASS REACHED, REDUCE PAYLOAD MASS!!!"<<endl;
                cout<<"Please Enter the Payload Mass for Cargo Dragon: "<<Hogwarts->getName()<<" : ";
                cin>>mass;
                }

            Rocket* r = missionRocket->getRocketChoice();

            r->launch();
            cout<<endl;
            Hogwarts->stageseparation();
        }
        else if (abcd == 2)
        {
            Hogwarts->returntoearth();
        }
    }

}
