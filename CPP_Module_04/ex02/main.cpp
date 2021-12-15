#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
void test()
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	Dog k;
	Cat l;
	//Animal a;
	//new Animal; //순수 가상함수
	std::cout << "-----------Dog and Cat Type--------------" << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << k.getType() << std::endl;
	std::cout << l.getType() << std::endl;
	std::cout << "-----------Dog and Cat makeSound()--------------" << std::endl;
	i->makeSound();
	j->makeSound();
	k.makeSound();
	l.makeSound();
	std::cout << "-----------Desturctor Called--------------" << std::endl;
	delete j;
	delete i;
}

int main(void)
{
	test();
	system("leaks main");
	return 0;
}