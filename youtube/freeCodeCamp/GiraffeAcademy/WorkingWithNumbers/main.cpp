#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int wnum = 5;
    double dnum = 5.5;

    wnum += 80;

    cout << wnum << endl;
    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.3) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.8) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(10, 3) << endl;

    return 0;
}
