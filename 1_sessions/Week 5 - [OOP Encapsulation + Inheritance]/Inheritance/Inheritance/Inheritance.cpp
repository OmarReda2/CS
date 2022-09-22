using namespace std;
#include <iostream>
#include <string>

class Person {
private:
	string name, phone;
	int age;

public:
	void setName(string n) {
		name = n;
	}

	void setPhone(string p) {
		phone = p;
	}

	string getName() {
		return name;
	}

	string getPhone() {
		return phone;
	}

	int getAge() {
		return age;
	}

	Person(string n, int a)
	{
		name = n;
		age = a;
	}
};


class Customer : public Person {
private:
	bool isLoyal;

public:
	void setIsLoyal(bool l) {
		isLoyal = l;
	}

	bool getIsLoyal() {
		return isLoyal;
	}

	Customer() : Person("Empty", 0)
	{

	}
};


class Employee : public Person {
private:
	int salary, deduction;

public:
	int getSalary() {
		return salary;
	}

	int getDeduction() {
		return deduction;
	}

	void setSalary(int s) {
		salary = s;
	}

	void setDeduction(int d) {
		deduction = d;
	}

	int netSalary() {
		return salary - deduction;
	}

	Employee(string n, int a) : Person(n, a)
	{

	}
};

class Calculator {
public:
	const static int numOfCalc;

	static void add(int a, int b) {
		cout << a + b;
	}

	static void mult(int a, int b) {
		cout << a * b;
	}


	
};

int main()
{
	Customer c1;
	c1.setName("Omar");
	cout << c1.getName() << endl;

	Employee emp("Mohamed", 30);
	cout << emp.getName() << " " << emp.getAge() << endl;

	cout << Calculator::numOfCalc;
	Calculator::add(1, 2);
	Calculator::mult(1, 2);
}

