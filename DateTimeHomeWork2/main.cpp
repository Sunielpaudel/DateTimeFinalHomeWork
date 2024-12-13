#include <iostream>
#include "DateTime.hpp"
using namespace DateTimeName;
int main() {
    DateTime dt1(2024, 12, 15, 14, 30, 0);
    DateTime dt2(2024, 12, 13, 12, 15, 30);

    std::cout << "DateTime 1: " << dt1.format("YYYY-MM-DD HH:mm:SS") << std::endl;
    std::cout << "DateTime 2: " << dt2.format("YYYY-MM-DD HH:mm:SS") << std::endl;

    std::cout << "Difference in time: " << dt1.differenceInTime(dt2) << std::endl;

    dt1.addDays(5);
    dt1.addHours(10);

    std::cout << "Updated DateTime 1: " << dt1.format("Today is YYYY-MM-DD, and the time is HH:mm") << std::endl;

    dt2.subtractDays(2);
    dt2.subtractHours(4);

    std::cout << "Updated DateTime 2: " << dt2.format("Today is YYYY-MM-DD, and the time is HH:mm") << std::endl;

    return 0;
}
