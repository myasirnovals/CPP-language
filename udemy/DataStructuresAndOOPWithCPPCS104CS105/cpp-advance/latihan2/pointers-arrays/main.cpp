#include <iostream>

using namespace std;

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int myArrayLength = 5;
    int *ptr = new int[myArrayLength]{1, 2, 3, 4, 5};

    cout << "Array Pointer" << endl;
    cout << *ptr << endl;
    cout << ptr << endl;

    cout << ptr[2] << endl;
    cout << &ptr[2] << endl;

    cout << "Using pointer increment" << endl;
    cout << "Value\tAddress" << endl;

    while (*ptr) {
        cout << *ptr << "\t";
        cout << ptr << endl;
        ptr++;
    }

    ptr = ptr - 5;
    cout << "Using Pointer Index" << endl;
    cout << "Value\tAddress" << endl;

    for (int i = 0; i < myArrayLength; i++) {
        cout << ptr[i] << "\t";
        cout << &ptr[i] << endl;
    }

    cout << "Array Elements : " << endl;
    for (int i = 0; i < sizeof(myArray) / sizeof(*myArray); i++) {
        cout << myArray[i] << endl;
    }

    myArray[2] = 50;
    myArray[3] = 73;

    cout << "New Array Elements : " << endl;
    for (int i = 0; i < sizeof(myArray) / sizeof(*myArray); i++) {
        cout << myArray[i] << endl;
    }

    return 0;
}
