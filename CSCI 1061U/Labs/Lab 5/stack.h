#ifndef STACK
#define STACK

#include <iostream>
using namespace std;

class Stack {
    private:
        int* data; // pointer to the heap memory for holding the data
        int top; // the top most integer of the stack
        int size; // the size of the stack
    public:
        Stack(int s); // initialize the data members accordingly
        ~Stack(); // deallocates any heap memory
        void push(int value); // inserts elements into the stack
        int pop(); // removes and returns the top element of the stack
        bool isEmpty(); // returns true if stack is empty else returns false
};

#endif