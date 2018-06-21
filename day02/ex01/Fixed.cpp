/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:26:16 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/21 20:39:31 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int	Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int number) {
	std::cout << "Int Constructor called" << std::endl;
	this->_value = number << this->_bits;
}

Fixed::Fixed(const float number) {
	std::cout << "Float Constructor called" << std::endl;
	this->_value = (int)roundf(number * (1 << this->_bits));
}

Fixed	&Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

float	Fixed::toFloat(void) const {
	return (((float)this->_value) / (float)(1 << this->_bits));
}

int		Fixed::toInt(void) const {
	return (this->_value >> this->_bits);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &src) {
	os << src.toFloat();
	return (os);
}
