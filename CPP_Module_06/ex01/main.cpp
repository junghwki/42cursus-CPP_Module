#include "Data.hpp"

int main()
{
	t_Data data = {-1, -2, 'a', 'b'};

	uintptr_t ptr = serialize(&data);
	t_Data *data_ptr = deserialize(ptr);

	std::cout << ptr << std::endl;
	std::cout << &data << std::endl;
	std::cout << "================== before ==================" << std::endl;
	std::cout << "integer    : " << data.integer << std::endl;
	std::cout << "integer2   : " << data.integer2 << std::endl;
	std::cout << "character  : " << data.character << std::endl;
	std::cout << "character2 : " << data.character2 << std::endl;
	std::cout << "================== after ===================" << std::endl;
	std::cout << "integer1   : " << data_ptr->integer << std::endl;
	std::cout << "integer2   : " << data_ptr->integer2 << std::endl;
	std::cout << "character  : " << data_ptr->character << std::endl;
	std::cout << "character2 : " << data_ptr->character2 << std::endl;
}

// #include <iostream>

// int main(void)
// {
// 	struct dat
// 	{
// 		short a;
// 		short b;
// 	};
// 	int value = 128;
// 	// int value = 0x000000080;
// 	// std::cout << value << std::endl;
// 	dat * pd = reinterpret_cast<dat *>(&value);
// 	std::cout << pd->b;
// }

// 10000000

// 00 00 00 80
// 80 00 00 00