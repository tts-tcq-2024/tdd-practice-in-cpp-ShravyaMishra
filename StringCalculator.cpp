#include "StringCalculator.h"
#include <sstream>
#include <regex>
#include <stdexcept>

bool StringCalculator::isEmpty(const std::string& text)
{
    return text.empty() || text == "0";
}
