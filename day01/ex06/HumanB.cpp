/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:37:16 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:41:28 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const char *name):
	name(name) {}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack(void)
{
	if (_weapon)
	{
		std::cout << name
				<< " attacks with his "
				<< _weapon->name
				<< std::endl;
	}
}
