#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>

class Replace
{
private:
	std::string _filename;
	std::string _before;
	std::string _after;
	
public:
	Replace(std::string filename, std::string before, std::string after);
	std::string getFileName();
	std::string getBefore();
	std::string getAfter();
};

#endif