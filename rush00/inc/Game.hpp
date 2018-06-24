/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:16:49 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/24 20:58:37 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# include "Ship.hpp"
# include "Enemy.hpp"
# include <ncurses.h>

class Game {
private:
	WINDOW	*_win;
	int		_winX;
	int		_winY;
	WINDOW	*_panel;
	int		_panelX;
	int		_panelY;
	WINDOW	*_game;
	int		_gameX;
	int		_gameY;

	Ship	*_ship;
	Enemy	*_enemies;

public:
	Game(void);
	Game(Game const & copy);
	~Game(void);

	int		score;
	int		lives;

	WINDOW	*getWindow(void);
	void	play(void);
	int		getX(void);
	int		getY(void);
	void	moveAll(void);
	void	printAll(void);
	void	addEnemy(void);
	void	checkCollision(void);
	Game &	operator=(Game const & copy);
};

#endif
