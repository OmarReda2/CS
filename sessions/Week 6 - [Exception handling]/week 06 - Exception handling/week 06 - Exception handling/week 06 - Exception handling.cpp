using namespace std;
#include <iostream>
#include <string>

int main()
{
#pragma region Example 01
	//int hour;
	//cin.exceptions(cin.failbit);
	//try
	//{
	//	cin >> hour;
	//	if (hour < 0)
	//		throw "error";

	//	cout << "the time is " << hour << " : 00\n";
	//}
	////catch (char er[])
	////catch (string er)
	////catch (char*er)

	//catch (...)
	//{
	//	//cout << er << "wrong value";

	//	//cerr << "wrong value";
	//	cout << "wrong value";
	//}
#pragma endregion


#pragma region Example 02
	cin.exceptions(cin.failbit);
	try
	{
		int age;
		cout << "Enter your age: ";
		cin >> age;
		if (age < 18)
			throw age;
		else if (age >= 60)
			throw "old";
		cout << "Access granted - you are old enough";
	}
	catch (int num)
	{
		cout << "Access denied - You must be older.\n";
		cout << "Age is: " << num;
	}
	catch (...)
	{
		cout << "Access denied - You must be younger.\n";
	}
#pragma endregion

}

