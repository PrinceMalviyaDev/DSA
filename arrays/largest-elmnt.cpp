#include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 4, 3, 9, 2};

    int largest = arr[0];

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++){
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element is: " << largest;

    return 0;
}