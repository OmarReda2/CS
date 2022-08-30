#include <iostream>
#include <string>
using namespace std;



#pragma region Abstraction
//class Person {
//public:
//    string name;
//    virtual void work() = 0;
//
//};
//
//class Student : public Person {
//public:
//    double marks;
//    void work() {
//        cout << "I am studying";
//    }
//};
//
//class Teacher : public Person {
//public:
//    double salary;
//};
//
//int main()
//{
//
//    Student std;
//    std.work();
//
//}

#pragma endregion


#pragma region Polymorphism : Function overloading
//class Add {
//public:
//    static int add(int a, int b) {
//        cout << "...1";
//        return a + b;
//    }
//
//    static int add(int a, int b, int c) {
//        cout << "...2";
//        return a + b + c;
//    }
//
//    static double add(double a, double b) {
//        cout << "...3";
//        return a + b;
//    }
//
//    static double add(int a, double b) {
//        cout << "...4";
//        return a + b;
//    }
//
//    static double add(double a, int b) {
//        cout << "...5";
//        return a + b;
//    }
//};
//
//int main()
//{
//    cout << "=> " << Add::add(1, 2) << endl;
//    cout << "=> " << Add::add(1, 2, 3) << endl;
//    cout << "=> " << Add::add(1.5, 2.3) << endl;
//    cout << "=> " << Add::add(1, 2.3) << endl;
//    cout << "=> " << Add::add(1.5, 2) << endl;
//}
#pragma endregion



#pragma region Polymorphism : Operator overloading
class Length {
public:
	int meters, centimeters;
	Length(int meters, int centimeters)
	{
		Length::meters = meters;
		Length::centimeters = centimeters;
	}

	Length operator + (Length l2) {
		Length result(meters + l2.meters, centimeters + l2.centimeters);
		if (result.centimeters >= 100) {
			result.meters++;
			result.centimeters -= 100;
		}
		return result;
	}

	Length operator ++() {
		Length result(++meters, centimeters);
		return result;
	}

	Length operator ++(int) {
		Length result(meters++, centimeters);
		return result;
	}
};
int main()
{
	/*Length l1(1, 90), l2(5, 30);
	Length l3 = l1 + l2;
	cout << l3.meters << " " << l3.centimeters;*/

	Length l1(1, 90), l2(1, 90);;
	Length l3 = ++l1;
	Length l4 = l2++;
	cout << l3.meters << " " << l3.centimeters << endl;
	cout << l1.meters << " " << l1.centimeters << endl;
	cout << l4.meters << " " << l4.centimeters << endl;
	cout << l2.meters << " " << l2.centimeters << endl;

}
#pragma endregion




