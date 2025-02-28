#include <iostream>
#include <string>

using namespace std;

int main()
{
    // char kata[5] = {'m', 'o', 'b', 'i', 'l'};
    // array char tidak bisa kita tambah, fiks karena array

    string kata("mobil");

    cout << kata << endl;

    string data;
    cout << "Masukan kata" << endl;
    cin >> data;
    cout << "data yang dimasukkan adalah: " << endl;
    cout << data << endl;

    return 0;
}
