#include <iostream>
using namespace std;

class A {
public:
    int data;

    // A() // if we have default arg constructor then it will give an error Ambiguity 
    // {

    // }

      // Parameterized constructor with default values
    A(int x = 5) { data = x; }
};

int main() {

    A a1; // Will not throw error

    A a2(25);


    cout << a1.data << endl;
    cout << a2.data;

    return 0;
}