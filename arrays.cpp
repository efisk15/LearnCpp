#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    // int num[5] = {10, 20, 30, 40, 50};

    // cout << cars[0] << endl;
    // cars[0] = "Toyota";
    // for(string i : cars) {
    //     cout << i << endl;
    // }
    // for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
    //     cout << num[i] << endl;
    // }

    string letter[2][2][2] = {
            {
                {"A","B"},
                {"a","b"}
            },
            {
                {"E", "F"},
                {"e", "f"}
            },

    };
    cout << letter[1][0][1];
}