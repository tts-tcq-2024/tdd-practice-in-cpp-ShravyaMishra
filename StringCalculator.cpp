#include "StringCalculator.h"
#include <sstream>

int StringCalculator::add(const std::string& numbers) {
    if (numbers.empty()) {
        return 0;
    }

    std::istringstream stream(numbers);
    int sum = 0, num;

    while (stream >> num) {
        sum += num;
        if (stream.peek() == ',') {
            stream.ignore();
        }
    }

    return sum;
}
