// pattern - 16:

/* 

for n = 5

A
BB
CCC
DDDD
EEEEE

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern(n);
    }
    return 0;
}