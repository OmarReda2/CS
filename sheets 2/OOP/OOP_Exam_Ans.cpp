/************************** OOP Exam **************************/
//Question 1 (15 points)
/*
1- Encapsulation: 
	it's mean the ability of hide or show the data and which we use access modifiers to hide or public data object.

	Access modifiers: 
	Public: Can access data everywhere.
	protected: Can access data in the same class or it's child class.
	private: can access only in the class by other class members.

2- Inheritance: 
	It allow us to create a new classes from the existing and the new class called "child class"
	and the existing class called "parent class" and the chlid class also inherite all data
	member from the parent class and the child class can modify the inherited parent' methods

3- Abstraction: 
	It is an Interface describes the behavior of the class without any implementation of 
	that class. 

4- Polymorphism: 
	the ability of object to having many forms so objects with common parent 
	may have the same name of function but with different behaviors at run time.
*/


/*****************************************************************************/

//Question 2 (15 points)
/*
* private: private members are accessible inside the class (5 points)
* public: public members are accessible everywhere. (5 points)
* protected: protected members are accessible inside the class and his childs. (5 points)
*/



/*****************************************************************************/

//Question 3 (15 points)
//#include <iostream>
//using namespace std;
//template <class T>
//class Sum {
//public:
//	T number1;
//	T number2;
//	T result() {
//		return number1 + number2;
//	}
//};
//template <class t1, class t2>
//t2 sum(t1 number1, t2 number2) {
//	return number2 + number1;
//}
//
//int main() {
//	cout << sum<int,double>(5, 1.5);
//}


/*****************************************************************************/

//Question 4 (15 points) => 5 point for every block

//#include <iostream>
//using namespace std;
//class MyException : public exception { 
//public:
//	const char* what() const throw()
//	{
//		return "Can not divide by zero";
//	}
//};

//class MyException2 : public exception {
//public:
//	const char* what() const throw() {
//		return "It is a negative value";
//	}
//};
//
//int divide(int x, int y) {
//	if (y == 0) { //(5 points)
//		throw MyException();
//	}
//	if (y < 0) {
//		throw MyException2();
//	}
//	return x / y;
//}
//
//
//
//int main() {
//	int x, y;
//	cout << "Enter 2 numbers to divide :" << endl;
//	cin >> x >> y;
//	//(5 points)
//	try {
//		cout << divide(x, y) << endl;
//	}
//	catch (exception& e) {
//		cout << e.what() << endl;
//	}
//}
//
/*****************************************************************************/

//Question 5 (20 points)
/*
	Overriding => A rewritten function in child class with the same name of another function 
	in parent class and with the same signature (Number of parameters, Type of parameters) 
	and its processing happened in run time (Run Time Polymorphism). (10 points)

	Overloading => A rewritten function with the same name of another function but with 
	different signature (Number of parameters, Type of parameters) and its processing
	happened in compile time (Compile Time Polymorphism). (10 points)

*/


/*****************************************************************************/

//Question 6 (20 points)
// 10 points for classes
// 10 points for returning array using pointers

//#include <iostream>
//using namespace std;
//class Point2D {
//private:
//	float x, y;
//public:
//	Point2D(float x, float y) {
//		this->x = x;
//		this->y = y;
//	}
//	Point2D() {
//		this->x = 0.0;
//		this->y = 0.0;
//	}
//
//	//getter
//	float getX() {
//		return x;
//	}
//	float getY() {
//		return y;
//	}
//
//	//setter
//	void setX(float x) {
//		this->x = x;
//	}
//	void setY(float y) {
//		this->y = y;
//	}
//
//	void setXY(float x, float y) {
//		setX(x);
//		setY(y);
//	}
//
//	float* getXY() {
//		float arr[2] = {x,y};
//		return arr;
//	}
//};
//class Point3D : public Point2D {
//private:
//	float z;
//public:
//	Point3D(float x, float y, float z) : Point2D(x, y) {
//		this->z = z;
//	}
//	Point3D() {
//		this->z = 0.0;
//	}
//
//	float getZ() {
//		return z;
//	}
//	void setZ(float z) {
//		this->z = z;
//	}
//
//	void setXYZ(float x, float y, float z) {
//		setXY(x, y);
//		this->z = z;
//	}
//
//	float* getXYZ() {
//		float arr[] = { getX(),getY(),z};
//		return arr;
//	}
//};







