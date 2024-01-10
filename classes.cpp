#include <iostream>
using namespace std;

//class.
class MyClass {
    public:
        int myNum;
        string mystring;

        // class method declared.
        void myMethod();

        //constructor... runs automatically when object is made
        MyClass(int x) {
            cout << "Why, " << endl;
            myNum = x;
        }
};

//class method defined.
void MyClass::myMethod() {
    cout << mystring << endl;
}

int main() {
    //object being made
    MyClass myObj(10);
    MyClass myObj2(12);

    myObj.mystring = "Hello ";

    myObj2.myNum = 12;
    myObj2.mystring = "there.";

    myObj.myMethod();
    myObj2.myMethod();
}