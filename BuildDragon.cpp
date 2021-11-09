#include <iostream>
#include <map>
#include <cstring>

using namespace std;

class CrewDragon {
	public:	
		CrewDragon(string name = "CrewDragonEndeavour"){
			part["name"] = name;
		};
	
		CrewDragon(const CrewDragon& b) {
			part = b.part;
		}
		
		void setSeats(string seats){
			part["seats"] = value;
		};

		void print() {
			cout<<"  NAME : "<< part["name"] << endl;
			cout<<"  SEATS : "<< part["seats"] << endl;
			cout<<"---------------------------"<<endl;
		};

	private:
		map<string, string> part;
};


class CargonDragon {
	public:	
		CargoDragon(string name = "Dragon1"){
			part["name"] = name;
		};
	
		CargoDragon(const CargoDragon& b) {
			part = b.part;
		}
		
		void setPayloadMass(string mass){
			part["mass"] = mass;
		};

		void print() {
			cout<<"  NAME : "<< part["name"] << endl;
			cout<<"  MASS : "<< part["mass"] << endl;
			cout<<"---------------------------"<<endl;
		};

	private:
		map<string, string> part;
};

class Dragon {
	public:
		virtual void setName(string s ="") {};
		virtual void setPayloadMass(string s = "") = 0;
		virtual void selectNumberofSeats(int x = 0) {} = 0;
};


class CrewDragonMaker : public Dragon {
	public:
		CrewDragonMaker() {}
    
		void selectNumberofSeats(int size) 
		{
			crewdragonendeavour.setSeats(size);
		}
		
	private:
		CrewDragon crewdragonendeavour;  // On the stack
};

class CargonDragonMaker :public Dragon {
	public:
		CargonDragonMaker() {
            
        };

		void setPayloadMass(int mass) 
		{
			if (mass <= 6000)
			{
				Dragon1.setMass(mass);
			}
			else
			{
				cout<<"OVERLOADED, PLEASE REDUCE THE CARGO PAYLOAD MASS";
			}
		} ; 
   
	private:
		CargoDragon Dragon1; // On the heap
};



int main(){

    Dragon* CrewDragon1 = new CrewDragonMaker();
    Dragon* CargoDragon1 = new CargonDragonMaker();
    
	
    delete CrewDragon1;
    delete CargoDragon1;

  return 0;
}
