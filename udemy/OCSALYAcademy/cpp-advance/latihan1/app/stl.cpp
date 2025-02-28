//
// Created by myasi on 8/14/2024.
//
#include <array>

using namespace std;

void stl() {
    array < int, 4 > arr{1, 2, 3, 4};

    for (int i: arr) {
        cout << i << endl;
    }
}
