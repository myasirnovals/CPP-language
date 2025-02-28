//
// Created by myasi on 8/14/2024.
//

#include <vector>
using namespace std;

struct WorldYear {
    int year;

    int get_year() {
        return year;
    }

    void set_year(int new_year) {
        year = new_year;
    }
};

void add_year(WorldYear &xyear) {
    xyear.set_year(xyear.get_year() + 1);
}

void references() {
    int original = 100;
    int &original_ref = original;

    printf("Original    : %d\n", original);
    printf("Reference   : %d\n", original_ref);

    int new_value = 200;
    original_ref = new_value;

    printf("Original    : %d\n", original);
    printf("New Value   : %d\n", new_value);
    printf("Reference   : %d\n", original_ref);
}

void auto_keywords() {
    auto a = 42; // INT
    auto b = 42l; // LONG
    auto c = 42ll; // LONG LONG
    auto d = 1.0f; // FLOAT
    auto e = 1.0; // DOUBLE
    auto f = 'A'; // CHAR
    auto g = true; // BOOL

    std::pmr::vector<tuple<string, int> > myCars;

    myCars.push_back(make_tuple("BMW 5er- ", 2001));
    myCars.push_back(make_tuple("Ford Mustang- ", 1989));
    myCars.push_back(make_tuple("VW Golf GTI- ", 2010));
    myCars.push_back(make_tuple("LANDROVER- ", 2015));

    // for (tuple<string, int> myVehicles: myCars) {
    //     cout << get<0>(myVehicles) << " " << get<1>(myVehicles) << endl;
    // }

    for (auto myVehicles: myCars) {
        cout << get<0>(myVehicles) << " " << get<1>(myVehicles) << endl;
    }
}

void range_base_loop() {
    vector<string> myCars = {"bmw", "ford", "fiat", "vw", "audi"};

    for (int i = 0; i < myCars.size(); ++i) {
        cout << myCars.at(i) << endl;
    }

    cout << endl;
    cout << "RANGE BASED LOOP" << endl;

    for (string myCarModel: myCars) {
        cout << myCarModel << endl;
    }

    int myCarsYear[] = {2002, 2005, 1989, 2010};

    for (int year: myCarsYear) {
        if (year == 1989) {
            cout << "Car is too old: CLASSIC" << endl;
        } else {
            cout << year << endl;
        }
    }
}
