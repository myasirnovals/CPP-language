#include "lib/ClassTemplate.h"

int main() {
    Dog dog = Dog("Agus Surugus");
    AnimalTemplate<Dog> dogTemplate(dog);
    dogTemplate.getNameAndMakeSound();

    Cat cat = Cat("Tantang Suratang");
    AnimalTemplate<Cat> catTemplate(cat);
    catTemplate.getNameAndMakeSound();

    Cat cat2 = Cat("purwarupa");
    AnimalTemplate<Cat> catTemplate2(cat2);
    catTemplate2.getNameAndMakeSound();

    return 0;
}
