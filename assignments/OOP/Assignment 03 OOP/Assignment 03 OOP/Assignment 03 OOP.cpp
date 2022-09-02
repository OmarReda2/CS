using namespace std;
#include <iostream>
#include <string>

// ------------- Template -------------//
// 01:
template<class T>
T maxNum(T num1, T num2) {
	return num1 > num2 ? num1 : num2;
}



// 02:
template<class T>
void swapNum(T& x, T& y) {
	T z;
	z = x;
	x = y;
	y = z;
}



// 03:
template<class T>
class Calc {
private:
	T num1;
	T num2;

public:
	Calc(T num1, T num2)
	{
		Calc::num1 = num1;
		Calc::num2 = num2;
	}

	T addNum() {
		return num1 + num2;
	}

	T subNum() {
		return num1 - num2;
	}

	T multNum() {
		return num1 * num2;
	}

	T divNum() {
		return num1 / num2;
	}
};



// -------- Abstraction - Polymorphism --------- //
// 04:
class Vechile {
protected:
	string model, Registration;
	int speed;
	double capacity, consumption;

public:
	Vechile(string model, string Registration, int speed, double capacity, double consumption)
	{
		Vechile::model = model;
		Vechile::Registration = Registration;
		Vechile::speed = speed;
		Vechile::capacity = capacity;
		Vechile::consumption = consumption;
	}

	virtual void display() = 0;
};

class Truck : public Vechile {
private:
	int weight_limit;

public:
	Truck(int weight_limit, string model, string Registration, int speed, double capacity, double consumption)
		:Vechile(model, Registration, speed, capacity, consumption)
	{
		Truck::weight_limit = weight_limit;
	}

	void setWeightLimit(int x) {
		weight_limit = x;
	}

	int getWeightLimit() {
		return weight_limit;
	}

	void display() {
		cout << model << " "
			<< Registration << " "
			<< speed << " "
			<< capacity << " "
			<< consumption << " "
			<< weight_limit << " " << endl;
	}
};

class Bus : public Vechile {
private:
	int NumOfPass;

public:
	Bus(int NumOfPass, string model, string Registration, int speed, double capacity, double consumption)
		:Vechile(model, Registration, speed, capacity, consumption)
	{
		Bus::NumOfPass = NumOfPass;
	}

	void setNumOfPass(int x) {
		NumOfPass = x;
	}

	int getNumOfPass() {
		return NumOfPass;
	}

	void display() {
		cout << model << " "
			<< Registration << " "
			<< speed << " "
			<< capacity << " "
			<< consumption << " "
			<< NumOfPass << " " << endl;
	}
};




int main()
{
	//  ------------ Template --------------  //
	// //01: 
	/*int x = 4, y = 8;
	cout << maxNum(x, y);*/



	// //02
	/*double x = 10.5, y = 1.5;
	cout << "Before swap: x = " << x << " y = " << y << endl;
	swapNum(x, y);
	cout << "After swap: x = " << x << " y = " << y << endl;*/



	// //03
	/*Calc<int> calc(10, 2);
	cout << "add: " << calc.addNum() << endl;
	cout << "subtract: " << calc.subNum() << endl;
	cout << "Multiply: " << calc.multNum() << endl;
	cout << "division: " << calc.divNum() << endl;*/



	// -------- Abstraction - Polymorphism --------- //
	// //04
	/*Truck truck(500, "tr123", "Id4456", 120, 1000, 200);
	Bus bus(50, "bs123", "Id4456", 120, 1000, 200);
	truck.display();
	bus.display();*/



}

