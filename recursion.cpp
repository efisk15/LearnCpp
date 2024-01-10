#include <iostream>
using namespace std;

int sum (int t) {
    if (t > 0) {
        return t + sum(t-1);
    }
    else {
        return 0;
    }
}

int main() {
    int result = sum(10);
    cout << result;
    return 0;
}