//
// Created by myasi on 8/22/2024.
//

#ifndef LIST_H
#define LIST_H

class List {
private:
    int *myItems;
    int myCount;

public:
    List();

    ~List();

    int Get(int index);

    void Insert(int index, int val);

    int Search(int val);

    void Remove(int index);

    int Count();
};

#endif //LIST_H
