#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1-D Array
    int arr[] = {1, 2, 3, 4, 5};
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

    cout << arr[5];  // It will not throw an error, it will throw a garbage value   

    // 2-D Array
    int arr2[2][3];  // 2 Rows, 3 Columns

    return 0;    
}