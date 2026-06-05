#include<bits/stdc++.h>
using namespace std;

// 

void binToDec(int n){
    int num = n;
    int temp = 0;
    int pow = 1;
    while(num > 0){
        temp = temp + (num % 10) * pow;
        pow = 2 * pow;
        num = num / 10;
    }
    cout << "The Decimal equivalent is: " << temp;
}

int main(){
    int n;
    cout << "Enter a Binary Number: ";
    cin >> n;
    binToDec(n);
    return 0;
}