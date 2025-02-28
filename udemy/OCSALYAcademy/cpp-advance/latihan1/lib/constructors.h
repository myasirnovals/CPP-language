//
// Created by myasi on 7/29/2024.
//

#ifndef CONSTRUCTORS_H
#define CONSTRUCTORS_H

class myDateAndTime {
    int year;

public:
    int get_year() {
        return year;
    }

    bool set_year(int new_year) {
        if (new_year < 2019) {
            year = 0;
            return false;
        } else {
            year = new_year;
            return true;
        }
    }

    void add_year() {
        year++;
    }

    myDateAndTime(int year_in) {
        if (!set_year(year_in)) {
            year = 2019;
        }
    }
};

#endif //CONSTRUCTORS_H
