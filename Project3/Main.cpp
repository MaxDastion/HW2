#include <iostream>
#include <Windows.h>


using namespace std;

template<typename T>
class stack {
private:
    T* data;
    int size;
    int _top;
public:


    
    stack(int size) : size(size), _top(-1) {
        data = new T[size];
    }
    ~stack() {
   
    }
    void push(T value) {
        if (_top == size - 1) {
            cout<< "Stack is full"<< endl;
        }
        _top++;
        data[_top] = value;
    }
    void pop() {
        if (_top == -1) {
            cout<< "Stack is empty"<< endl;
        }
        _top--;
    }
    void top() {
        if (_top == -1) {
            cout<< "Stack is empty"<< endl;
        }
        
    }
    bool empty() {
        return _top == -1;
    }
};

void main() {

stack<int> s(3);
s.push(1);    
s.push(2);    
s.push(3);    
s.push(4);    

s.pop();   

s.~stack();
}




