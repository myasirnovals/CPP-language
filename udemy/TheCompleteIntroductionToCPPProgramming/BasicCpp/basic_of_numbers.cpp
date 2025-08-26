//
// Created by myasi on 7/13/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 25;
    double b = 56.7;
    double c = 95.45;
    double d = 87.23;

    double x = a / b;
    double y = c * d;
    double z = c * x / a + (b + y) * 9;

    double op1 = round(z);
    double op2 = sqrt(a);

    cout << z << endl;
    cout << op1 << endl;

    /*sqrt function*/
    cout << op2 << endl;

    return 0;
}