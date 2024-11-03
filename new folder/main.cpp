
#include <iostream>
using namespace std;

class Complex {
   private:
    int real, imag;

   public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // add two complex objects
    Complex operator+(Complex const& obj) {
      // create a new complex object to store the result
        Complex result;

        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main() {
    Complex c1(10, 5); // 10 + 5i
    Complex c2(2, 4); // 2 + 4i

    Complex c3 = c1 + c2; // 12 + 9i
    c3.print();
}
