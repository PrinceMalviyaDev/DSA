// pattern - 7:

/* 

    *
   ***
  *****
 *******
*********

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - (i + 1); j++){
            cout << " ";
        }
        for(int k = 0; k < (i * 2) + 1; k++){
            cout << "*";
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