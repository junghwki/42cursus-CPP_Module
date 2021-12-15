#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cfloat>

class Convert
{
private:
	Convert();
	Convert(const Convert& arg);
	Convert& operator=(const Convert& arg);
public:
	Convert(std::string str);
	~Convert();
	void PrintValue(std::string str);
	void PrintFloat(float value, bool floatPointFlag);
	void PrintDouble(double value, bool floatPointFlag);

};

#endif