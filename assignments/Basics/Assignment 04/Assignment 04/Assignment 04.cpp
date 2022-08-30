using namespace std;

#include <iostream>

//// Q1:
void MyFunc(int num) {
	cout << num;
};


//// Q2:
void Avg(int x, int y, int z) {
	int sum = x + y + z;
	float avg = sum / 3.0;
	cout << " The average is: " << avg;
}


//// Q3:
bool PrimeNum(int x) {
	if (x <= 1)
		return false;

	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}

	return true;
}


//// Q4:
int CubeFun(int x) {
	int num = x;
	for (int i = 0; i < 2; i++) {
		x *= num;
	}
	return x;
}


//// Q5:
void circle_calc(int r) {
	int dMeter = r * 2;
	float circum = 2 * 3.14 * r;
	float area = 3.14 * (r ^ 2);

	cout << "Diameter: " << dMeter << ", Circumference: " << circum << ", Area: " << area;
}


//// Q6
void print_arr(int arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}


//// Q7
void arr_sum(int arr[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	cout << "sum = " << sum;
}

//// Q8:
void arr_max(int arr[], int len) {
	int max = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "max: " << max;
}


//// Q9:
void print_mtrx(int m[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix_sum(int m1[3][3], int m2[3][3]) {
	int m3[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	cout << "Sum: " << endl;
	print_mtrx(m3);
}


//// Q10:
void matrix_sum_diagonal(int m1[][3], int row, int col) {
	int sum = 0;
	int next_col = col - 1;
	for (int i = 0; i < row; i++) {
		sum += m1[i][next_col];
		next_col--;
	}
	cout << "Sum: " << sum;
}


//// Q11:
void matrix_sum_row(int m1[][3], int row, int col) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += m1[i][j];
		}
		cout << "sum of row " << i + 1 << " is: " << sum << endl;
		sum = 0;
	}
}





int main()
{
	//// Q1
	//int num;
	//cout << "Enter the number: ";
	//cin >> num;
	//MyFunc(num);


	//// Q2:
	/*int arr[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the " << i + 1 << " number: ";
		cin >> arr[i];
	}
	Avg(arr[0], arr[1], arr[2]);*/


	//// Q3:
	/*int num;
	cout << "Enter the number: ";
	cin >> num;

	if (PrimeNum(num))
		cout << "true";
	else
		cout << "false";*/


	//// Q4:
	//int num;
	//cout << "Enter the number: ";
	//cin >> num;
	//cout << "the cube of " << num << " is " << CubeFun(num);


	//// Q5: 
	/*int num;
	cout << "Enter the number: ";
	cin >> num;
	circle_calc(num);*/


	//// Q6
	/*int arr[] = {1, 2, 3, 4, 5};
	print_arr(arr, size(arr));*/


	//// Q7:
	/*int arr[] = {1, 2, 3, 4, 5};
	arr_sum(arr, size(arr));*/


	//// Q8:
	//int arr[] = { 5, 1, 6, 10, 2, 3, 6, 50, -7, 4 };
	//arr_max(arr, size(arr));


	//// Q9:
	/*int m1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int m2[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};

	matrix_sum(m1, m2);*/


	//// Q10:
	/*int const row = 3;
	int const col = 3;
	int m1[row][col] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	matrix_sum_diagonal(m1, row, col);*/


	//// Q11:
	/*int const row = 3;
	int const col = 3;
	int m1[row][col] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	matrix_sum_row(m1, row, col);*/
}

