/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:32:55 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 02:25:26 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void) {
	return ;
}

Pony::~Pony(void) {
	return ;
}

void	Pony::display(void) {
	std::cout << "      ,//)   " << std::endl;
	std::cout << "    ,;;' \\  " << std::endl;
	std::cout << "  ,;;' ( '\\ " << std::endl;
	std::cout << "      / '\\_)" << std::endl;
}



