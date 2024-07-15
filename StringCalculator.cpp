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

