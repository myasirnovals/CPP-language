//
// Created by myasi on 7/25/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declaration
    double cP = 2.00;

    // Algorithm
    cout << "Do you want to take a coffee" << endl;
    string q1;
    getline(cin, q1);

    cout << "Enter your balance: " << endl;
    double balance;
    cin >> balance;

    if (q1 == "yes" && balance >= cP) {
        cout << "here is your coffee" << endl;
        cout << "new balance: " << balance - cP << " dollars" << endl;
    } else if (q1 == "yes" && balance < cP) {
        cout << "you don't have enough money sorry" << endl;
    } else {
        cout << "have a good day" << endl;
    }

    return 0;
}
