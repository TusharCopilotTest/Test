// Online C++ compiler to run C++ program online
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
    virtual void funTest()
    {
        cout<<"funTest called"<<endl;
    }

    ~Base()
    {
        cout<<"Base detorConst called"<<endl;
    }
 
};
 
class Derive :  public Base
{
    public:
 
    Derive()
    {
        cout<<"Derive Const called"<<endl;
    }
    void funTest()
    {
        cout<<"funTest called derived"<<endl;
 
    }
    void fun()
    {
       cout<<"Fun 11 called"<<endl;
    }
 
    ~Derive()
    {
        cout<<"Derive detorConst called"<<endl;
    }
};
 
int main() {
 
    Base *ptr = new Derive();

    ptr->funTest();

    delete ptr;
    return 0;
}