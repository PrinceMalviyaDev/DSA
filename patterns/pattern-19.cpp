// pattern - 19:

/* 

for n = 5

**********
****  ****
***    ***
**      **
*        *
*        * 5    8
**      ** 6    6
***    *** 7    4
****  **** 8    2
********** 9    0

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int space = 8;
    for(int i = 0; i < n * 2; i++){
        if(i < n){
            for(int j = 0; j < n - i; j++){
                cout << "*";
            }
            for(int j = 0; j < i * 2; j++){
                cout << " ";
            }
            for(int j = 0; j < n - i; j++){
                cout<< "*";
            }
            cout << endl;
        } else {
            for(int j = 0; j <= i - n; j++){
                cout << "*";
            }
            for(int j = 0; j < space; j++){
                cout << " ";
            }
            space = space - 2;
            for(int j = 0; j <= i - n; j++){
                cout<< "*";
            }
            cout << endl;
        }
    }
}

int main(){
    int t;
    cin  >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern(n);
    }
    return 0;
}