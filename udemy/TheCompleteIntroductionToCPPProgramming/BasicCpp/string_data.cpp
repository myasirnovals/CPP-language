//
// Created by myasi on 7/14/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string food[10] = {"pasta", "pizza", "burger", "shusi", "lasagna"};
    food[5] = "ramen";
    food[6] = "popcorn";

    cout << "pleas fill up the number 2 of the array" << endl;
    getline(cin, food[2]);

    cout << "pleas fill up the number 3 of the array" << endl;
    getline(cin, food[3]);

    for (int i = 0; i < 10; i++) {
        cout << food[i] << endl;
    }

    return 0;
}
