#include<bits/stdc++.h>
using namespace std;

void modifyArray(int arr[]){   //arrays are always passed by reference even without the empersend operator(&)(address)
    arr[2] = 10;
}

int main(){
    int arr[] = {1,2,3,4,5};
    modifyArray(arr);  
    cout << arr[2];   //10  Becuase when we pass the array in a function, it is always a "Pass by Reference".
    return 0;
}