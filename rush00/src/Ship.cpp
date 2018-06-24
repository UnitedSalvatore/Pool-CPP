/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:33:00 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/24 04:03:39 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

Ship::~Ship() {
	this->_alive = false;
}
