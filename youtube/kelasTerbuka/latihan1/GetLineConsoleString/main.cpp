#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat_input;

    // getline(cin, kalimat_input)
    cout << "Masukan Kalimat: ";
    getline(cin, kalimat_input);

    cout << "Inputan Anda: " << kalimat_input << endl;

    // jumlah kata dari input
    int posisi = 0;
    int jumlah = 0;

    while (true) {
        posisi = kalimat_input.find(" ", posisi + 1);

        jumlah++;

        if (posisi < 0) {
            break;
        }
    }

    cout << "Jumlah kata: " << jumlah << endl;

    return 0;
}
