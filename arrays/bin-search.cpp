#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int low = 0;
    int high = n - 1;
    int mid;
    
    while(low <= high){
        mid = (low + high) / 2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] > key){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int key = 13;
    cout << binarySearch(arr, n, key);
    return 0;
}