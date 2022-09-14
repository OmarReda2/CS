#include <iostream>
#include <string.h>
#include <assert.h>

using namespace std;
//Linked list manually
template <class T>
class Node{
public:
    T value;
    Node* next;
    Node(T value){
        Node::value = value;
        next = nullptr;
    }
};

template <class T>
class LinkedList{
private:
    int length;
    Node<T>* head;
    Node<T>* tail;

public:
    int size(){
        return length;
    }

    bool empty(){
        return length == 0;
    }

    void append(T value){
        Node<T>* newNode = new Node<T>(value);
        if(empty()){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void print(){
        Node<T>* iterator = head;
        while(iterator != nullptr){
            cout << iterator->value << ' ';
            iterator = iterator->next;
        }
        cout << endl;
    }

    void pop(){
        if(size() == 1){
            delete tail; // or
//            delete head;
            tail = head = nullptr;
        }else{
            Node<T>* iterator = head;
            while(iterator->next != tail){
                iterator = iterator->next;
            }
            delete tail;
            tail = iterator;
        }
        length--;
    }

    void insert(T value, int index){
        assert(index >= 0 && index <= length );
        if(index == length){
            append(value);
        }else if(index == 0){
            Node<T>* newNode = new Node<T>(value);
            newNode->next = head;
            head = newNode;
            length++;
        }else{
            Node<T>* newNode = new Node<T>(value);
            Node<T>* iterator = head;
            for(int i = 0; i < index - 1; i++){
                iterator = iterator->next;
            }
            newNode->next = iterator->next;
            iterator->next = newNode;
            length++;
        }

    }

    void erase(int index){
        assert(index >= 0 && index < length)
        if(index = length -1){
            pop();
        }else if(index == 0){
            Node<T>* tmp = head->next;
            delete head;
            head = tmp;
            length--;
        }else{
            Node<T>* iterator = head;
            for(int i = 0; i < index - 1; i++){
                iterator = iterator->next;
            }
            Node<T>* toBeDeleted = iterator->next;
//            Node<T>* afterMe = iterator->next->next; // or
            Node<T>* afterMe = toBeDeleted->next;
            delete toBeDeleted;
            iterator->next = afterMe;
            length--;
        }
    }

    LinkedList(){
        length = 0;
        head = tail = nullptr;
    }

};

int main()
{


    LinkedList<int> ll;
    ll.append(5);
    ll.append(2);
    ll.append(8);
    ll.append(7);
    ll.insert(200, 2);
    ll.print();
//    ll.insert(30, 10); // assertion failed - assert()
    return 0;
}
