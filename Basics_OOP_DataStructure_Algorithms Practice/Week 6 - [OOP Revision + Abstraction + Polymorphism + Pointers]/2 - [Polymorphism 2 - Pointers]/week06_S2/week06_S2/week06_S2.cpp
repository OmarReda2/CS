using namespace std;

#include <iostream>
#include <string>



#pragma region Pointers
int main()
{
	char x = 'o';
	char* ptr;
	ptr = &x;
	cout << ptr << ' ' << *ptr << ' ' << &ptr << endl;


	*ptr = 10;
	cout << ptr << ' ' << *ptr << ' ' << &ptr << endl;

	*ptr++;
	cout << ptr << ' ' << *ptr << ' ' << &ptr << endl;
}
#pragma endregion



#pragma region Pointers and array
//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//
//	int* ptr = arr;
//	cout << ptr << ' ' << arr << endl;
//	cout << &ptr << ' ' << &arr << endl;
//	cout << *ptr << ' ' << *arr << endl;
//
//	ptr++;
//	cout << *ptr << ' ' << *arr << endl;
//
//	cout << *(arr + 1) << endl;
//	cout << *(arr + 1) + 1 << endl;
//}
#pragma endregion


#pragma region Pointers and new
//int main() 
//{
//	int* ptr;
//	ptr = new int;
//	*ptr = 5;
//	delete ptr;
//
//
//	int* ptrArr = new int[5];
//	ptrArr[0] = 1;
//	ptrArr[1] = 2;
//	cout << ptr[0];
//	//delete ptrArr; // delete the first address of array
//	delete[] ptrArr;
//}
#pragma endregion





#pragma region Pointers and class/object
//class Person {
//
//};
//
//class Student : public Person {
//
//};
//
//class Teacher : public Person {
//
//};
//
//int main()
//{
//	Person* p = new Student();
//	Person* p = new Teacher();
//	Person** persons = new Person * [5];
//	persons[0] = new Student();
//	persons[1] = new Teacher();
//
//}
#pragma endregion


#pragma region Polymorphism & pointers
//class Person {
//public:
//	int x, y;
//	virtual void speak() {
//		cout << "person\n";
//	}
//};
//
//class Student : public Person {
//public:
//	int z, w;
//	void speak() {
//		cout << "student\n";
//	}
//};
//
//
//
//int main()
//{
//	Person* p = new Student();
//	(*p).speak();
//	//or
//	p->speak();
//
//
//
//}
#pragma endregion




