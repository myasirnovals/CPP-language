#include <iostream>

#include "lib/car.h"
#include "lib/unions.h"
#include "lib/destructors.h"
#include "lib/initializers.h"
#include "lib/pointers.h"

#include "app/pointer.cpp"
#include "app/stl.cpp"
#include "app/references.cpp"
#include "app/functions.cpp"

using namespace std;

int main() {
    // kamus
    Car myBMW;
    Variant v;
    // myDateAndTime md;
    myDateAndTime clock{2020};

    // algoritma
    myBMW.year = 2001;
    myBMW.isRunning = true;

    printf("IS MY BMW YEAR %d\n", myBMW.year);

    v.myInteger = 32;
    printf("MY UNION INTEGER : %d\n", v.myInteger);

    printf("MY UNION INTEGER 2 BEFORE MY DOUBLE: %d\n", v.myInteger);

    v.myDouble = 3.928428;
    printf("MY UNION DOUBLE : %f\n", v.myDouble);

    printf("MY UNION INTEGER 2 AFTER MY DOUBLE: %d\n", v.myInteger);

    // md.set_year(2012);
    // printf("YEAR: %d\n", md.get_year());
    //
    // md.set_year(2023);
    // printf("YEAR: %d\n", md.get_year());

    if (!clock.set_year(2018)) {
        clock.set_year(2019);
    }

    clock.add_year();
    printf("CLOCK: %d\n", clock.get_year());

    cout << endl;
    printf("INITIALIZING TYPES\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("D = %d\n", d);
    printf("E = %d\n", e);

    cout << endl;
    printf("POINTER\n");
    pointer();

    cout << endl;
    beginPointer();
    cout << endl;

    cout << endl;
    arrayPointer();
    cout << endl;

    cout << endl;
    dealocationPointer();
    cout << endl;

    cout << endl;
    printf("STL\n");
    stl();

    cout << endl;
    printf("REFERENCES\n");

    WorldYear myEarth;
    printf("The year is %d.\n", myEarth.get_year());

    add_year(myEarth);
    printf("The Year is %d.\n", myEarth.get_year());

    cout << endl;
    references();
    cout << endl;

    cout << endl;
    auto_keywords();
    cout << endl;

    cout << endl;
    range_base_loop();
    cout << endl;

    cout << endl;
    printf("POINTER 2\n");

    // task item;
    // item.description = "do something";
    //
    // task *pTask = new task;
    // pTask->description = "do something";
    //
    // // after using the object you can delete by :
    // delete pTask;

    queue_task("remove old wallpaper");
    queue_task("fill holes");
    queue_task("size walls");
    queue_task("hang new wallpapers");
    cout << endl;

    execute_all();
    destroy_list();

    cout << endl;
    printf("FUNCTION\n");
    cout << mult(6, 7) << endl;

    return 0;
}
