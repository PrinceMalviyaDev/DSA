#include <iostream>
using namespace std;

int maxProfit(int *arr, int n){
    int maxP = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            maxP = max(maxP, arr[j] - arr[i]);
        }
    }
    if(maxP < 0){
        return 0;
    }
    return maxP;
}

int main(){
    int arr[] = {7, 1, 5, 3, 6, 4};       //5
    // int arr[] = {7, 6, 5, 4, 3, 2};    //0
    // int arr[] = {1, 2, 3, 4, 5};       //4
    // int arr[] = {7, 7};                //0
    // int arr[] = {7, 1, 7};             //6
    // int arr[] = {2, 4, 1};             //2
    // int arr[] = {10, 1, 2, 3, 4};      //3
    // int arr[] = {2, 1, 2, 1, 2};       //1
    // int arr[] = {5, 4, 3, 2, 10};      //8
    // int arr[] = {1, 10};               //9

    int n = sizeof(arr) / sizeof(int);

    int result = maxProfit(arr, n);
    cout << result;
    return 0;
}