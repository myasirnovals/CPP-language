#include <iostream>

using namespace std;

int factorial(int n) {
    if (n < 1) {
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}

int nCr(int n, int r) {
    int num, denum;

    num = factorial(n);
    denum = factorial(r) * factorial(n - r);

    return num / denum;
}

int nCrRecursive(int n, int r) {
    if (n == r || r == 0) {
        return 1;
    } else {
        return nCrRecursive(n - 1, r - 1) + nCrRecursive(n - 1, r);
    }
}

int main() {
    int value1 = 5;
    int value2 = 3;

    cout << nCr(value1, value2) << endl;
    cout << nCrRecursive(value1, value2) << endl;

    return 0;
}
