# DateTime Class Implementation with Multiple Inheritance

This project implements a `DateTime` class using **multiple inheritance** in C++. The `DateTime` class combines functionalities from two independent parent classes: `Date` and `Time`. It provides robust functionality for date and time arithmetic and formatting while adhering to object-oriented principles.

---

## Objectives

The primary objectives of this project are:
1. **Implement Multiple Inheritance**:
   - Demonstrate multiple inheritance by creating a `DateTime` class that inherits from two independent parent classes, `Date` and `Time`.
2. **Date and Time Arithmetic**:
   - Develop methods in the `Date` class for adding and subtracting days, months, and years while handling month and year boundaries.
   - Create methods in the `Time` class for adding and subtracting seconds, minutes, and hours while handling day boundary transitions.
3. **Difference Calculation**:
   - Implement a method in `DateTime` to compute the difference between two `DateTime` objects in terms of total days, hours, minutes, and seconds.
4. **Customizable Date-Time Formatting**:
   - Extend the `DateTime` class to support customizable formatting of date and time using placeholder strings (e.g., `YYYY-MM-DD`).
   - Allow the inclusion of plain text within the format string (e.g., `"Today is YYYY-MM-DD, and the time is HH:MM"`).
5. **Robustness and Modularity**:
   - Design the `Date`, `Time`, and `DateTime` classes to encapsulate specific functionalities, making the code reusable, modular, and maintainable.

---

## Overview

### Key Features
1. **Multiple Inheritance**:
   - The `DateTime` class inherits from both `Date` and `Time` classes, demonstrating the concept of multiple inheritance.
2. **Date Arithmetic**:
   - Add or subtract days, months, and years in the `Date` class, handling month and year boundaries (e.g., adding 30 days to January 15).
3. **Time Arithmetic**:
   - Add or subtract seconds, minutes, and hours in the `Time` class, handling day boundary transitions (e.g., adding 90 minutes to 23:30).
4. **Difference Calculation**:
   - Compute the difference between two `DateTime` objects in terms of total days, hours, minutes, and seconds.
5. **Custom Formatting**:
   - Format the date and time using a flexible format string (e.g., `"YYYY-MM-DD HH:mm:SS"`) that can include plain text (e.g., `"Today is YYYY-MM-DD"`).

## Author
  **.Kailash Paudel**
  
  **.10897677@peralta.edu.**
    
