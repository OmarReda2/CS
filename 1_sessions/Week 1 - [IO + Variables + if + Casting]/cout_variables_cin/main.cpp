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




//    int salary;
//    cout << "Please enter the salary: ";
//    cin >> salary;
//
//    cout << "The salary value is: " << salary;





//    char firstLetter;
//    int birthMonth, birthYear;
//
//    cout << "enter the first letter: ";
//    cin >> firstLetter;
//
//    cout << "enter the birth of month: ";
//    cin >> birthMonth;
//
//    cout << "enter the birth of year: ";
//    cin >> birthYear;
//    int BOYModified = birthYear % 100;
//
//    cout << "Your Id iS: " << firstLetter << '\\' << birthMonth << '\\' << BOYModified << endl;
//    cout << "your age is: " <<  2021 - birthYear;






//    int age;
//    char gender;
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "Enter your gender: ";
//    cin >> gender;
//
//    if(age > 18 && gender == 'M' || gender == 'm')
//        cout << "Man";
//    else
//        cout << "Boy";




//char st = 'a', nd = 'b';
//if(st > nd)
//    cout << "st is the second";
//else
//    cout << "st is the first";




//    cout << 5 / 2 << endl;
//    cout << 5.0 / 2 << endl;
//    cout << 5 / 2.0 << endl;
//    cout << 5.0 / 2.0 << endl;

//    int x = 5, y = 2;
//    cout << x / y << endl;
//    cout << (double)x / y << endl;
//    cout << x / (double)y << endl;
//    cout << x / double(y) << endl;
//    cout << 1.0 * x / y << endl;

//    int x = 1000000000, y = 100;
//    cout << x * y << endl;
//    cout << x * (long long)y << endl;

//    char letter = 'a';
//    cout << (int)letter << endl;
//
//    int num = 97;
//    double num2 = 97;
//    double num3 = 97.6;
//    cout << (char)num << endl;
//    cout << (char)num2 << endl;
//    cout << (char)num3 << endl;

//    char letter;
//    cout << "Enter the letter";
//    cin >> letter;

//    char letter;
//    cout << "Enter the letter: ";
//    cin >> letter;
//
//    if((int)letter < 97)
//        cout << "the letter " << letter << " is Capital, small: " << char((int)letter + 32);
//    else
//        cout << "the letter " << letter << " is small, Capital: " << char((int)letter - 32);

    char c;
    cout << "Enter the char: ";
    cin >> c;

    if(c >= 'a' && c <= 'z')
        cout << "the letter " << c << " is small";
    else
        cout << "the capital " << c << " is capital";

    return 0;
}
