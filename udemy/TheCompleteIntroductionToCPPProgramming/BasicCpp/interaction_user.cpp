//
// Created by myasi on 7/14/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Hey what do you want to eat? ";

    string ans1;
    getline(cin, ans1);

    cout << "how many slices do you want ";

    int ans2;
    cin >> ans2;

    cout << "You want to eat " << ans2 << " slices of " << ans1 << endl;

    return 0;
}