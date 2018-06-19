/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:13:11 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/19 19:09:41 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(void) {
	contacts_count = 0;
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

void	Phonebook::print(void) {
	std::string		buff;
	unsigned int	i;

	if (!this->contacts_count)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "Index" << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "First Name" << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "Last Name" << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "Nick Name" << std::endl;
	i = 0;
	while (i < this->contacts_count)
	{
		this->contact[i].printShort(i + 1);
		++i;
	}
	std::cout << "Enter index from 1 to 8: ";
	std::getline(std::cin, buff);
	if (buff[1] || buff[0] < '1' || buff[0] > '8')
		std::cout << "Incorrect data entered" << std::endl;
	else
	{
		i = atoi(buff.c_str());
		if (i > this->contacts_count)
			std::cout << "Contact doesn't exist" << std::endl;
		else
			this->contact[i - 1].printFull();
	}
}

void	Phonebook::addContact(void) {
	if (this->contacts_count == 8)
		std::cout << "Phonebook is full. Restart the program to reset it" << std::endl;
	this->contact[this->contacts_count++].createContact();
}
