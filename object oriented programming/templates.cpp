#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Class template to store a pair of values
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Getter for the first value
    T1 getFirst() const {
        return first;
    }

    // Getter for the second value
    T2 getSecond() const {
        return second;
    }
};

int main() {
    cout << "Max of 3 and 7: " << getMax(3, 7) << endl;
    cout << "Max of 3.5 and 2.1: " << getMax(3.5, 2.1) << endl;
    cout << "Max of 'a' and 'z': " << getMax('a', 'z') << endl;

    // Create a Pair of int and double
    Pair<int, double> p1(5, 3.14);
    cout << "Pair 1: (" << p1.getFirst() << ", " << p1.getSecond() << ")" << endl;

    // Create a Pair of string and char
    Pair<string, char> p2("Hello", 'A');
    cout << "Pair 2: (" << p2.getFirst() << ", " << p2.getSecond() << ")" << endl;

    return 0;
}

// output:
// Max of 3 and 7: 7
// Max of 3.5 and 2.1: 3.5
// Max of 'a' and 'z': z

// Pair 1: (5, 3.14)
// Pair 2: (Hello, A)

