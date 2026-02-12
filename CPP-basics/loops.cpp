#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i <= 10; i++){
        cout << "Hello-" << i << endl;
    }

    int i = 1;
    while(i <= 10){
        cout << "Hello-" << i << endl;
        i++;
    }

    i = 10;
    do {
        cout << "Hello-" << i << endl;
        i++;
    } while(i <= 10);

    return 0;
}