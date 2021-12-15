#include "Replace.hpp"

Replace::Replace(std::string filename, std::string before, std::string after)
{
	this->_filename = filename;
	this->_before = before;
	this->_after = after;
}

std::string Replace::getFileName()
{
	return (_filename);
}

std::string Replace::getBefore()
{
	return (_before);
}

std::string Replace::getAfter()
{
	return (_after);
}