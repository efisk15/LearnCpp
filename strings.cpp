#include <iostream>
#include <string>
using namespace std;

int main() {
    // string txt = "AHSIDFUGESIPHSF \\ \" \'"; // if you want to use a special character like these, you might need to put a back slash.
    // cout << "The length of the txt string is: " << txt.length() << endl;
    // cout << "The length of the txt string is: " << txt.size();

    // cout << txt[5] << endl; // index so 0 in the box means the first letter. What I have will print the 6th letter

    // txt[5] = 'H';
    // cout << txt;

    // cin can work for getting strings but it stops at the first white space, so instead we use getline().
    // Must include string at the top to use getline.
    string fullName;
    cout << "What is your full name? ";
    getline(cin, fullName);
    cout << "Your name is " << fullName;



}