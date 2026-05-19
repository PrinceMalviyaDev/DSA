// pattern - 13:

/* 

for n = 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/


#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << start;
            start ++;
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