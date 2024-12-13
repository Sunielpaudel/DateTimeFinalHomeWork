#include "DateTime.hpp"
#include <iomanip>
#include <sstream>

namespace DateTimeName {
    // --- Time Class Implementation ---
    Time::Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

    void Time::addSeconds(int seconds) {
        int totalSeconds = hour * 3600 + minute * 60 + second + seconds;
        hour = (totalSeconds / 3600) % 24;
        minute = (totalSeconds / 60) % 60;
        second = totalSeconds % 60;
    }

    void Time::subtractSeconds(int seconds) {
        addSeconds(-seconds);
    }

    void Time::addMinutes(int minutes) {
        addSeconds(minutes * 60);
    }

    void Time::subtractMinutes(int minutes) {
        subtractSeconds(minutes * 60);
    }

    void Time::addHours(int hours) {
        addSeconds(hours * 3600);
    }

    void Time::subtractHours(int hours) {
        subtractSeconds(hours * 3600);
    }

    std::string Time::toString() const {
        std::ostringstream output;
        output << std::setw(2) << std::setfill('0') << hour << ":"
            << std::setw(2) << std::setfill('0') << minute << ":"
            << std::setw(2) << std::setfill('0') << second;
        return output.str();
    }
}