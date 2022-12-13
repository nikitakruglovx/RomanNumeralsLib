# RomanNumerasls Libraries modul for C++
![version](https://img.shields.io/badge/version-1.0-blue)

<p align="center">
    <img src="https://i.imgur.com/Q0Kklv5.jpg" height="160">
</p>

1. Convert XXII Roman numerals to Arabic numerals
2. Convert 123 Arabic numerals to Roman numerals

# Usage:

Linked RomanNumerals header file
```C++
#include "RomanNumerals.h"
```
Then create an object of the RomanNumerals class
```C++
RomanNumerals Number;
```
There are two methods available to you

![img](https://i.imgur.com/5q1pgTE.jpg)

# Example
```C++
#include <iostream>
#include "RomanNumerals.h"

int main() {
    RomanNumerals Number;
    int OutputNumber = Number.fromRoman("MMXXII");
    std::cout << OutputNumber << std::endl;
}
```