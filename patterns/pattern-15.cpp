// pattern - 15:

/* 

for n = 5

ABCDE
ABCD
ABC
AB
A

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = n; j > i; j--){
            cout << ch;
            ch++;
        }
        cout << endl;
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
}