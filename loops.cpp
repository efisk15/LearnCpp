#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i = 4;
    while (i > 0) {
        cout << i << endl;
        i -= 1;
    }

    for( int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};

    for (int i : myNumbers) {
        cout << i << endl;
    }
    int w = 0;
    while (w < 10) {
        if (w == 4) {
            w++;
            continue;
        }
        cout << w << endl;
        w++;
    }
}