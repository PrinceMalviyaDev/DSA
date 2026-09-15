#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    int low = 0;
    int high = n - 1;
    
    while(low < high){
        // int tmp = arr[high];
        // arr[high] = arr[low];
        // arr[low] = tmp;
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}