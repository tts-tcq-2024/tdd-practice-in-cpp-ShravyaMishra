#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <string>
#include <stdexcept>
#include <vector>
#include <sstream>

class StringCalculator {
public:
    int add(const std::string& input);
    
private:
    std::vector<int> parseNumbers(const std::string& input, const std::string& delimiter);
    int stringToInt(const std::string& str);
};

#endif // STRINGCALCULATOR_H
