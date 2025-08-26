//
// Created by myasi on 7/29/2024.
//

#ifndef ACCESS_CONTROLS_H
#define ACCESS_CONTROLS_H

struct myDateAndTime {
    void add_year() {
        year++;
    }

    bool set_year(int new_year) {
        if (new_year < 2019) {
            year = 0;
            return false;
        }

        year = new_year;
        return true;
    }

    int get_year() {
        return year;
    }

private:
    int year;
};

#endif //ACCESS_CONTROLS_H
