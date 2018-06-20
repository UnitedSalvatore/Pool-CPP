/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:37:16 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:41:18 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {
	private:
		std::string		_type;

	public:
		std::string		name;

		Weapon(const char *name);
		~Weapon();

		std::string		getType(void);
		void			setType(const char *type);
};

#endif