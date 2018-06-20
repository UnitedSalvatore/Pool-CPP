/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:37:16 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:41:21 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const char *name):
	name(name)
{
}
Weapon::~Weapon(void) {}

std::string		Weapon::getType(void)
{
	return (this->_type);
}

void			Weapon::setType(const char *type)
{
	this->_type = std::string(type);
}
