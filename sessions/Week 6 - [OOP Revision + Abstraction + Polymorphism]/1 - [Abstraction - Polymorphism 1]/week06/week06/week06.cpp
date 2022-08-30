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
class Add {
public:
    static int add(int a, int b) {
        cout << "...1";
        return a + b;
    }

    static int add(int a, int b, int c) {
        cout << "...2";
        return a + b + c;
    }

    static double add(double a, double b) {
        cout << "...3";
        return a + b;
    }

    static double add(int a, double b) {
        cout << "...4";
        return a + b;
    }

    static double add(double a, int b) {
        cout << "...5";
        return a + b;
    }
};

int main()
{
    cout << "=> " << Add::add(1, 2) << endl;
    cout << "=> " << Add::add(1, 2, 3) << endl;
    cout << "=> " << Add::add(1.5, 2.3) << endl;
    cout << "=> " << Add::add(1, 2.3) << endl;
    cout << "=> " << Add::add(1.5, 2) << endl;
}
#pragma endregion



