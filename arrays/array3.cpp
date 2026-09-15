#include<iostream> 
using namespace std;

void printArr(int nums[], int n){
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    return 0;
}