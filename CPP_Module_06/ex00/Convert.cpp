#include "Convert.hpp"
#include <string>

Convert::Convert()
{
}

Convert::Convert(const Convert& arg)
{
}

Convert::Convert(std::string str)
{
	double value;

	if (str == "nan" || str == "+inf" || str == "-inf" || str == "inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str + "f" << std::endl;
		std::cout << "double : " << str << std::endl;
		return ;
	}
	else if (str == "nanf" || str == "+inff" || str == "-inff" || str == "inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str << std::endl;
		std::cout << "double : " << str.substr(0, str.length() - 1) << std::endl;
		return ;
	}
	try
	{
		value = stod(str);
	}
	catch (const std::exception& e)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		return ;
	}
	this->PrintValue(str);
}

Convert::~Convert()
{
}

Convert& Convert::operator=(const Convert& arg)
{
	return (*this);
}

void Convert::PrintValue(std::string str)
{
	double value;
	bool floatPointFlag = false;

	if (str.find(".") != std::string::npos)
	{
		floatPointFlag = true;
		if (stoi(str) == stod(str))
			floatPointFlag = false;
	}
	value = stod(str);

	std::cout << "char : ";
	if (value >= 0 && value < 32 || value == 127)
	{
		std::cout << "Non displayable" << std::endl;
	}
	else if (value < 0 || value > 127)
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	}

	std::cout << "int : ";
	if (value > 2147483647 || value < -2147483648)
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << static_cast<int>(value) << std::endl;
	}

	std::cout << "float : ";
	if (value > FLT_MAX || value < -1 * FLT_MAX)
	{
		std::cout << "impossible" << std::endl;
	}
	else
		this->PrintFloat(static_cast<float>(value), floatPointFlag);

	std::cout << "double : ";
	this->PrintDouble(static_cast<double>(value), floatPointFlag);
}


void Convert::PrintFloat(float value, bool floatPointFlag)
{
	if (floatPointFlag)
	{
		std::cout << value << "f" << std::endl;
	}
	else
		std::cout << value << ".0f" << std::endl;
}

void Convert::PrintDouble(double value, bool floatPointFlag)
{
	if (floatPointFlag)
	{
		std::cout << value << std::endl;
	}
	else
		std::cout << value << ".0" << std::endl;
}
