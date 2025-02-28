#include <iostream>
#include <string>

using namespace std;

// Struct: data yang dibentuk
// oleh beberapa data

struct buah
 {
    string warna;
    string rasa;
    int harga;
    float berat;
};

int main()
{
    buah apel;
    buah jeruk;

    apel.warna = "Merah";
    apel.rasa = "Manis kesat";
    apel.berat = 250.50f;
    apel.harga = 50000;

    cout << apel.warna << endl;
    cout << apel.rasa << endl;
    cout << apel.berat << endl;
    cout << apel.harga << endl;

    return 0;
}
