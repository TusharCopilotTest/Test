#include <iostream>
 
#include<iostream>
#include <memory>
using namespace std;
 
class Base
{
    private:
    int a;
    public:
    Base()
    {
        cout<<"Base Const called"<<endl;
    }

    static Base& getinstance()
    {
        static Base obj;
        return obj;
    }
    virtual void funTest()
    {
        cout<<"funTest called"<<endl;
    }

    ~Base()
    {
        cout<<"Base detorConst called"<<endl;
    }
 
};

int main() {
 
    int* ptr1, ptr2; // declaration test
    int *prt3, ptr4; // declaration test
   Base::getinstance();
    return 0;
}