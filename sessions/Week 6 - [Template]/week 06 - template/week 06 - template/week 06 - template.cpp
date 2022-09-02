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
template<class T1, class T2>
T1 sum(T1 x, T2 y) {
    return x + y;
}
int main()
{
    double x = 10.5;
    int y = 11;
    cout << sum(x, y) << endl;
    cout << sum<int,int>(x, y) << endl;
}
#pragma endregion


