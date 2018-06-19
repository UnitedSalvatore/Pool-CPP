/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:33:16 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 02:43:35 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheStack(void)
{
	Pony	pony = Pony();
	pony.display();
}

void	ponyOnTheHeap(void)
{
	Pony	*pony = new Pony();
	pony->display();
	delete pony;
}

int		main(void)
{
	std::cout << "Allocating pony on heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Done" << std::endl;
	std::cout << "Allocating pony on stack" << std::endl;
	ponyOnTheStack();
	std::cout << "Done" << std::endl;
	return (0);
}
