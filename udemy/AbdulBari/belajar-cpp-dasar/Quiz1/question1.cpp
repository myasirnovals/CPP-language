//
// Created by myasi on 9/11/2024.
//

#include <iostream>

using namespace std;

int f(int n) {
    static int i = 1;

    if (n >= 5) {
        return n;
    }

    n = n + i;
    i++;

    return f(n);
}

int main() {
    cout << f(1) << endl;
    return 0;
}
