#include <iostream>
#include <string.h>
#include <assert.h>
#include <stack>
#include <queue>

using namespace std;


template <class T>
class Node {
public:
    T value;
    Node<T>* next;

    Node(T value) {
        next = nullptr;
        Node::value = value;
    }
};

////Building stack
template <class T>
class Stack {
private:
    int length;
    Node<T>* head;

public:
    bool empty() {
        return length == 0;
    }

    int size() {
        return length;
    }

    void push(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (empty()) {
            head = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    T Top() {
        assert(!empty());
        return head->value;
    }

    void pop() {
        assert(!empty());
        Node<T>* toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        length--;
    }

    void clear() {
        while (!empty()) {
            pop();
        }
        //or
        //        Node<T>* iterator = head;
        //        while(iterator!= nullptr){
        //            head = head->next;
        //            delete iterator;
        //            iterator = head;
        //        }
        //        length = 0;
    }

    Stack() {
        length = 0;
        head = nullptr;
    }
    //A destructor is a member function that is invoked automatically when the object goes out of scope
    // or is explicitly destroyed by a call to delete
    ~Stack() {
        clear();
    }
};


////Building Queue
template <class T>
class Queue{
private:
    int length;
    Node<T>* head;
    Node<T>* tail;
public:
    bool empty(){
        return length == 0;
    }

    int size(){
        return length;
    }

    void push(T value){
        Node<T>* newNode = new Node<T>(value);
        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    T front(){
        assert(!empty());
        return head->value;
    }

    void pop(){
        assert(!empty());
        Node<T>* toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        length--;
        if(empty()){
            tail = nullptr;
        }
    }

    void clear(){
        while(!empty()){
            pop();
        }
    }

    Queue(){
        length = 0;
        head = tail = nullptr;
    }
    ~Queue(){
        clear();
    }
};






int main() {
//// ----- built-in stack library ----- ////
//   stack<int> st;
//   st.push(5);
//   st.push(1);
//   st.push(7);
//   cout << st.top() << endl;
//   st.pop();
//   cout << st.top() << endl;


////----- user-defined stack -----////
    Stack<int> st;
    st.push(5);
    st.push(1);
    st.push(7);
    cout << st.Top() << endl;

    st.pop();
    cout << st.Top() << endl;

    st.clear();
    cout << st.Top() << endl;


//// ----- built-in queue library ----- ////
//    queue<int> q;
//    q.push(5);
//    q.push(1);
//    q.push(7);
//    cout << q.front() << endl;
//    q.pop();
//    cout << q.front() << endl;


////----- user-defined stack -----////
//    Queue<int> q;
//    q.push(5);
//    q.push(1);
//    q.push(7);
//    cout << q.front() << endl;
//    q.pop();
//    cout << q.front() << endl;


}
