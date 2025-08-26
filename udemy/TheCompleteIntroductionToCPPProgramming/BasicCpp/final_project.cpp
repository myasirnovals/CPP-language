//
// Created by myasi on 7/26/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Hello, welcome to the APP" << endl;
    cout << "Please create a new account" << endl;

    cout << "Choose a username: " << endl;
    string user;
    getline(cin, user);

    cout << "Choose a password: " << endl;
    string pass;
    getline(cin, pass);

    cout << "Please enter your information" << endl;

    cout << "Username: " << endl;
    string username;
    getline(cin, username);

    cout << "Password: " << endl;
    string password;
    getline(cin, password);

    while (username != user && password != pass) {
        cout << "Wrong username or password please try again" << endl;

        cout << "Username: " << endl;
        getline(cin, username);

        cout << "Password: " << endl;
        getline(cin, password);
    }

    cout << "Welcome to the coffee app" << endl;

    double balance = 5.00;

    cout << "would you like to add money to your balance? " << endl;
    string q1;
    getline(cin, q1);

    if (q1 == "yes") {
        cout << "enter how much money you want to add: " << endl;
        double add;
        cin >> add;

        cout << "your new balance is " << balance + add << " dollars" << endl;
    } else {
        cout << "alright" << endl;
    }

    cout << "Would you like a coffee today? " << endl;
    string q2;
    getline(cin, q2);

    if (q2 == "yes") {
        cout << "Please select what coffee you want " << endl;

        string coffeetype[] = {"Kaffu Chino", "Mount Blanc", "Esspresso"};
        double coffeprice[] = {5.00, 4.00, 3.00};

        cout << "1. " << coffeetype[0] << "--" << coffeprice[0] << " dollars" << endl;
        cout << "2. " << coffeetype[1] << "--" << coffeprice[1] << " dollars" << endl;
        cout << "3. " << coffeetype[2] << "--" << coffeprice[2] << " dollars" << endl;

        cout << "your choice: " << endl;
        int q3;
        cin >> q3;

        while (q3 > 3 || q3 < 1) {
            cout << "this not a valid input please try again" << endl;

            cout << "your choice: " << endl;
            cin >> q3;
        }

        if (q3 == 1) {
            cout << "you have order a " << coffeetype[0] << endl;
            cout << "The total of your order is " << coffeprice[0] << " dollars" << endl;
            cout << "you have " << balance - coffeprice[0] << " dollars left on your balance" << endl;
        } else if (q3 == 2) {
            cout << "you have order a " << coffeetype[1] << endl;
            cout << "The total of your order is " << coffeprice[1] << " dollars" << endl;
            cout << "you have " << balance - coffeprice[1] << " dollars left on your balance" << endl;
        } else if (q3 == 3) {
            cout << "you have order a " << coffeetype[2] << endl;
            cout << "The total of your order is " << coffeprice[2] << " dollars" << endl;
            cout << "you have " << balance - coffeprice[2] << " dollars left on your balance" << endl;
        } else {
            cout << "Number is wrong" << endl;
        }
    } else {
        cout << "Alright have a good day" << endl;
    }

    return 0;
}
