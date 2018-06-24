/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 02:44:28 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/24 03:31:43 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_HPP
# define SHIP_HPP

# include "Entity.hpp"

class Ship : public Entity {
private:

public:
	Ship(void);
	Ship(int const winX, int const winY);
	Ship(Ship const & copy);
	~Ship(void);
};

#endif
