// #ifndef ARRAY_HPP
// # define ARRAY_HPP

// # include <exception>

// template<typename T>
// class Array
// {
// public:
// 	Array() : _array(new T()), _n(0)
// 	{};
	
// 	Array(unsigned int n) : _array(new T[n]()), _n(n)
// 	{};

// 	Array(const Array& arg) : _n(arg._n)
// 	{
// 		int idx;
// 		T* ret = new T[arg._n]();

// 		idx = 0;
// 		while (idx < arg._n)
// 		{
// 			ret[idx] = arg._array[idx];
// 			idx++;
// 		}
// 		this->_array = ret;
// 	};

// 	Array& operator=(const Array& arg)
// 	{
// 		int idx;

// 		idx = 0;
// 		this->_n = arg._n;
// 		while (idx < this->_n)
// 		{
// 			this->_array[idx] = arg._array[idx];
// 			idx++;
// 		}
// 		return (*this);
// 	};

// 	class AccessFailed : public std::exception
// 	{
// 	public:
// 		const char* what() const throw()
// 		{
// 			return ("access failed");
// 		}
// 	};

// 	T& operator[](unsigned int n)
// 	{
// 		if (n < this->_n)
// 			return (this->_array[n]);
// 		throw AccessFailed();
// 	}

// 	~Array()
// 	{
// 		delete [] this->_array;
// 	}

// 	const unsigned int size(void)
// 	{
// 		return (this->_n);
// 	};

// private:
// 	T* _array;
// 	unsigned int _n;
// };

// #endif

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array
{
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array& arg);
	Array& operator=(const Array& arg);
	class AccessFailed : public std::exception
	{
	public:
		const char* what() const throw();
	};
	T& operator[](unsigned int n);
	const unsigned int size(void);

private:
	T* _array;
	unsigned int _n;
};

#endif