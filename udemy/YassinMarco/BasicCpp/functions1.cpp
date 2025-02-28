//
// Created by myasi on 7/14/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

void cart() {
    string car[3] = {};
    car[0] = "bmw";
    car[1] = "audi";
    car[2] = "honda";

    int qt_cars[3] = {};
    qt_cars[0] = 3;
    qt_cars[1] = 4;
    qt_cars[2] = 12;

    cout << qt_cars[0] + qt_cars[1] + qt_cars[2] << endl;
}

int main() {

    cout << "The quantity of cars in stock is ";
    cart();

    return 0;
}
