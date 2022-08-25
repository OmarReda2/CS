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
};


class Customer : public Person{
private:
	bool isLoyal;

public:
	void setIsLoyal(bool l) {
		isLoyal = l;
	}

	bool getIsLoyal() {
		return isLoyal;
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
};
int main()
{
	Customer c1;
	c1.setName("Omar");
	cout << c1.getName();
}

