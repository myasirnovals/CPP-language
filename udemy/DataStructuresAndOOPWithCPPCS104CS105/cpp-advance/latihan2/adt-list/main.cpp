#include <iostream>

#include "list.h"

using namespace std;

int List::Get(int index) {
    if (index < 0 || index > myCount) {
        return -1;
    }

    return myItems[index];
}

void List::Insert(int index, int val) {
    if (index < 0 || index > myCount) {
        return;
    }

    int *oldArray = myItems;
    myCount++;
    myItems = new int[myCount];

    for (int i = 0, j = 0; i < myCount; i++) {
        if (index == 1) {
            myItems[i] = val;
        } else {
            myItems[i] = oldArray[j];
            j++;
        }
    }

    delete[] oldArray;
}

int List::Count() {
    int myCount = sizeof(myCount) / sizeof(myItems[0]);
    return myCount;
}


void List::Remove(int index) {
    if (index < 0 || index > myCount) {
        return;
    }

    int *oldArray = myItems;

    myCount--;
    myItems = new int[myCount];

    for (int i = 0, j = 0; i < myCount; i++, j++) {
        if (index == j) {
            j++;
        }

        myItems[i] = oldArray[j];
    }

    delete[] oldArray;
}

int List::Search(int val) {
    for (int i = 0; i < myCount; i++) {
        if (myItems[i] == val) {
            return i;
        }
    }

    return -1;
}

int main() {
    List list = List();

    list.Insert(0, 1);
    list.Insert(1, 2);
    list.Insert(2, 3);
    list.Insert(3, 4);
    list.Insert(4, 5);

    cout << "List Elements : " << endl;
    for (int i = 0; i < list.Count(); i++) {
        cout << list.Get(i) << " ";
    }

    list.Insert(2, 13);
    list.Insert(3, 14);

    cout << "List Elements : " << endl;
    for (int i = 0; i < list.Count(); i++) {
        cout << list.Get(i) << " ";
    }

    // search value 3
    cout << "Search Element 3" << endl;
    int result = list.Search(3);
    if (result == -1) {
        cout << "3 is not found" << endl;
    } else {
        cout << "3 is found at index" << result << endl;
    }

    cout << "Remove element at index 2" << endl;
    list.Remove(2);

    cout << "List Elements : " << endl;
    for (int i = 0; i < list.Count(); i++) {
        cout << list.Get(i) << " ";
    }

    // search value 3
    cout << "Search Element 61" << endl;
    result = list.Search(3);
    if (result == -1) {
        cout << "3 is not found" << endl;
    } else {
        cout << "3 is found at index" << result << endl;
    }

    return 0;
}
