using namespace std;
#include <iostream>
#include <string>


//class Employee {
//private:
//	string name;
//	double salary;
//	int age, dId;
//
//public:
//	int getAge() {
//		return age;
//	}
//
//	void setAge(int a) {
//		if (a >= 18) {
//			age = a;
//		}
//		else {
//			cout << "Invalid age\n";
//		}
//	}
//};





//class Rectangle {
//private:
//	double length;
//	double width;
//
//public:
//	void setLength(double len) {
//		length = len;
//	}
//
//	double getLength() {
//		return length;
//	}
//
//	void setWidth(double w) {
//		width = w;
//	}
//
//	double getWidth() {
//		return width;
//	}
//
//	double calcArea() {
//		return width * length;
//	}
//
//	Rectangle(double l, double w)
//	{
//		cout << "constructing rec\n";
//		length = l;
//		width = w;
//	}
//	//OR
//	/*Rectangle(double l, double w)
//		:width(w), length(l) { }*/
//
//
//	~Rectangle() {
//		cout << "Destructing rec\n";
//	}
//};





class Department {
public:
    int id;
    string name;
};

class Employee {
private:
    string name;
    double salary;
    int age;
    Department department;
public:
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setSalary(double s) {
        salary = s;
    }
    void setDepartment(Department d) {
        department = d;
    }

    string getName() {
        return name;
    }
    double getSalary() {
        return salary;
    }
    int getAge() {
        return age;
    }
    Department getDepartment() {
        return department;
    }

    Employee(string n, double s, Department d, int a)
        : name(n), salary(s), department(d), age(a) {}

    ~Employee() {

    }
};


int main()
{
	/*Employee e, e2;
	e.setAge(25);
	e2.setAge(30);
	cout << e.getAge() << " " << e2.getAge();*/




	//Rectangle r1(2, 3); 
	//// OR
	////Rectangle r1= Rectangle(2, 3);

	//r1.setLength(4.5);
	//r1.setWidth(6);
	//cout << r1.getLength() << " " << r1.getWidth() << " " << r1.calcArea();



    Department dept;
    dept.id = 1;
    dept.name = "CS";

    Employee emp("Omar", 7000, dept, 21);
    cout << emp.getDepartment().name;


}

