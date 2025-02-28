#include <iostream>
#include <fstream> // ofstream, ifstream, fstream

using namespace std;

int main()
{
    ofstream myFile;

    myFile.open("data3.txt", ios::app);
    myFile << "\nMenuliskan baris baru pada data 3";
    myFile.close();

    int a = 1234567;
    myFile.open("data1.txt", ios::out);
    myFile << "Menuliskan baris baru pada data 1\n";
    myFile << a;
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "\nMenuliskan baris baru pada data 2";
    myFile.close();

    return 0;
}
