#include <iostream>

using namespace std;

class Abstruckt {
public:
	
	virtual void transport() = 0;
};
class Vehicle :public Abstruckt {
public:
	void transport() {
		cout << " For start" << endl;
	}
	void Car() {
		cout << " Cars are fast and the mos useful vehicle \n in the world." << endl;
	}
	void bicycle() {
		cout << " Bicycles are uses for sport and for \n relaxing. " << endl;
	}
	void Plane() {
		cout << " Planes uses for transport heavy things \n and many people to other countries" << endl;
	}
};
int main() {
	Vehicle exp10;
	exp10.transport();
	exp10.Car();
	exp10.bicycle();
	exp10.Plane();
}