#include <iostream>
using namespace std;

/*Type of variables include int, double, char, string, bool.
You can create a variable and then add assign a number to it after.

When using Char, you have to use single quotes around the character you are assigning
to it.

bool takes true or false (no quotes around them). True outputs 1, and false will output 0.

To combine sentences and variables, use the: << thing.(See below)

Just like java to where putting a double into and int will trunkate the number and 
you will lose data.

You can declare multiple variables on the smae line

Variables can't contain whitespace or special characters or C++ keywords and they can't start with a digit

You can put const before the variable and it cannot ever be changed after that line*/
int main() {
    int Num, myNum;
    Num = 15;
    cout << Num << endl;

    myNum;
    myNum = 19;
    cout << myNum << endl;

    const bool myBool = false;
    cout << myBool << endl;

    cout << "I will be " << myNum << " years old on the 15th!\n";

    int sum = myNum + Num;
    cout << sum << endl;

    cout << 12 + Num << endl;

    int x = 3;
    double y = 2.5;
    double z = x + y;
    cout << z; 

    return 0;
}
