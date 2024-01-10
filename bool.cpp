#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // int x = 3;
    // int y = 6;
    // cout << (x < y) << endl;

    // Must use double equals to compare numbers

    // int age;
    // cout << "What is your age? ";
    // cin >> age;
    // if (age > 18) {
    //     cout << "You are old enough to vote!";
    // }
    // else if ( age == 18) {
    //     cout << "Congradualtions on becoming old enough to vote!";
    // }
    // else {
    //     cout << "You are too young to vote!";
    // }

    // int time = 20;
    // string result = (time < 18) ? "Good day" : "Good evening.";
    // cout << result;
    int day = 2;

    switch(day) {
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
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
        default:
        cout << "Sunday";
    }

    
}