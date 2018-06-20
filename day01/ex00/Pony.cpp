/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:32:55 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 14:01:28 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void) {
	return ;
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
