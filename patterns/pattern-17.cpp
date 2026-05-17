// pattern - 17:

/* 

for n = 5

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - i) - 1; j++){
            cout << " ";
        }
        char ch = 'A';
        for(int j = 0; j <= i; j++){
            cout << ch;
            ch++;
        }
        ch = ch - 2;
        for(int j = 0; j < i; j++){
            cout<< ch;
            ch--;
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