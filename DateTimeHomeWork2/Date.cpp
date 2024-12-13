#include "DateTime.hpp"
#include <iomanip>
#include <sstream>

namespace DateTimeName {

    // --- Date Class Implementation ---
    Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

    void Date::addDays(int days) {
        while (days > 0) {
            int daysInCurrentMonth = daysInMonth(year, month);
            if (day + days <= daysInCurrentMonth) {
                day += days;
                return;
            }
            else {
                days -= (daysInCurrentMonth - day + 1);
                day = 1;
                addMonths(1);
            }
        }
    }

    void Date::subtractDays(int days) {
        while (days > 0) {
            if (day > days) {
                day -= days;
                return;
            }
            else {
                days -= day;
                addMonths(-1);
                day = daysInMonth(year, month);
            }
        }
    }

    void Date::addMonths(int months) {
        int totalMonths = month + months;
        month = (totalMonths - 1) % 12 + 1;
        year += (totalMonths - 1) / 12;
    }

    void Date::subtractMonths(int months) {
        addMonths(-months);
    }

    void Date::addYears(int years) {
        year += years;
    }

    void Date::subtractYears(int years) {
        year -= years;
    }

    bool Date::isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int Date::daysInMonth(int year, int month) const {
        if (month == 2) {
            return isLeapYear(year) ? 29 : 28;
        }
        return (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
    }

    std::string Date::toString() const {
        std::ostringstream output;
        output << year << "-" << std::setw(2) << std::setfill('0') << month
            << "-" << std::setw(2) << std::setfill('0') << day;
        return output.str();
    }
}
