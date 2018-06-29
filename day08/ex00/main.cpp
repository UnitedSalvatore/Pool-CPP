/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:42:18 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/29 19:46:23 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int				main(int ac, char **av)
{
	srand(time(0));

	if (ac != 2)
	{
		std::cout << "Please enter one value between 0 and 9 to be searched in the list." << std::endl;
		return (0);
	}

	std::list<int> list;

	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);

	int search = atoi(av[1]);
	if (search < 0 || search > 9)
	{
		std::cout << "Please enter one value between 0 and 9 to be searched in the list." << std::endl;
		return (0);
	}

	try
	{
		int ret = easyfind(list, search);
		std::cout << "Found value [" << search << "] at index [" << ret << "]" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}

	return 0;
}
