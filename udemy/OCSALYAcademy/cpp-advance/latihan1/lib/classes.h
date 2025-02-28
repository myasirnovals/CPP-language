//
// Created by myasi on 7/29/2024.
//

#ifndef CLASSES_H
#define CLASSES_H

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
};

#endif //CLASSES_H
