#include "DateTime.hpp"
#include <sstream>
#include <iomanip>
#include <cmath>

namespace DateTimeName {
    // --- DateTime Class Implementation ---
    DateTime::DateTime(int year, int month, int day, int hour, int minute, int second)
        : Date(year, month, day), Time(hour, minute, second) {}

    std::string DateTime::format(const std::string& formatString) const {
        std::ostringstream output;

        for (size_t i = 0; i < formatString.size(); ++i) {
            if (formatString[i] == 'Y' && formatString.substr(i, 4) == "YYYY") {
                output << year;
                i += 3;
            }
            else if (formatString[i] == 'M' && formatString.substr(i, 2) == "MM") {
                output << std::setw(2) << std::setfill('0') << month;
                i += 1;
            }
            else if (formatString[i] == 'D' && formatString.substr(i, 2) == "DD") {
                output << std::setw(2) << std::setfill('0') << day;
                i += 1;
            }
            else if (formatString[i] == 'H' && formatString.substr(i, 2) == "HH") {
                output << std::setw(2) << std::setfill('0') << hour;
                i += 1;
            }
            else if (formatString[i] == 'm' && formatString.substr(i, 2) == "mm") {
                output << std::setw(2) << std::setfill('0') << minute;
                i += 1;
            }
            else if (formatString[i] == 'S' && formatString.substr(i, 2) == "SS") {
                output << std::setw(2) << std::setfill('0') << second;
                i += 1;
            }
            else {
                output << formatString[i];
            }
        }

        return output.str();
    }

    int DateTime::differenceInSeconds(const DateTime& other) const {
        int totalSecondsThis = (year * 365 * 24 * 3600) + (month * 30 * 24 * 3600) + (day * 24 * 3600) +
            (hour * 3600) + (minute * 60) + second;
        int totalSecondsOther = (other.year * 365 * 24 * 3600) + (other.month * 30 * 24 * 3600) +
            (other.day * 24 * 3600) + (other.hour * 3600) + (other.minute * 60) + other.second;

        return std::abs(totalSecondsThis - totalSecondsOther);
    }

    std::string DateTime::differenceInTime(const DateTime& other) const {
        int totalSecondsThis = (year * 365 * 24 * 3600) + (month * 30 * 24 * 3600) + (day * 24 * 3600) +
            (hour * 3600) + (minute * 60) + second;
        int totalSecondsOther = (other.year * 365 * 24 * 3600) + (other.month * 30 * 24 * 3600) +
            (other.day * 24 * 3600) + (other.hour * 3600) + (other.minute * 60) + other.second;

        int diffInSeconds = std::abs(totalSecondsThis - totalSecondsOther);

        int days = diffInSeconds / 86400;
        diffInSeconds %= 86400;
        int hours = diffInSeconds / 3600;
        diffInSeconds %= 3600;
        int minutes = diffInSeconds / 60;
        int seconds = diffInSeconds % 60;

        std::ostringstream result;
        result << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
        return result.str();
    }
}
