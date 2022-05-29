//
// Created by Giperx on 2022/5/27.
//

#include "Date.h"
Date::Date(int year, int month, int day) : year(year), month(month), day(day){
    totalDays = 0;
    totalDays += 365 * (year - 1) + (int)floor((year - 1) / 4) - (int)floor((year - 1) / 100) + (int)floor((year - 400) / 4);
    totalDays += totalUntilMonDays[month];
    totalDays += day - 1;
}

int Date::getMaxDay() const { return totalUntilMonDays[month + 1] - totalUntilMonDays[month]
                                        + (isLeapYear() && month == 2 ? 1 : 0);}

bool Date::isLeapYear() const {
    if(!(this->year % 4) && !(this->year % 100)) return true;
    else if(this->year % 400 == 0) return true;
    else return false;
}

int Date::distance(const Date date) const {
    return date.totalDays - totalDays;
}

void Date::show() const {
    cout << year << "Äê" << month << "ÔÂ" << day << "ÈÕ" << endl;
}