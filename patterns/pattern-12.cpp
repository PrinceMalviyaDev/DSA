// pattern - 11:

/* 

for n = 5

1        1
12      21
123    321
1234  4321
1234554321


for n = 3

1    1
12  21
123321

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < i + 2; j++){
            cout << j;
        }
        for(int j = 0; j < n * 2 - (i + 1) * 2; j++){
            cout << " ";
        }
        for(int j = i + 1; j > 0; j--){
            cout << j;
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
    return 0;
}