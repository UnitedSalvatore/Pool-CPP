/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:11:59 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/29 19:46:28 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include "span.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter a positive value greater than 0" << std::endl;
		return (0);
	}

	unsigned int i = atoi(av[1]);
	srand(time(0));

	if (i <= 0)
	{
		std::cout << "Please enter a positive value greater than 0" << std::endl;
		return (0);
	}

	Span test(i);
	unsigned int x = 0;
	int y = 0;

	std::cout << "Generated an storage vector size of " << i << std::endl <<
		"Now filling vector with values:" << std::endl;
	while (x < i)
	{
		y = rand() % 10000;
		test.addNumber(y);
		std::cout << "[" << y << "] ";
		if (x % 13 == 0)
			std::cout << std::endl;
		x++;
	}

	std::cout << std::endl << std::endl << "Total Iterations: " << x;

	try
	{
		std::cout << std::endl << std::endl << "Smallest value in storage: " << test.shortestSpan() << std::endl <<
		"Largest value in storage: " << test.longestSpan() << std::endl << std::endl <<
		"Now adding one more to show error handling" << std::endl;
	}
	catch (Span::NotEnoughValuesException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Not enough values to find any span." << std::endl;
	}

	try
	{
		test.addNumber(rand() % 10000);
	}
	catch (Span::StorageLimitException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "WTF?" << std::endl;
	}

	return (0);
}