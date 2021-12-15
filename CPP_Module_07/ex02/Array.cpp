#include "Array.hpp"

template<typename T>
Array<T>::Array()
: _array(new T()), _n(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n)
: _array(new T[n]()), _n(n)
{
}

template<typename T>
Array<T>::Array(const Array &arg)
: _n(arg._n)
{
	T *ret = new T[arg._n]();
	int idx;

	idx = 0;
	while (idx < arg._n)
	{
		ret[idx] = arg._array[idx];
		idx++;
	}
	this->_array = ret;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &arg)
{
	int idx;
	idx = 0;
	this->_n = arg._n;
	while (idx < this->_n)
	{
		this->_array[idx] = arg._array[idx];
		idx++;
	}
	return (*this);
}

template<typename T>
const char* Array<T>::AccessFailed::what() const throw()
{
	return ("access failed");
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n < this->_n)
		return (this->_array[n]);
	throw AccessFailed();
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template<typename T>
const unsigned int Array<T>::size(void)
{
	return (this->_n);
}
