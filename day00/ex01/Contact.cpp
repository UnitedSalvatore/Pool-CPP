/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:23:54 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/18 21:29:50 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::createContact(void) {
	std::string	buff;

	std::cout << "Enter first name: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter last name: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter nickname: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter login: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter postal adress: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter email adress: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter phone number: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
}

void	Contact::print(void) {
	return ;
}
