//
// Created by myasi on 7/24/2024.
//

#include  <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "do you love pizza" << endl;

    string val1;
    getline(cin, val1);

    cout << "do you love burgers" << endl;

    string val2;
    getline(cin, val2);

    if (val1 == "yes" && val2 == "yes") {
        cout << "you love pizza and burgers" << endl;
    } else if (val1 == "yes" && val2 != "yes") {
        cout << "you love pizza" << endl;
    } else if (val1 != "yes" && val2 == "yes") {
        cout << "you love burgers" << endl;
    } else {
        cout << "you love none of the choices" << endl;
    }

    return 0;
}
