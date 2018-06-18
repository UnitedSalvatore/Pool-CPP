/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:13:11 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/18 21:34:24 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

Phonebook::Phonebook(void) {
	contacts_count = 0;
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

void	Phonebook::print(void) {
	unsigned int i;

	if (!this->contacts_count)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	i = 0;
	while (i < this->contacts_count)
	{
		this->contact[contacts_count].print();
		++i;
	}
}

void	Phonebook::addContact(void) {
	if (this->contacts_count == 8)
		std::cout << "Phonebook is full. Restart the program to reset it" << std::endl;
	this->contact[this->contacts_count++].createContact();
}
