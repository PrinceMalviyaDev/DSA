// pattern - 18:

/* 

for n = 5

E
DE
CDE
BCDE
ABCDE

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        char ch = 'E';
        ch = ch - i;
        for(int j = 0; j <= i; j++){
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
    return 0;
}