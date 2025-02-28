#include <iostream>

using namespace std;

void Looping(int n) {
    int i = 0;

    while (i < n) {
        cout << i << endl;
        i = i + 1;
    }
}

void Pairing(int n) {
    int i = 0;

    while (i < n) {
        int j = 0;

        while (j < n) {
            cout << i << ", " << j << endl;

            j = j + 1;
        }

        i = i + 1;
    }
}

int Search(int arr[], int arrSize, int x) {
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == x) {
            cout << "Found: " << arr[i] << endl;
            return i;
        }
    }

    cout << "Element not found" << endl;
    return -1;
}

int FactorialRecursive(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * FactorialRecursive(n - 1);
    }
}

int Factorial(int value) {
    if (value == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = value; i > 1; i--) {
            result *= i;
        }

        return result;
    }
}

int SumOfDivision(int mArr[], int n, int zxArr[], int m) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            total += (mArr[i] * zxArr[j]);
        }
    }
}

int main() {
    int arr[] = {45, 21, 89, 52, 13, 97, 24, 73, 14};

    Search(arr, 9, 97);

    cout << Factorial(5) << endl;
    cout << FactorialRecursive(5) << endl;

    return 0;
}
