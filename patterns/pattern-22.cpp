// pattern - 21:

/* 

for n = 5
                                     
5 5 5 5 5 5 5 5 5       0 0 0 0 0 0 0 0 0
5 4 4 4 4 4 4 4 5       0 1 1 1 1 1 1 1 0
5 4 3 3 3 3 3 4 5       0 1 2 2 2 2 2 1 0
5 4 3 2 2 2 3 4 5       0 1 2 3 3 3 2 1 0
5 4 3 2 1 2 3 4 5       0 1 2 3 4 3 2 1 0
5 4 3 2 2 2 3 4 5       0 1 2 3 3 3 2 1 0
5 4 3 3 3 3 3 4 5       0 1 2 2 2 2 2 1 0 
5 4 4 4 4 4 4 4 5       0 1 1 1 1 1 1 1 0
5 5 5 5 5 5 5 5 5       0 0 0 0 0 0 0 0 0
                
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int  n){
    for(int i = 0; i < n * 2 - 1; i++){
        for(int j = 0; j < n * 2 - 1; j++){
            int top = i;
            int bottom = (n * 2 - 2) - i;
            int right = (n * 2 - 2) - j;
            int left = j;
            cout << n - min(min(top, bottom), min(right, left));
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