using namespace std;
#include <iostream>
#include <string>


#pragma region Template single parameter
//template<class T>
//T sum(T x, T y) {
//    return x + y;
//}
//int main()
//{
//    double x = 10.5, y = 10;
//    cout << sum(x, y);
//}
#pragma endregion



#pragma region Template Multiple parameter
//template<class T1, class T2>
//T1 sum(T1 x, T2 y) {
//    return x + y;
//}
//int main()
//{
//    double x = 10.5;
//    int y = 11;
//    cout << sum(x, y) << endl;
//    cout << sum<int,int>(x, y) << endl;
//}
#pragma endregion



#pragma region Template and Classes
//template<class T>
//class Number {
//private:
//	T first, second;
//public:
//	Number(T a, T b) {
//		first = a;
//		second = b;
//	}
//
//	T max();
//};
//
//template<class T>
//T Number<T>::max() {
//	return (first > second ? first : second);
//}
//int main() 
//{
//	Number<int> num(1, 2); 
//	cout << num.max();
//}
#pragma endregion



#pragma region Template specilization
template<class T>
class A_char {
public:
	A_char(T x)
	{
		cout << x << " Is not character" << endl;
	}

};

template<>
class A_char<char> {
public:
	A_char(char x)
	{
		cout << x << " Is a character" << endl;
	}
};

int main()
{
	A_char<int> obj1(10);
	A_char<char> obj2('c');
}
#pragma endregion








