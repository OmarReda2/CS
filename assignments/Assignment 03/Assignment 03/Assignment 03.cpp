using namespace std;

#include <iostream>

int main()
{
	//// 01:
	/*int length = 10;
	for (int i = 1; i <= length; i++) {
		for (int j = 0; j < i; j++) {

			if (i <= 2 || i == length) {
				cout << "*";
			}
			else {
				if (j < 1 || j > i - 2) {
					cout << "*";
				}
				else {

					cout << ' ';
				}
			}
		}
		cout << endl;
	}*/




	//// 02:
	/*int length = 10;
	for (int i = length; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << endl;
	}*/




	//// 03:
	/*int arr[10];
	int odd = 0;
	int even = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Enter the element number " << i + 1 << endl;
		cin >> arr[i];

		if (arr[i] % 2 == 1)
			odd++;
		else
			even++;
	}

	cout << "odd : " << odd << endl;
	cout << "even : " << even << endl;*/




	//// 04:
	/*int const len = 5;
	int arr[len] = { 22, 7, 99, 67, 50 };

	int element;
	int element_index;
	cout << "Element to search: ";
	cin >> element;

	for (int i = 0; i < len; i++) {
		if (arr[i] == element) {
			element_index = i;
			break;
		}
	}
	cout << "Element found in index " << element_index;*/




	//// 05:
	/*int const len = 5;
	int arr1[len] = { 1, 2, 3, 4, 5 };
	int arr2[len] = {};

	for (int i = 0; i < len; i++) {
		arr2[i] = arr1[i];
	}

	cout << "arr1: ";
	for (int i = 0; i < len; i++) {
		cout << arr1[i] << ' ' ;
	}
	cout << endl;

	cout << "arr2: ";
	for (int i = 0; i < len; i++) {
		cout << arr2[i] << ' ';
	}*/




	//// 06:
	int insert_element = 0;
	int const len = 10;
	int arr[len] = { 1, 2, 3, 5, 5, 20, 2, 12, 10 };
	int arr_repeated[len] = {};

	for (int i = 0; i < len; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] == arr[j]) {
				arr_repeated[insert_element] = arr[i];
				insert_element++;
				break;
			}
		}
	}


	cout << "Unique elements is: ";
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {

			if (arr[i] == arr_repeated[j]) {

				arr[i] = -1;
				
			}
		}
		
		if (arr[i] != -1 || arr[i] == 0)
			cout << arr[i] << ' ';
	}

	






	//// 07:
	/*const int arr1_length = 5;
	int arr1_count = 0;
	int arr1[arr1_length] = { 1, 2, 3, 4, 5 };

	const int arr2_length = 5;
	int arr2_count = 0;
	int arr2[arr2_length] = { 6, 7, 8, 9, 10,};

	const int arr3_length = 30;
	int arr3_count = 0;
	int arr3[arr3_length];

	while (arr1_count != arr1_length) {
		arr3[arr3_count] = arr1[arr1_count];
		arr1_count++;
		arr3_count++;
	}

	while (arr2_count != arr2_length) {
		arr3[arr3_count] = arr2[arr2_count];
		arr2_count++;
		arr3_count++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr3[i] << endl;
	}*/








	//// Bounce 
	//// 01:
	/*int row;
	cout << "Enter the rows number: ";
	cin >> row;

	int dash = row - 1;
	int star = 1;


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < dash; j++) {
			cout << ' ';
		}
		dash--;

		for (int k = 0; k < star; k++) {
			cout << '*';
		}
		star += 2;
		cout << endl;
	}*/




	//// 02: 
	/*int row;
	cout << "Enter the rows number: ";
	cin >> row;
	int dash = row - 1;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < dash; j++) {
			cout << ' ';
		}
		dash--;
		cout << "******";
		cout << endl;
	}*/








}
