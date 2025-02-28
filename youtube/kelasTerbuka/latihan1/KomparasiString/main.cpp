#include <iostream>
#include <string>

using namespace std;

int main()
{
    // perbandingan string
    string input;
    string kata_rahasia("Teppei");

    while (true) {
        cout << "Tebak kata : ";
        cin >> input;
        cout << "Kata yang di inputkan adalah : " << input << endl;

        if (input == kata_rahasia) {
            cout << "Anda benar!!!" << endl;
            break;
        }

        cout << "Tebakan Anda salah!!!" << endl
    }

    cout << "Program Selesai" << endl;

    return 0;
}
