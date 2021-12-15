#include "contact.hpp"
#include <iomanip>
#include <cstdlib>

void	del_oldest_contact(Contact *contact)
{
	int idx;

	idx = 0;
	while (idx < 7)
	{
		contact[idx] = contact[idx + 1];
		idx++;
	}
}

void	search_func(Contact *contact, int max_idx)
{
	int idx;
	char c;
	std::string input_idx;
	std::string ret_value;

	idx = 0;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" <<std::endl;
	while (idx <= max_idx)
	{
		std::cout << std::setw(10) << idx << '|';
		ret_value = contact[idx].get_first_name();

		if (ret_value.length() > 10)
			std::cout << std::setw(9) << ret_value.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contact[idx].get_first_name() << '|';


		ret_value = contact[idx].get_last_name();
		if (ret_value.length() > 10)
			std::cout << std::setw(9) << ret_value.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contact[idx].get_last_name() << '|';


		ret_value = contact[idx].get_nickname();
		if (ret_value.length() > 10)
			std::cout << std::setw(9) << ret_value.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contact[idx].get_nickname() << '|';

		std::cout << std::endl;
		idx++;
	}
	std::cout << "확인할 INDEX를 입력하세요" << std::endl;
	std::getline(std::cin, input_idx);
	if (input_idx[0] < '0' || input_idx[0] > '9' || input_idx[1] || input_idx[0] - '0' > max_idx)
		std::cout << "Error" << std::endl;
	else
	{
		c = input_idx[0];
		std::cout << "first name:" << contact[c - '0'].get_first_name() << std::endl;
		std::cout << "last name:"  << contact[c - '0'].get_last_name() << std::endl;
		std::cout << "nickname:"  << contact[c - '0'].get_nickname() << std::endl;
		std::cout << "phone number:"  << contact[c - '0'].get_phone_number() << std::endl;
		std::cout << "darkest secret:"  << contact[c - '0'].get_darkest_secret() << std::endl;
	}
}

void add_func(Contact *contact, int idx)
{
	std::string input_line;

	std::cout << "first name 을 입력해주세요" << std::endl;
	std::getline(std::cin, input_line);
	if (std::cin.eof())
		exit(0);
	contact[idx].set_first_name(input_line);
	std::cout << "last name 을 입력해주세요" << std::endl;
	if (std::cin.eof())
		exit(0);
	std::getline(std::cin, input_line);
	contact[idx].set_last_name(input_line);
	std::cout << "nick name 을 입력해주세요" << std::endl;
	if (std::cin.eof())
		exit(0);
	std::getline(std::cin, input_line);
	contact[idx].set_nickname(input_line);
	std::cout << "phone number 을 입력해주세요" << std::endl;
	if (std::cin.eof())
		exit(0);
	std::getline(std::cin, input_line);
	contact[idx].set_phone_number(input_line);
	std::cout << "darkest secret 을 입력해주세요" << std::endl;
	if (std::cin.eof())
		exit(0);
	std::getline(std::cin, input_line);
	contact[idx].set_darkest_secret(input_line);
}

int	main(void)
{
	int idx;
	Contact contact[8];
	std::string input_line;

	idx = -1;
	std::cout << "명령어를 입력하세요 (ADD, SEARCH, EXIT)" << std::endl;
	while (std::getline(std::cin, input_line))
	{
		if (input_line == "ADD" || input_line == "add")
		{
			if (idx > 6)
				del_oldest_contact(contact);
			else
				idx++;
			add_func(contact, idx);
		}
		else if (input_line == "SEARCH" || input_line == "search")
		{
			search_func(contact, idx);
		}
		else if (input_line == "EXIT" || input_line == "exit")
		{
			exit(0);
		}
		else
		{
			std::cout << "Error" << std::endl;
		}
		std::cout << "명령어를 입력하세요 (ADD, SEARCH, EXIT)" << std::endl;
	}
	return (0);
}