/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 18:44:41 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/19 19:07:42 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

int		main(void)
{
	Phonebook	phonebook;
	std::string	buff;

	std::cout << "**********************************************" << std::endl;
	std::cout << "Please, enter \"ADD\" \"SEARCH\" or \"EXIT\" command" << std::endl;
	std::getline(std::cin, buff);

	while (buff.compare("EXIT"))
	{
		if (!buff.compare("ADD"))
			phonebook.addContact();
		else if (!buff.compare("SEARCH"))
			phonebook.print();
		else
			std::cout << "Undefined command" << std::endl;
		std::cout << std::endl << "**********************************************" << std::endl;
		std::cout << "Please, enter \"ADD\" \"SEARCH\" or \"EXIT\" command" << std::endl;
		std::getline(std::cin, buff);
	}
	return (0);
}
