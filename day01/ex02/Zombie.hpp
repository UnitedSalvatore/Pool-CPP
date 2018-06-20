/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 03:06:07 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 19:16:58 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
private:
	std::string	_type;
	std::string	_name;
public:
	Zombie(std::string type, std::string name);
	Zombie(void);
	~Zombie(void);

	void	announce(void);
};

#endif
