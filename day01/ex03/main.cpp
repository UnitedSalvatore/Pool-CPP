/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 19:41:14 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:02:19 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int main(void) {
	std::cout << "Creating horde" << std::endl;
	ZombieHorde horde = ZombieHorde(10);
	std::cout << "-- Horde scream" << std::endl;
	horde.announce();
	std::cout << "Horde silent" << std::endl;
}
