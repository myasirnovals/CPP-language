//
// Created by myasi on 7/13/2024.
//

#include <iostream>

using namespace std;

int main() {
    string try1 = "a simple sentence hello hi 12";
    double size1 = try1.max_size();
    int find1 = try1.find("simple", 0);
    try1[0] = 'H';
    try1.clear();

    cout << try1 << endl;

    return 0;
}
