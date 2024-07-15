#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <string>

class StringCalculator {
public:
    int add(const std::string& numbers);
private:
    bool isEmpty(const std::string& text);
    int validateNumber(const std::string& element);
    int sum(const std::string& text);
};

#endif // STRINGCALCULATOR_H



