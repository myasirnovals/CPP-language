#include <iostream>

using namespace std;

double e(int x, int n) {
    double s = 1;
    double num = 1;
    double den = 1;
    int i;

    for (i = 1; i <= n; i++) {
        num *= x;
        den *= i;
        s += num / den;
    }

    return s;
}

int main() {
    cout << e(2, 10) << endl;
    return 0;
}
