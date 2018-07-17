/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:33:16 by ypikul            #+#    #+#             */
/*   Updated: 2018/07/17 03:20:07 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Pony.hpp"

void	ponyOnTheStack(void) {
	std::cout << "Allocating pony on stack" << std::endl;
	Pony	pony = Pony();
	pony.display();
}

void	ponyOnTheHeap(void) {
	std::cout << "Allocating pony on heap" << std::endl;
	Pony	*pony = new Pony();
	pony->display();
	delete pony;
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
