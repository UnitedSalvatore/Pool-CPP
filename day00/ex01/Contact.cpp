/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:23:54 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/19 19:06:15 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::createContact(void) {
	std::string	buff;

	std::cout << "Enter first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << std::endl;
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << std::endl;
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << std::endl;
	std::cout << "Enter login: ";
	std::getline(std::cin, this->login);
	std::cout << std::endl;
	std::cout << "Enter postal adress: ";
	std::getline(std::cin, this->postal_adress);
	std::cout << std::endl;
	std::cout << "Enter email adress: ";
	std::getline(std::cin, this->email_adress);
	std::cout << std::endl;
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << std::endl;
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, this->birthday_date);
	std::cout << std::endl;
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, this->favorite_meal);
	std::cout << std::endl;
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << std::endl;
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	std::cout << std::endl;
}

void	Contact::printShort(int index) {
	std::string	tmp;

	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << index << "|";
	tmp = this->first_name;
	if (tmp.length() > 10)
	{
		tmp[9] = '.';
		tmp.resize(10);
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << tmp << "|";
	tmp = this->last_name;
	if (tmp.length() > 10)
	{
		tmp[9] = '.';
		tmp.resize(10);
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << tmp << "|";
	tmp = this->nickname;
	if (tmp.length() > 10)
	{
		tmp[9] = '.';
		tmp.resize(10);
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << tmp << std::endl;
}

void	Contact::printFull(void) {

	std::cout << "First name: ";
	std::cout << this->first_name << std::endl;
	std::cout << "Last name: ";
	std::cout << this->last_name << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->nickname << std::endl;
	std::cout << "Login: ";
	std::cout << this->login << std::endl;
	std::cout << "Postal adress: ";
	std::cout << this->postal_adress << std::endl;
	std::cout << "Email adress: ";
	std::cout << this->email_adress << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->phone_number << std::endl;
	std::cout << "Birthday date: ";
	std::cout << this->birthday_date << std::endl;
	std::cout << "Favorite meal: ";
	std::cout << this->favorite_meal << std::endl;
	std::cout << "Underwear color: ";
	std::cout << this->underwear_color << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->darkest_secret << std::endl;
}