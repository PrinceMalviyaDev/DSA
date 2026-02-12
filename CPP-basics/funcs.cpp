#include<bits/stdc++.h>
using namespace std;

// Types of Functions:

// void
// return
// parameterised
// non parameterised

void printName(string &name) {     // pass by reference (get the original value from its address)
    // cout << "Hello " << name << endl;
    name[1] = 'p';
}

int add(int num1, int num2){
    return num1 + num2;
}

int main(){
    string name;
    cin >> name; 
    printName(name);  // pass by refrence
    cout << name;   // changed the original string

    // int n1, n2;
    // cin >> n1 >> n2;
    // int sum = add(n1, n2);   // pass by value
    // cout << sum << endl;

    // // using built in methods :

    // // using math.h methods
    // int minimum = min(n1, n2);
    // int maximum = max(n1, n2);
    // cout << minimum << endl;
    // cout << maximum << endl;

    return 0;
}