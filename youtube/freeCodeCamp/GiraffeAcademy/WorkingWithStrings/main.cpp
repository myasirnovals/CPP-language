#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << "Output: " << phrase << endl;
    cout << "Length: " << phrase.length() << endl;
    cout << "Index:  " << phrase[0] << endl;

    phrase[0] = 'B';
    cout << "Output: " << phrase << endl;

    cout << "Search: " << phrase.find("Academy", 0) << endl;
    cout << "Substr: " << phrase.substr(8, 3) << endl;

    return 0;
}
