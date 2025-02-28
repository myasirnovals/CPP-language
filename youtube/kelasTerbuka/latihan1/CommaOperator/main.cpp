#include <iostream>
#include <string>

using namespace std;

void printData(string info, int val)
{
    cout << info << " = "<< val << endl;
}

int main()
{
    int a;
    int b;
    int c;

    a = (b = 1, printData("B", b), c = 2, printData("C", c), (b + c));

    cout << "A = " << a << endl;

    return 0;
}
