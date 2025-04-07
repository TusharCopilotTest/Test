#include <iostream>
#include "Test.cpp"
using namespace std;

// Telling compiler that variable x is extern variable
// and has been defined elsewhere
extern int x;

void fun()
{
  x++;
}

int main() {
  
      // Printing the value of x
    cout << x;
    fun();
    cout << x;
    Test test;

    return 0;
}

