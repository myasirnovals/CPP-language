//
// Created by myasi on 7/26/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

string colors(int color) {
    string colorfull;

    switch (color) {
        case 1:
            colorfull = "red";
            break;
        case 2:
            colorfull = "green";
            break;
        case 3:
            colorfull = "blue";
            break;
        default:
            colorfull = "wrong number";
    }

    return colorfull;
}

int main() {
    cout << colors(1) << endl;

    return 0;
}
