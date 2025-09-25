#include <iostream>
using namespace std;

/*Create a structure named "Rectangle" with members 
for length and width. 
Write a program that prompts the user to enter the length and width of a rectangle, 
calculates its area and perimeter using the structure, 
and displays the results on the console.*/

class Rectangle{
    public:
    int width;
    int length;
    int area;
    int perimeter;
    int calc(){
        area = width * length;
        perimeter = 2*width + 2*length;
        return area, perimeter;
    }
};

int main(){
    Rectangle rect;
    cout << "What is the length of your Rectangle?" << endl;
    cin >> rect.length;
    cout << "What is the width of your Rectangle?" << endl;
    cin >> rect.width;
    rect.calc();
    cout << "Rectangle Area: " << rect.area << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter << endl;
}