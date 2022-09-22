using namespace std;
#include <iostream>
#include <string>

//// Q1:
class Vechile {
private:
	string model, RegNum;
	int speed;
	double fCapacity, fConsum;

public:
	Vechile(string _model, string _RegNum, int _speed, double _fCapacity, double _fConsum)
	{
		model = _model;
		RegNum = _RegNum;
		speed = _speed;
		fCapacity = _fCapacity;
		fConsum = _fConsum;
	}

	double fuelNeeded(double dist) {
		return fConsum / dist;
	}

	double distanceCovered(double time) {
		return speed / time;
	}

	void display() {
		cout << "Vechile model: " << model << endl
			<< "Vechile Registration number: " << RegNum << endl
			<< "Vechile speed: " << speed << endl
			<< "Vechile fuel capacity: " << fCapacity << endl
			<< "Vechile Fuel consumption: " << fConsum << endl;
	}

};


class Truck : public Vechile {
private:
	double wLimit;

public:
	Truck(double _wLimit, string _model, string _RegNum, int _speed, double _fCapacity, double _fConsum)
		: Vechile(_model, _RegNum, _speed, _fCapacity, _fConsum)
	{
		wLimit = _wLimit;
	}

	void displayTruck() {
		display();
		cout << " Cargo weight limit: " << wLimit << endl;
	}
};

class Bus : public Vechile {
private:
	int numOfPass;

public:
	Bus(int _numOfPass, string _model, string _RegNum, int _speed, double _fCapacity, double _fConsum)
		:Vechile(_model, _RegNum, _speed, _fCapacity, _fConsum)
	{
		numOfPass = _numOfPass;
	}

	void setNumOfPass(int p) {
		numOfPass = p;
	}

	int getNumOfPass() {
		return numOfPass;
	}
};


//// Q2:
//Composition: Includes class in another class
//Inheritance : a class(child) inherit its attributes, functions from another class(parent)
class Room {
	string roomId;
	double width;
	double height;

};
class Home {
	string position;
	double cost;
	Room room; // Composition
};



int main()
{
	// Q1
	Truck t1(500, "Corolla", "CR500123", 120, 40, 5);
	t1.display();
	cout << "distance covered: " << t1.distanceCovered(3) << endl
		<< "fuel needed" << t1.fuelNeeded(40) << endl << endl;


	Bus b1(20, "Mits", "Mits20567", 160, 30, 3);
	b1.display();
	cout << "distance covered: " << t1.distanceCovered(6) << endl
		<< "fuel needed: " << t1.fuelNeeded(80);


}

