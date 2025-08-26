//
// Created by myasi on 8/13/2024.
//

// & - address of operator
// * - dereference operator

struct MyCar {
    char name[256];
};

void pointer() {
    int a = 92;
    std::cout << a << std::endl;

    int *pi{&a};
    *pi = 600;

    std::cout << a << std::endl;


    // sizeof(int *); // will return 4 in 32 bit machine, will return 64 bit machine
}

void beginPointer() {
    /*int myVariable{};
    printf("myVariable : %d\n", myVariable);

    int *myVariable_address = &myVariable;
    printf("&myVariable : %p\n", myVariable_address);

    *myVariable_address = 995;
    printf("myVariable : %d\n", myVariable);

    printf("Int %d : \n", *myVariable_address);*/

    int myAge = 0;
    int *myAge_address = &myAge;

    printf("Value at myAge_address : %d\n", *myAge_address);
    printf("myAge Address : %p\n", myAge_address);

    *myAge_address = 1099;

    printf("Value at myAge_address : %d\n", *myAge_address);
    printf("myAge Address : %p\n", myAge_address);
}

void print_name(MyCar *cars, size_t n_cars) {
    for (size_t i = 0; i < n_cars; i++) {
        printf("%s Car\n", cars[i].name);
    }
}

void arrayPointer() {
    MyCar myGarage[] = {"BMW", "Mercedes", "Ford"};

    print_name(myGarage, sizeof(myGarage) / sizeof(MyCar));
}

void nullPointer() {
    int *pi = nullptr;

    int a = 62;

    pi = &a;

    if (nullptr != pi) {
        std::cout << *pi << std::endl;
    }
}

void aritmethicPointer() {
    int a[]{1, 2, 3, 4, 5};
    int *pa = a;

    for (int i = 0; i < 5; i++) {
        *pa++ *= 3;
    }

    pa += 1; // can do this
    // a += 1; // error

    // *pa = 11;
    // a[1] = 12;
    // pa[2] = 13;
    // *(pa + 3) = 14;
}

char *get() {
    char c[]{"hello"};

    return c;
}

void dealocationPointer() {
    int arr[]{1, 2, 3, 4};

    for (int i = 0; i < 4; i++) {
        int a = arr[i] += arr[i + 1];
        std::cout << a << std::endl;
    }
}

void constsPointer() {
    // char c[]{"hello"};              // C can be used as a pointer
    // *c = 'H';                       // OK, can write true the pointer
    // const char *ptc{c};             // pointer to constant
    // std::cout << ptc << std::endl;  // OK, can read the memory pointed to
    // *ptc = 'Y';                     // cannot write to the memory
    // char *const cp{c};              // constant pointer
    // *cp = 'y';                      // can write true the pointer
    // cp++;                           // cannot point to anything else

    char c[]{"hello"};
    char *const cp1{c};
    *cp1 = 'H';
    const char *ptc = const_cast<const char *>(cp1);
    ptc++;
    char *const cp2 = const_cast<char *const>(ptc);
    *cp2 = 'a';
}

void allocating() {
    int *p = new int;

    delete p; // DESTRUCTERS IS CALLED
}
