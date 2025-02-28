//
// Created by myasi on 7/25/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "create a password: " << endl;

    string pass;
    getline(cin, pass);

    cout << "what is the password" << endl;

    string confirm;
    getline(cin, confirm);

    while (confirm != pass) {
        cout << "wrong password please try again: " << endl;
        getline(cin, confirm);
    }

    cout << "you are in";

    return 0;
}
