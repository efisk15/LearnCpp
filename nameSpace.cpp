#include <iostream>
// iostream is the header file that lets us work with input and output objects
// such as cout.
// You must reference namespace std in some way to be able to use 
// names for objects or variables like cout which is pronounsed c-out
// which allows me to print something to the screen.
// you can either do this in the form be low:    std::
// or you can reference it under iostream with:   using namespace std

// \n creates a new line. Without a new line, a server will automatically
// input a % after your output. You can put as many \n in a row as you want.
// endl as shown below does the exact same thing.
// other special characters to know are: \t for tab, \\ for backslash character
// and \" for double quote character.
int main() {
    std::cout << "Hello World! \n";
    std::cout << "How are you? \n\n";
    std::cout << "I am good, how are you?" << std::endl ;


    return 0;
}