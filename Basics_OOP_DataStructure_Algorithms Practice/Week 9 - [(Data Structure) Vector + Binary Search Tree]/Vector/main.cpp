#include <iostream>
#include <string.h>
#include <assert.h>
#include <vector>

using namespace std;

template <class T>
class Vector
{
private:
    T* arr;
    int length, capacity;

    void increaseCapacity()
    {
        T* oldArr = arr;
        capacity *= 2;
        arr = new T[capacity];
        for(int i = 0; i < length; i++)
        {
            arr[i] = oldArr[i];
        }
        delete oldArr;
    }

public:
    bool empty()
    {
        return length == 0;
    }

    int size()
    {
        return length;
    }

    void push_back(T value)
    {
        arr[length] = value;
        length++;
        if(length == capacity)
            increaseCapacity();
    }

    void pop_back()
    {
        assert(!empty());
        length--;
    }

    T front()
    {
        assert(!empty());
        return arr[0];
    }

    T back()
    {
        assert(!empty());
        return arr[length - 1];
    }

    T& operator [] (int index)
    {
        assert(index >= 0 && index < length);
        return arr[index];
    }
    /* if we use "&" means that it will return the reference so we can assign a new value to this reference
     ex:-
     without "&":
    arr = {10,20,30};
    arr[1] = 70; => means that 10 = 70 => as the arr[1] will return the value of this index"1"
     with "&"
    arr[1] = 70; => means that 1289(the address of memory) = 70 => as the arr[1] will return the address */

    void insert(int index, T value)
    {
        assert(index >= 0 && index < length);
        for(int i = length; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        length++;
        if(length == capacity)
            increaseCapacity();
    }

    void erase(int index)
    {
        assert(index >= 0 && index < length);
        for(int i = index; i < length - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;
    }
    Vector()
    {
        length = 0;
        capacity = 1;
        arr = new T[capacity];
    }

};


template <class T>
void printVector(Vector<T> vec)
{
    for(int i =0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
}

int main()
{
// // ------ built-in vector ------ //
//    vector<int> v;
//    v.push_back(5);
//    v.push_back(7);
//    v.push_back(1);
//    v.pop_back();
//    cout << v.back() << endl;
//    cout << v.size() << endl;
//    cout << v.empty() << endl;
//    cout << v.front() << endl;





// // ------ user-defined vector ------ //
    Vector<int> vec;
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(1);


//    cout << vec.front()  << ' ' << vec.back() << ' ' << vec.size() << endl;
//    vec.pop_back();
//    cout << vec.front()  << ' ' << vec.back() << ' ' << vec.size() << endl;
//    cout << vec[1];


//    for(int i =0; i < vec.size(); i++){
//        cout << vec[i] << ' ';
//    }


//    cout << vec[1] << endl;
//    vec[1] = 1000;
//    cout << vec[1] << endl;



//    printVector(vec);
//    cout << endl;
//    vec.insert(1, 10);
//    printVector(vec);


    printVector(vec);
    cout << endl;
    vec.erase(1);
    printVector(vec);





    return 0;
}
