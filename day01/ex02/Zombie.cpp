/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 03:05:41 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 15:00:59 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name) {
	std::cout << "Zombie \"" << this->_name << "\" rose from the dead!" << std::endl;
}
Zombie::Zombie(void) : _type("default"), _name("default") {
	std::cout << "Zombie \"" << this->_name << "\" rose from the dead!" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie \"" << this->_name << "\" died again!" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
