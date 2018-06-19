/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:32:55 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/19 21:40:08 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ponyOnTheStack(void)
{
	Pony	pony = Pony();
}

void	ponyOnTheHeap(void)
{
	Pony	*pony = new Pony();
}

int		main(void)
{
	std::cout << "Allocating pony on heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Allocating pony on stack" << std::endl;
	ponyOnTheStack();
	return (0);
}
