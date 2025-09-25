#include <iostream>
#include "stack.h"
using namespace std;

// int main(){
//     try {
//         Stack myStack(2);
//         myStack.push(10);
//         myStack.push(20);
//         myStack.push(30); // Should throw overflow exception
//     }
//     catch (const exception& e) {
//         cout << "Exception caught: " << e.what() << endl;
//     }
//     return 0;
// }

int main() {
    try{
        Stack myStack(2);
        myStack.push(10);
        myStack.push(20);
        cout << "Popped element: " << myStack.pop() << endl;
        cout << "Popped element: " << myStack.pop() << endl;
        cout << "Popped element: " << myStack.pop() << endl; // Should throw underflow exception
    } 
    catch (const exception& e){
    cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}