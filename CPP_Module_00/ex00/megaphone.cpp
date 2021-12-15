/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwki <junghwki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:53:13 by junghwki          #+#    #+#             */
/*   Updated: 2021/10/26 15:53:15 by junghwki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int idx;
	int	str_idx;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		idx = 1;
		while (idx < argc)
		{
			str_idx = 0;
			while (argv[idx][str_idx])
			{
				if (argv[idx][str_idx] >= 'a' && argv[idx][str_idx] <= 'z')
					argv[idx][str_idx] = argv[idx][str_idx] - 'a' + 'A';
				str_idx++;
			}
			idx++;
		}
		idx = 1;
		while (argv[idx])
		{
			std::cout << argv[idx];
			idx++;
		}
	}
	std::cout<< "\n";
	return (0);
}
