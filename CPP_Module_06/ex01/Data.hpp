#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <string>

typedef struct s_Data
{
	int integer;
	int integer2;
	char character;
	char character2;
}		t_Data;

typedef struct s_Data2
{
	unsigned int integer;
	unsigned int integer2;
	unsigned int character;
	unsigned int character2;
}		t_Data2;

uintptr_t serialize(t_Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

t_Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<t_Data *>(raw);
}

// t_Data2* deserialize(uintptr_t raw)
// {
// 	return reinterpret_cast<t_Data2 *>(raw);
// }

#endif