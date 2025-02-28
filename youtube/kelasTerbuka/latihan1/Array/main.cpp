#include <iostream>

using namespace std;

int main() {
    // membuat array
    int nilai[6];

    int value[5] = {1, 2, 3, 4, 5};

    // memasukan nilai ke dalam array
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << &nilai[0] << ", Nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << ", Nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << ", Nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << ", Nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << ", Nilainya adalah: " << nilai[4] << endl;

    int *ptr = nilai;
    *(ptr + 2) = 6;

    nilai[3] = 7;

    cout << endl;
    cout << &nilai[0] << ", Nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << ", Nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << ", Nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << ", Nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << ", Nilainya adalah: " << nilai[4] << endl;

    cout << endl;
    cout << "menghitung panjang array" << endl;
    cout << "ukuran array = " << sizeof(nilai) << " byte" << endl;
    cout << "jumlah member array = " << sizeof(nilai) / sizeof(int) << endl;

    return 0;
}
