#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter(T* array, int len, void (*func)(const T&))
{
	int idx;

	idx = 0;
	while (idx < len)
	{
		func(array[idx]);
		idx++;
	}
}

#endif