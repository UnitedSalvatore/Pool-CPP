/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:33:14 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/24 06:40:12 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "Entity.hpp"

class Enemy : public Entity
{ 
public:
	Enemy();
	Enemy(Enemy const & obj);
	~Enemy();

	Enemy &		operator=(Enemy const & obj);
	void		newEnemy(int const winX, int const winY);	
};

#endif