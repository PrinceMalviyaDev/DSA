#include<bits/stdc++.h>
using namespace std;

void grades(int marks){
    if (marks < 25){
        cout << "Grade : F";
    } else if (marks <= 44){
        cout << "Grade : E";
    } else if (marks <= 49){
        cout << "Grade : D";
    } else if (marks <= 59){
        cout << "Grade : C";
    } else if (marks <= 79){
        cout << "Grade : B";
    } else if (marks <= 100){
        cout << "Grade : A";
    }
    cout << endl;
}

void eligibility_check(int age){
    if (age < 18){
        cout << "Not eligible for the job.";
    } else if (age <= 54){
        cout << "Eligible for the job.";
        if (age >= 55){
            cout << "But Retiring soon.";
        }
    } else {
        cout << "Retirement Time";
    }
    cout << endl;
}

void day_check(int n){
    switch (n){
        case 1:
        cout << "Monday";
        break;     // break breaks all the conditional statements in C++
        case 2:
        cout << "Tueday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;
        default:
        cout << "Invalid Check!";
    }
    cout << endl;
}

int main(){
    int marks;
    cout << "Enter the Marks: ";
    cin >> marks;
    grades(marks);

    int age;
    cout << "Enter the Age: ";
    cin >> age;
    eligibility_check(age);

    int day;
    cout << "Enter the day: ";
    cin >> day;
    day_check(day);

    return 0;
}