//
// Created by myasi on 7/14/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string val1 = "no";
    int val2 = 5;
    int val3 = 6;

    if (val1 == "yes" || val2 > 4 && val3 == 6) {
        cout << "great" << endl;
    } else {
        cout << "bad" << endl;
    }

    return 0;
}