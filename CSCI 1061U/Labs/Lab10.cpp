// Lab 10 2.0 - Reches Pasternak
// 28/03/2024
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

template<typename T, size_t N>
void processArray(array<T, N>& arr)
{
    // Fill in this function as per the requirements above
    cout << "Origial: ";
    for (int i = 0; i < N; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    T temp;
    for (int i = 0; i< N; i++){
        for (int j = 0; j < N-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << "Sorted: ";
    for (int i = 0; i < N; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
    
}

int main() {
    array<int, 5> intArray = {3, 1, 2, 4, 5};
    cout << "Integer Array: " << endl;
    processArray(intArray);
    
    array<double, 3> doubleArray = {3.14, 2.718, 1.618};
    cout << "\n\nDouble Array: " << endl;
    processArray(doubleArray);
    
    array<char, 4> charArray = {'B', 'C', 'D', 'A'};
    cout << "\n\nCharacter Array: " << endl;
    processArray(charArray);
    
    cout << endl;
    
    return 0;
}