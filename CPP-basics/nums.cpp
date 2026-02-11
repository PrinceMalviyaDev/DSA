#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x = 10;
    long y = 100000;
    long long z = 10000000000000;

    float a = 10.1;
    float b = 10;
    cout << b << endl;   // Output will be 10,  not 10.0

    double c = 10;
    cout << c << endl;    // Output will be 10,  not 10.0000

    return 0;
}