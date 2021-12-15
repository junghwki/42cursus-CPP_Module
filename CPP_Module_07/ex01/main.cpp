#include "iter.hpp"
#include <iostream>

template <typename T>
void showArrayElement(T param){
	std::cout << param << std::endl;
}

int main(void){
	int arrInt[5] = {1, 2, 3, 4, 5};
	char arrChar[5] = {'a', 'b', 'c', 'd', 'e'};
	double arrDouble[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

	std::cout << "---------- Int ----------" << std::endl;
	::iter(arrInt, 5, &showArrayElement);
	std::cout << "-------------------------" << std::endl << std::endl;
	std::cout << "---------- Char ---------" << std::endl;
	::iter(arrChar, 5, &showArrayElement);
	std::cout << "-------------------------" << std::endl << std::endl;
	std::cout << "-------- Double ---------" << std::endl;
	::iter(arrDouble, 5, &showArrayElement);
	std::cout << "-------------------------" << std::endl;
}
