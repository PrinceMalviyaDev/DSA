// pattern - 21:

/* 

for n = 5

*****  0    
*   *  1
*   *  2
*   *  3
*****  4


*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n - 1){
            for(int j = 0; j <  n; j++){
                cout << "*";
            }
            cout << endl;
        } else {
            cout << "*";
            for(int j = 0; j < n - 2; j++){
                cout << " ";
            }
            cout << "*" << endl;
        }
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