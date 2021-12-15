#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void test()
{
	std::cout << "=====================main example in subject=====================" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;
	std::cout << "=====================make half Dog half Cat=====================" << std::endl;
	const Animal* animal[10];
	for (int i = 0; i < 5; i++)
		animal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animal[i] = new Cat();
	for (int i = 0; i < 10; i++)
		animal[i]->makeSound();
	std::cout << "=====================Delete animals=====================" << std::endl;
	for (int i = 0; i < 10; i++)
		delete animal[i];
	std::cout << "=====================Deep Copy?=====================" << std::endl;
	Cat *a = new Cat();
	Cat *b = new Cat(*a);
	a->setType("test");
	std::cout << a->getType() << std::endl;
	std::cout << b->getType() << std::endl;
	delete a;
	delete b;
}

int main(void)
{
	test();
	system("leaks main");
	return 0;
}