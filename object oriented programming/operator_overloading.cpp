#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload + operator to add two Complex objects
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload << operator to output a Complex object
    friend ostream& operator << (ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(3.2, 4.5);
    Complex c2(1.8, 2.3);

    Complex c3 = c1 + c2;  // Using overloaded + operator

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;  // Using overloaded << operator

    return 0;
}


// output:
// c1 = 3.2 + 4.5i
// c2 = 1.8 + 2.3i
// c1 + c2 = 4.2 + 6.8i
