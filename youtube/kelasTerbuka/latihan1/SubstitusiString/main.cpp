#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat_1("aku suka kamu suka, siapa dia?");
    string kalimat_2("wakanda forevah!!!");

    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl << endl;

    // swap string
    kalimat_1.swap(kalimat_2);

    cout << "Swap String" << endl;
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl << endl;

    // replace, mengganti string
    kalimat_2.replace(26, 3, "Konno Junko");
    int posisi = kalimat_1.find("ah");
    kalimat_1.replace(posisi, 2, "er");

    cout << "Replace String" << endl;
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl << endl;

    // insert string
    kalimat_1.insert(8, "dan hatiku");

    cout << "Replace String" << endl;
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl << endl;

    return 0;
}
