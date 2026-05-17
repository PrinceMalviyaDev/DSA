// pattern - 20:

/* 

for n = 5

*        *  0    8     n * 2 - (i + 1) * 2
**      **  1    6
***    ***  2    4
****  ****  3    2
**********  4    0
****  ****  1    2
***    ***  2    4
**      **  3    6
*        *  4    8

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        for(int j = 0; j < n * 2 - (i + 1) * 2; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < n; i++){
        for(int j = 4; j >= i; j--){
            cout << "*";
        }
        for(int j = 0; j < i * 2; j++){
            cout << " ";
        }
        for(int j = 4; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern(n);
    }
}