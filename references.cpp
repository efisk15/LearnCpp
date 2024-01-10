#include <iostream>
using namespace std;

int main() {
    struct{
        int myNum = 12;
        string myString;
        double myDoub;

    }myStruct, mystruct2;

    cout << myStruct.myNum << endl;
    mystruct2.myString = "Why hello there.";
    cout << mystruct2.myString << endl;

    // reference:
    string food = "Pizza";
    string &meal = food;
    cout << meal << endl;

    string* ptr = &food;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = "Hamburger";
    cout << *ptr << endl;
    return 0;

}