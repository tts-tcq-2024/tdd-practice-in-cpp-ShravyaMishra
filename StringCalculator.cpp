#include "StringCalculator.h"
#include <sstream>
#include <regex>
#include <stdexcept>

bool StringCalculator::isEmpty(const std::string& text)
{
    return text.empty() || text == "0";
}

int StringCalculator::validateNumber(const std::string& element) 
{
    try 
    {
        int value = std::stoi(element);
        if (value < 0) 
        {
            throw std::runtime_error("Negative numbers not allowed");
        }
        return (value <= 1000);
    } 
    catch (const std::invalid_argument&) 
    {
        return false;
    }
}

int StringCalculator::sum(const std::string& text)
{
    int total = 0;
    std::regex separators("[, \n//;]+");
    std::sregex_token_iterator iter(text.begin(), text.end(), separators, -1);
    std::sregex_token_iterator iterEnd;

    while (iter != iterEnd) 
    {
        std::string part = *iter;
        if (validateNumber(part)) 
        {
            total += std::stoi(part);
        }
        ++iter;
    }

    return total;
}

int StringCalculator::add(const std::string& text)
{
    if (isEmpty(text))
    {
        return 0;
    }
    return sum(text);
}



