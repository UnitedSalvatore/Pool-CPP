/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 19:44:12 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 19:58:49 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	this->_horde = new Zombie[N];
	this->_count = N;
}

void	ZombieHorde::announce(void) {
	for (unsigned int i = 0; i < this->_count; i++)
		this->_horde[i].announce();
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_horde;
}
