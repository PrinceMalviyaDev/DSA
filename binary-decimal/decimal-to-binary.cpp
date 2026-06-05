#include<bits/stdc++.h>
using namespace std;

void decToBin(int n){
    int decimal = 0;
    int pow = 1;
    while(n > 0){
        decimal += (n % 2) * pow;
        pow = pow * 10;
        n /= 2;
    }
    cout << "The Binary equivalent is: " << decimal;
}

int main(){
    int n;
    cout << "Enter a Decimal number: ";
    cin >> n;
    decToBin(n);
    return 0;
}