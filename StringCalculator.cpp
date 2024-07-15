#include "StringCalculator.h"

int StringCalculator::add(const std::string& input) {
    // Return 0 for empty input
    if (input.empty()) {
        return 0;
    }
    
    // Parse the input to get numbers
    std::vector<int> numbers = parseNumbers(input, ",\n");

    // Sum the numbers, ignoring those greater than 1000
    int sum = 0;
    for (int num : numbers) {
        if (num <= 1000) {
            sum += num;
        }
    }

    return sum;
}
