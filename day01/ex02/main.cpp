/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 03:07:30 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 18:22:48 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int		main(void)
{
	ZombieEvent dead;
	dead.setZombieType("Dead");
	ZombieEvent almoust_dead;
	almoust_dead.setZombieType("Almost dead");
	Zombie	*zombie1;
	Zombie	*zombie2;
	Zombie	*zombie3;

	std::cout << "Heap" << std::endl;
	zombie1 = dead.newZombie("Shon");
	zombie2 = dead.newZombie("Fred");
	zombie3 = almoust_dead.newZombie("Your Daddy");

	zombie1->announce();
	zombie2->announce();
	zombie3->announce();

	delete zombie1;
	delete zombie2;
	delete zombie3;

	std::cout << "Stack" << std::endl;
	dead.zombieChump();
	almoust_dead.zombieChump();
}
