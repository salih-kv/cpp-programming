#include <iostream>
using namespace std;

class base {
   public:
    virtual void print() {
        cout << "print base class" << endl;
    }

    void show() {
        cout << "show base class" << endl;
    }

    void a() {
        cout << "A" << endl;
    }
};

// inheritance
class derived : public base {
   public:
    void print() {
        cout << "print derived class" << endl;
    }

    void show() {
        cout << "show derived class" << endl;
    }
};

int main() {
    derived d; // derived class object
    base *b = &d; // base class pointer

    b->print();
    b->show();
    b->a();

    return 0;
}
