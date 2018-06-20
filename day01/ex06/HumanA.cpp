/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:37:58 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:41:33 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const char *name, Weapon &weapon):
	_weapon(weapon),
	name(name)
{
	_weapon = weapon;
}
HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

void HumanA::attack(void)
{
	std::string		type;

	type = _weapon.getType();
	if (!type.empty())
	{
		std::cout << name
				<< " attacks with his "
				<< _weapon.getType()
				<< std::endl;
	}
}
