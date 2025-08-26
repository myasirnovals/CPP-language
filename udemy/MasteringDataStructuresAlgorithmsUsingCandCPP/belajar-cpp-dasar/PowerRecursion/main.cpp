#include <iostream>

using namespace std;

int power(int m, int n) {
    if (n < 1) {
        return 1;
    } else {
        return power(m, n - 1) * m;
    }
}

int power1(int m, int n) {
    if (n < 1) {
        return 1;
    } else if (n % 2 == 0) {
        return power1(m * m, n / 2);
    } else {
        return m * power1(m * m, (n - 1) / 2);
    }
}

int main() {
    int r = power(2, 9);
    cout << r << "\n";

    int s = power1(2, 9);
    cout << s << "\n";

    return 0;
}
