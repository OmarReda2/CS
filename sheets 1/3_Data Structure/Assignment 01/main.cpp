#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
// //Q1:
class Person {
protected:
	string fname, lname, password;
	int id;

public:
	Person(string fname, string lname, string password, int id) {
		this->fname = fname;
		this->lname = lname;
		this->password = password;
		this->id = id;
	}

	Person() {};

	string getFname() {
		return fname;
	}

	string getLname() {
		return lname;
	}

	string getPassword() {
		return password;
	}

	int getId() {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	void setFname(string fname) {
		this->fname = fname;
	}

	void setLname(string lname) {
		this->lname = lname;
	}

	void setPass(string password) {
		this->password = password;
	}

	void printInfo() {
		cout << "id: " << id << ' ' << endl
			<< "Name: " << lname << ' ' << fname << ' ' << endl
			<< "Password: " << password << ' ' << endl;
	}
};

class Instructor : public Person {
public:
	Instructor(string fname, string lname, string password, int id) :Person(fname, lname, password, id) {}
	Instructor() {};
};

class Student : public Person {
public:
	Student(string fname, string lname, string password, int id) :Person(fname, lname, password, id) {};
	Student() {}
};

class Course {
public:
	string name, id;
	Instructor inst;
	vector<Student> students;
public:
	Course(string name, string id, Instructor inst) {
		setName(name);
		setId(id);
		setInst(inst);
	}

	void setName(string name) {
		this->name = name;
	}
	void setId(string name) {
		this->id = id;
	}
	void setInst(Instructor inst) {
		this->inst = inst;
	}
	void setStudents(Student student) {
		this->students.push_back(student);
	}

	string getName() {
		return name;
	}
	string getId() {
		return id;
	}
	Instructor getInst() {
		return inst;
	}

	vector<Student> getStudents() {
		return students;
	}

	void printAllStdInfo() {
		for (int i = 0; i < students.size(); i++) {
			cout << "Student no." << i + 1 << ":" << endl
				<< students[i].getFname() << endl
				<< students[i].getLname() << endl
				<< students[i].getId() << endl
				<< students[i].getPassword() << endl << endl;
		}
	}

	void printCrsInfo() {
		cout << id << endl;
		cout << name << endl;
		cout << students.size() << endl;
		cout << inst.getFname() << endl;
		cout << inst.getId() << endl;
	}

};





// //Q2
template <class T>
class Calculator {
private:
	T num1;
	T num2;
public:
	T add(T& num1, T& num2) {
		return num1 + num2;
	}
	T sub(T& num1, T& num2) {
		return num1 - num2;
	}
	T mult(T& num1, T& num2) {
		return num1 * num2;
	}
	T div(T& num1, T& num2) {
		return num1 / num2;
	}
};


// //Q3
int fibonanci(int n)
{
	if (n <= 1)
		return n;
	return fibonanci(n - 1) + fibonanci(n - 2);
}
int main()
{
	// //Q1 test
	/*Instructor inst1("Mohammed", "Hesham", "MH123", 111);
	inst1.printInfo();
	cout << endl;

	Instructor inst2("Sami", "Hamza", "MH123", 111);
	inst2.printInfo();
	cout << endl;

	Student std1("Ahmed", "Hassan", "AH123", 222);
	std1.printInfo();
	cout << endl;

	Student std2("Karim", "Omar", "KO123", 333);
	std2.printInfo();

	Course crs1("CS", "CS250", inst1);
	crs1.setInst(inst2);
	crs1.getInst().printInfo();
	cout << endl;

	crs1.setStudents(std1);
	crs1.setStudents(std2);
	cout << crs1.getStudents()[0].getFname() << endl;
	cout << crs1.getStudents()[1].getFname() << endl;

	crs1.printAllStdInfo();
	crs1.printCrsInfo();*/







	// // Q2 test
	/*int num1 = 2.4;
	int num2 = 2.6;
	Calculator<int> c1;
	cout << c1.add(num1, num2) << endl
	<< c1.sub(num1, num2) << endl
	<< c1.mult(num1, num2) << endl
	<< c1.div(num1, num2) << endl << endl;


	double num3 = 2.4;
	double num4 = 2.6;
	Calculator<double> c2;
	cout << c2.add(num3, num4) << endl
		<< c2.sub(num3, num4) << endl
		<< c2.mult(num3, num4) << endl
		<< c2.div(num3, num4) << endl;*/





	// //Q3 test
	cout << fibonanci(6);



}
