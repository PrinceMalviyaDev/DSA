#include<bits/stdc++.h>
using namespace std;

int main(){

    string s, t;
    cin >> s >> t;    // normal cin is taking the string input only until the first space
    cout << s << " " << t << endl;

    cin.ignore();  // ignores the leftover \n in buffer
    
    string p;
    getline(cin, p);   // takes the entire line as input
    cout << p;
    return 0;
}