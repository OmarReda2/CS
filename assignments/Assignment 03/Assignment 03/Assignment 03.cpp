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





	//// 07:
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr1_count = 0;

	int arr2[5] = { 6, 7, 8, 9, 10 };
	int arr2_count = 0;

	int arr3[10];
	for (int i = 0;; i++) {
		while (arr1_count < 5) {
			arr3[i] = arr1[i];
			arr1_count++;
		}

		while (arr2_count < 5) {
			arr3[i] = arr2[i];
			arr1_count++;
		}
		break;
	}

	for (int i = 0; i < 10; i++){
		cout << arr3[i] << 1;
	}
}
