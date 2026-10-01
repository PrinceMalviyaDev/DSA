#include <iostream>
using namespace std;

void selectionSort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        int minind = i;
        for(int j = i; j < n; j++){
            if (arr[j] < arr[minind]){
                minind = j;
            }
        }
        swap(arr[i], arr[minind]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {2, -3, 1, 7, 6, 5};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    return 0;
}