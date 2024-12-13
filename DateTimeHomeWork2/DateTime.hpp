#ifndef DATETIME_HPP
#define DATETIME_HPP

#include <string>
namespace DateTimeName {
    class Date {
    protected:
        int year, month, day;

    public:
        Date(int year = 0, int month = 1, int day = 1);
        void addDays(int days);
        void subtractDays(int days);
        void addMonths(int months);
        void subtractMonths(int months);
        void addYears(int years);
        void subtractYears(int years);
        bool isLeapYear(int year) const;
        int daysInMonth(int year, int month) const;
        std::string toString() const;
    };

    class Time {
    protected:
        int hour, minute, second;

    public:
        Time(int hour = 0, int minute = 0, int second = 0);
        void addSeconds(int seconds);
        void subtractSeconds(int seconds);
        void addMinutes(int minutes);
        void subtractMinutes(int minutes);
        void addHours(int hours);
        void subtractHours(int hours);
        std::string toString() const;
    };

    class DateTime : public Date, public Time {
    public:
        DateTime(int year, int month, int day, int hour, int minute, int second);
        std::string format(const std::string& formatString) const;
        int differenceInSeconds(const DateTime& other) const;
        std::string differenceInTime(const DateTime& other) const;
    };
}
#endif
