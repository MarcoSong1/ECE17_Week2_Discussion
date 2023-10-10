//
// Fizz Buzz implementation.
//
#include "FizzBuzz.h"
#include <iostream>

void fizzBuzz(int fizzDivisor, int buzzDivisor, int countby, int maxcount) {
    for (int i = 1; i <= maxcount; i += countby) {
        std::string output = "";
        if (i % fizzDivisor == 0) {
            output += "Fizz";
        }
        if (i % buzzDivisor == 0) {
            output += "Buzz";
        }
        if (output.empty()) {
            output += std::to_string(i);
        }
        std::cout << output << std::endl;
    }
    std::cout << "Starting Fizz Buzz:\n";
}