/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 03:05:41 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:01:50 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name) {
	std::cout << "Zombie \"" << this->_name << "\" rose from the dead!" << std::endl;
}
Zombie::Zombie(void) : _type("default") {

	std::string	names[] = {	"Brainy Allegheny", "Undead Jack Seizmore", "Bone Toothpick Juanita",
						"Missing Mandable Melvin", "Hiro the Gutless", "Rott Wilder",
						"‘Twas the Night Before Clement", "Club Foot", "No Feet",
						"Jasmine Boneforhands", "One Eyed William", "Mmrgh",
						"Mall Roaming Kevin Eubanks", "Mort A. Mortis", "Slim James" };
	this->_name = names[std::time(0) % 14];
	std::cout << "Zombie \"" << this->_name << "\" rose from the dead!" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie \"" << this->_name << "\" died again!" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
