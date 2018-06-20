/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 03:07:11 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 18:21:05 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>

class ZombieEvent {
private:
	std::string	_type;
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	void	zombieChump(void);
};

#endif
