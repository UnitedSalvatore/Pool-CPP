/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:32:55 by ypikul            #+#    #+#             */
/*   Updated: 2018/07/17 03:32:57 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

#include <iostream>

Pony::Pony(void) {
	std::cout << "Pony was born :)" << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Pony died :(" << std::endl;
}

void	Pony::display(void) {
	std::cout << "      ,//)   " << std::endl;
	std::cout << "    ,;;' \\  " << std::endl;
	std::cout << "  ,;;' ( '\\ " << std::endl;
	std::cout << "      / '\\_)" << std::endl;
}
