#include "MissionStrategy.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"

#include "CrewDragonMaker.h"

MissionStrategy::MissionStrategy(string name)               //! Constructor that takes the name of the mission strategy as a parameter
{
    missionStratName = name;                                //! Also outputs a string that has the name
    cout << "Mission strategy: " << missionStratName << " chosen." << endl;
}

MissionStrategy::~MissionStrategy()
{
}

void MissionStrategy::setName(string n)
{
    missionStratName = n;                   //! setter of missionStratName
}

string MissionStrategy::getName()
{
    return missionStratName;                //! getter of missionStratName
}

void MissionStrategy::setRocketChoice(Rocket * r)
{
    rocketChoice = null;
    rocketChoice = r;
}

Rocket MissionStrategy::getRocketChoice()
{
    return rocketChoice;
}

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

    //! Asks client what they want and then depending on that a rocket is created using the Factory method

    if(rocket == 1)
    {
        RocketFactory * n;
        n = new Falcon9Factory();
        Falcon9 nine;
        n->build();                 //! outputs that a Falcon9 is being built
        nine.buildRocket();         //! actually builds the rocket
        setRocketChoice(nine);        //! sets the rocketChoice to be that of Falcon9
    }
    else if (rocket == 2)
    {
        RocketFactory * h;
        h = new FalconHeavyFactory();
        FalconHeavy heavy;
        h->build();                 //! outputs that a FalconHeavy is being built
        heavy.buildRocket();        //! actually builds the rocket
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


void DragonStrategy::buildMission()
{
    string crewName;
    cout << "Please insert the name of your crew" << endl;
    cin >> crewName;                                        //! asks the client the name of their crew and then creates a Dragon that has that name
    Dragon* Hogwarts = new CrewDragonMaker(crewName);       //! Creates a new Crew with the inputted name
    
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
    cout << "How many crew members are going on this mission?" << endl;
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
    
    r = getRocketChoice();
    
    r->launch();
    cout<<endl;
    Hogwarts->stageseparation();
    
}
