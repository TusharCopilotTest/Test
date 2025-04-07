#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v1, v2;

    // Capture v1 and v2 by reference
    auto byRef = [&] (int m) {
        v1.push_back(m);
        v2.push_back(m);
    };
    
    // Capture v1 and v2 by value
    auto byVal = [=] (int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };
    
    // Capture v1 by reference and v2 by value
    auto mixed = [=, &v1] (int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Push 20 in both v1 and v2
    byRef(20);
    // Push 234 in both v1 and v2
    byVal(234);
    // Push 10 in both v1 and v2
    mixed(10);

    print(v1);
    print(v2);
    
// **********************sort***********************************************

vector<int> v = {5, 1, 8, 3, 9, 2};

// Sort in descending order
sort(v.begin(), v.end(), [] (const int& a, const int&b) {
    return a > b;
});

for (int x : v)
    cout << x << " ";

// **********************Find If***********************************************
vector<int> vec = {5, 1, 8, 3, 9, 2};

auto it = find_if(vec.begin(), vec.end(), [] (const int& a) {
    return a % 3 == 0;
});

if (it != vec.end()) cout << "\nFind if = " << *it;
else cout << "No such element";
// **********************max***********************************************

 it = max_element(vec.begin(), vec.end(), [] (const int& a, const int&b) {
    return a < b;
});
    
if (it != vec.end()) cout << "\nmax = " << *it;
else cout << "No such element";

// **********************min***********************************************

it = min_element(vec.begin(), vec.end(), [] (const int& a, const int&b) {
    return a < b;
});
    
if (it != vec.end()) cout << "\nmin = " << *it;
else cout << "No such element";
    return 0;
}
