#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kata("Teppei is death");

    // menampilkan data string
    cout << kata << endl;

    // mengambil karakter berdasarkan index
    cout << "Index ke 0 : " << kata[0] << endl;

    // merubah karakter pada index
    kata[0] = 'P';
    cout << kata << endl;

    // menyambung, concatenation
    string kata2(kata + " Mampuss");
    cout << kata2 << endl;

    string kata3(" tukang rajet panto");
    kata2.append(kata3);
    cout << kata2 << endl;

    return 0;
}
