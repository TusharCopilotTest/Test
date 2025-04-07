#include <iostream>
using namespace std;

// Declaring structure
struct A {
    
    public:
    int i;
    char c;
    int fun()
    {
        cout << "In Fun Function";
    }
};

int main() {
    
    // Create an instance of structure
    A a;

    // Initialize structure members
    a.i = 65;
    a.c = 'A';
    a.fun();
        
    cout << a.c << ": " << a.i;

    return 0;
}