#include <iostream>
using namespace std;

string myFunction();

int main() {
    string word = myFunction();
    cout << word;
    return 0;
}

string myFunction() {
    cout << "Hello there." << endl;
    string myString = "Why";
    return myString;
}