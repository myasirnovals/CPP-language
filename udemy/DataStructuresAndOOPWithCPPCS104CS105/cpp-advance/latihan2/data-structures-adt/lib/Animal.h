//
// Created by myasi on 8/21/2024.
//

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

#include "string"

using namespace std;

class Animal {
protected:
    string myName;

public:
    Animal(string name) : myName(name) {
    }

    virtual string MakeSound() = 0;

    void SetName(string name) {
        if (name == "") {
            myName = "Dog";
        } else {
            myName = name;
        }
    }

    string GetName() {
        return myName;
    }
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {
    }

    void operator =(const Dog &D) {
        myName = D.myName;
    }

    string MakeSound() override {
        return "woof-woof!";
    }
};

class Cat : public Animal {
public:
    Cat(string name) : Animal(name) {
    }

    void operator =(const Cat &D) {
        myName = D.myName;
    }

    string MakeSound() override {
        return "nyaa-nyaa";
    }
};

#endif //ANIMAL_H
