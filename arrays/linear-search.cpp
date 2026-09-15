#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    
    for(int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,1,3,5,7,6,8,9,11};
    int n = sizeof(arr) / sizeof(int);
    int key = 12;
    // int index = linearSearch(arr, n, key);
    // if(index != -1){
    //     cout << index;
    //     return 0;
    // }
    // cout << "Element not found.";
    cout << linearSearch(arr, n, key);
    return 0;
}