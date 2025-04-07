#include <iostream>
using namespace std;



// Defining a Union
union GFG {
    int G1;
    char G2;
    float G3;
};

int main() {
    
    // Create an object of GFG union
    GFG Geek;
    
    // Assign union's member variables
    Geek.G1 = 85;
    
    // Accessing union members values
    cout << Geek.G1 << endl;
    
    Geek.G2 = 'G';
    cout << Geek.G2 << endl;
    
    Geek.G3 = 989.45;
    cout <<  Geek.G3 << endl;;


    Geek.G1 = 85;
    Geek.G2 = 'G';    
    Geek.G3 = 989.45;

    cout << Geek.G1 << endl;
    cout << Geek.G2 << endl;
    cout <<  Geek.G3 << endl;
    
    return 0;
}

