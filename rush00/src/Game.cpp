/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:16:19 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/24 04:21:40 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CPP
# define GAME_CPP

#include "Ship.hpp"
#include "Game.hpp"
#include <ncurses.h>

Game::Game(void) {
	this->_win = initscr();
	this->_winX = getmaxx(this->_win);
	this->_winY = getmaxy(this->_win);
	cbreak();
	noecho();
	curs_set(0);
	box(this->_win, 0, 0);
	refresh();
	this->_panelX = this->_winX;
	this->_panelY = this->_winY * 0.2;
	this->_panel = newwin(this->_panelY, this->_winX, this->_winY - this->_panelY, this->_winX - this->_panelX);
	box(this->_panel, 0, 0);
	wrefresh(this->_panel);
	this->_gameX = this->_winX - 1 - 1;
	this->_gameY = this->_winY - this->_panelY - 1;
	this->_game = newwin(this->_gameY, this->_gameX, 1, 1);
	keypad(this->_game, true);
	// mvwprintw(_game, 1, 0, "y: %i : x: %i", this->_gameY, this->_gameX);
	wrefresh(this->_game);
	// this->_enemies = new Enemy[42];
	this->_ship = new Ship(this->_gameX, this->_gameY);
}

Game::~Game(void) {
	endwin();
}

WINDOW	*Game::getWindow(void) {
	return (this->_win);
}

int		Game::getX(void) {
	return (this->_winX);
}

int		Game::getY(void) {
	return (this->_winY);
}

void	Game::play(void) {
	bool	exit = false;
	int		c;

	while (!exit) {
		c = wgetch(this->_game);
		switch(c) {
			case KEY_UP: {
				this->_ship->moveUp();
				break;
			}
			case KEY_DOWN: {
				this->_ship->moveDown();
				break;
			}
			case KEY_LEFT: {
				this->_ship->moveLeft();
				break;
			}
			case KEY_RIGHT: {
				this->_ship->moveRight();
				break;
			}
			case 27: {
				exit = true;
				break;
			}
		}
		wclear(this->_game);
		mvwprintw(_game, _ship->getCoordY(), _ship->getCoordX(), "%c", _ship->getSkin());
		wrefresh(this->_game);
	}
}

#endif
