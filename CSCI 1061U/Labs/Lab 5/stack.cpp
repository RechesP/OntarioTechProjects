#include <iostream>
#include "stack.h"
using namespace std;

Stack::Stack(int s){ // initialize the data members accordingly
    if (s <= 0) throw std::invalid_argument ("Size cant be less than or equal to 0!");
    size = s;
    data = new int[size];
    top = -1;
}

Stack::~Stack(){ // deallocates any heap memory
    delete[] data;
}

void Stack::push(int value){ // inserts elements into the stack
    if (top == size - 1) throw std::overflow_error ("Stack overflow!");
    data[++top] = value;
    std::cout << value << " pushed into Stack" << std::endl;
}

int Stack::pop(){ // removes and returns the top element of the stack
    if (isEmpty()) throw std::underflow_error("Stack underflow!");
    return data[top--];
}

bool Stack::isEmpty(){ // returns true if stack is empty else returns false
    return top == -1;
}