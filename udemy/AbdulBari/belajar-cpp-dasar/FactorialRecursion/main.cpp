#include <iostream>

using namespace std;

int fact(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return fact(n - 1) * n;
    }
}

int Ifact(int n) {
    int f = 1;
    int i;

    if (n >= 1) {
        for (i = 1; i <= n; i++) {
            f = f * i;
        }
    }

    return f;
}

int main() {
    int r;

    r = fact(-5);
    cout << r << endl;

    r = Ifact(-5);
    cout << r << endl;

    return 0;
}
