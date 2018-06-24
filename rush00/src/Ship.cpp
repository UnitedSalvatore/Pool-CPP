/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:33:00 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/24 08:39:26 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bullet.hpp"
#include "Ship.hpp"

Ship::Ship() {
	return ;
}

Ship::Ship(int const winX, int const winY) {
	this->_xMax = winX;
	this->_yMax = winY;
	this->_y = winY - 1;
	this->_x = winX / 2;
	this->_alive = true;
	this->_skin = '^';
	this->_bullets = new Bullet[this->_yMax];
}


Ship::~Ship() {
	this->_alive = false;
}

Bullet	*Ship::getBullets(void) const {
	return (this->_bullets);
}

void	Ship::fire(int y, int x) {
	if (!y)
		return ;
	for (int i = 0; i < this->_yMax; i++)
		if (!(this->_bullets[i].getAlive())) {
			this->_bullets[i].setAlive(true);
			this->_bullets[i].setCoordY(y - 1);
			this->_bullets[i].setCoordX(x);
			return ;
		}
}
