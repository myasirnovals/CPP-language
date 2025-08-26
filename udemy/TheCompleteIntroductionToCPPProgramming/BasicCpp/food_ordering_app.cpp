//
// Created by myasi on 7/14/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "What do you want to eat? " << endl;

    string q1;
    getline(cin, q1);

    cout << "What do you want to drink? " << endl;

    string q2;
    getline(cin, q2);

    cout << "What is the price of the food" << endl;

    double q3;
    cin >> q3;

    cout << "What is the price of the drink" << endl;

    double q4;
    cin >> q4;

    cout << "What is the tip that you want to leave" << endl;

    double q5;
    cin >> q5;

    double qt = q3 + q4 + q5 * (q3 + q4);

    cout << "Your order: is " << q1 << " and " << q2 << " as a drink " << " the total price of your order with tip is "
            << qt << " dollars " << endl;

    return 0;
}
