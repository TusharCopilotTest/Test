#include <iostream>
using namespace std;



class A {
public:
  
      // Static variable with static scope i.e. accessible
      // in whole class
    static int staticVar;
};

int A::staticVar = 1;

class Test {
  public:
    
        // Static variable with static scope i.e. accessible
        // in whole class
      int var;
      Test()
      {
        //  cout << "extern x val = " << x;
          cout << A::staticVar;
      }
  };

  	int func() {
    	  
          // Static variable
  	    static int count=0;
    	    count++;
    	    return count;
    	}
    

      class GfG {
        public:
          
              // Static data member
            static int i;
        
            GfG(){
                // Do nothing
            };
        };

        int GfG::i = 5;
int main() {
  
      // Access static variable
      // cout << A::staticVar;
      // A::staticVar++;
      // Test a;
      // cout << func() << "\n";
      // cout << func();


      GfG obj1;
      GfG obj2;
      obj1.i = 2;
      obj2.i = 3;
  
      // Prints value of i
      cout << obj1.i << " " << obj2.i;

    return 0;
}