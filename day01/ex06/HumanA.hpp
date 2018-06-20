/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:37:16 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:41:31 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		Weapon			&_weapon;

	public:
		std::string		name;

		HumanA(const char *name, Weapon &weapon);
		~HumanA(void);

		void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif