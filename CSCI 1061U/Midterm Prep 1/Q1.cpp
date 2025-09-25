#include <iostream>
using namespace std;

template <typename T>
class Rectangle {
public:
    Rectangle(T w, T l) {
        length = l;
        width = w;
    }
    T getWidth() const {
        return width;
    }

    T getLength() const {
        return length;
    }

    T perimeter() const {
        return 2 * (width + length);     
    }

    T area() const {
        return width * length; 
    }
private:
    T length; 
    T width; 
};

int main() {
    Rectangle a{2.5, 3.7};

    cout << "a: length = " << a.getLength() << "; width = "
        << a.getWidth() << "; perimeter = " << a.perimeter()
        << "; area = " << a.area() << '\n';

    return 0;
}