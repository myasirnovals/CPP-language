#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat_1("Teppei tewas karena pakai delusion milik fatui");
    string kalimat_2("Perjalanan aether menuju dewa kebijaksanaan");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // substring, mengambil string ditengah-tengah
    // substr(idex, panjang)
    cout << kalimat_1.substr(0,6) << " dan ";
    cout << kalimat_2.substr(11,6) << endl;

    // mencari posisi dari substring
    cout << kalimat_1.find("delusion") << endl;
    cout << kalimat_2.find("dewa") << endl;

    return 0;
}
