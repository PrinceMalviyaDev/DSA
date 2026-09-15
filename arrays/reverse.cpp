#include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = 5;

    int arb[n];

    for(int i = 0; i < n; i++){
        arb[i] = arr[n - (i + 1)];
    }

    for(int i = 0; i < n; i++){
        arr[i] = arb[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}