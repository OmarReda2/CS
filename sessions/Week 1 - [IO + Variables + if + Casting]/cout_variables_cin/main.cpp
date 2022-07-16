#include <iostream>

using namespace std;

int main()
{
//    cout << 10 << ' ' << 20 << ' ' << 30 << endl;
//    cout << 'O' << endl;
//
//    cout << "Omar Reda" << endl << "My name" << endl;
//    cout << "My name is \nOmar Reda";
//    cout << "Omar\\Reda\\Elsayed";
//    // '/r' == endl
//    // '/n' ~= endl but BUT
//    // '/n' > endl in Performance

// ===================================================== //

//    int salary;
//    cout << "Please enter the salary: ";
//    cin >> salary;
//
//    cout << "The salary value is: " << salary;



    char firstLetter;
    int birthMonth, birthYear;

    cout << "enter the first letter: ";
    cin >> firstLetter;

    cout << "enter the birth of month: ";
    cin >> birthMonth;

    cout << "enter the birth of year: ";
    cin >> birthYear;
    int BOYModified = birthYear % 100;

    cout << "Your Id iS: " << firstLetter << '\\' << birthMonth << '\\' << BOYModified << endl;
    cout << "your age is: " <<  2021 - birthYear;

    return 0;
}
