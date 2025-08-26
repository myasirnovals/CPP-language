//
// Created by myasi on 8/21/2024.
//

#ifndef CLASSTEMPLATE_H
#define CLASSTEMPLATE_H

#include <iostream>

#include "ClassTemplate.h"

using namespace std;

class Animal {
protected:
    string myName;

public:
    Animal(string name) : myName(name) {
    }

    virtual string makeSound() = 0;

    string getName() {
        return myName;
    }
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {
    }

    void operator =(const Dog &d) {
        myName = d.myName;
    }

    string makeSound() override {
        return "Jing-jing";
    }
};

class Cat : public Animal {
public:
    Cat(string name) : Animal(name) {
    }

    void operator =(const Cat &c) {
        myName = c.myName;
    }

    string makeSound() override {
        return "nyaa-nyaa";
    }
};

template<typename T>
void getNameAndMakeSound(T &theAnimal) {
    cout << theAnimal.GetName() << " goes ";
    cout << theAnimal.MakeSound() << endl;
}

template<typename T>
class AnimalTemplate {
private:
    T myAnimal;

public:
    AnimalTemplate(T animal) : myAnimal(animal) {
    }

    void getNameAndMakeSound() {
        cout << myAnimal.getName() << " goes ";
        cout << myAnimal.makeSound() << endl;
    }
};

#endif //CLASSTEMPLATE_H
