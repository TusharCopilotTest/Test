#include <iostream>
using namespace std;

void f(int a = 10, int b = 20);
void f(int a);

void f(int a, int b)
{
    cout<< "\na= "<<a << " and b= "<< b;
}

void f(int a)
{
    cout<< "\na= "<<a << endl ;
}

int main() {
    f();
    f(100);
    f(500, 600);

    return 0;
}
