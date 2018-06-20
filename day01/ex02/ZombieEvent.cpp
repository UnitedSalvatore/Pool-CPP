/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 03:06:34 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 18:21:58 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CPP
# define ZOMBIEEVENT_CPP

# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie *zomb = new Zombie(this->_type, name);
	return zomb;
}

void	ZombieEvent::zombieChump(void)
{
	std::string	names[] = {	"Brainy Allegheny", "Undead Jack Seizmore", "Bone Toothpick Juanita",
							"Missing Mandable Melvin", "Hiro the Gutless", "Rott Wilder",
							"‘Twas the Night Before Clement", "Club Foot", "No Feet",
							"Jasmine Boneforhands", "One Eyed William", "Mmrgh",
							"Mall Roaming Kevin Eubanks", "Mort A. Mortis", "Slim James" };
	std::srand(time(0));
	Zombie zomb = Zombie(this->_type, names[std::rand() % 14]);
	zomb.announce();
}

#endif
