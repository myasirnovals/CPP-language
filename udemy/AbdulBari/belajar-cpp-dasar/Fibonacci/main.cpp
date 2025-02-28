#include <iostream>

using namespace std;

// 0 1 1 2 3 5 8
int fib(int n) {
    int num1 = 0, num2 = 1, sum = 0, i;

    if (n <= 1) {
        return 1;
    } else {
        for (i = 2; i <= n; i++) {
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }

        return sum;
    }
}

int recFib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return recFib(n - 2) + recFib(n - 1);
    }
}

int F[10];

int mFib(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    } else {
        if (F[n - 2] == -1) {
            F[n - 2] = mFib(n - 2);
        }

        if (F[n - 1] == -1) {
            F[n - 1] = mFib(n - 1);
        }

        return F[n - 2] + F[n - 1];
    }
}

int main() {
    int i, value;

    value = 6;

    cout << fib(value) << endl;
    cout << recFib(value) << endl;

    for (i = 0; i < 10; i++) {
        F[i] = -1;
    }
    cout << mFib(value) << endl;

    return 0;
}
