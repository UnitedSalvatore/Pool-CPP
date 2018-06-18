/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 16:27:48 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/18 18:30:27 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int		main(int argc, char const *argv[])
{
	unsigned int	i;
	char const		*str;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			str = argv[i];
			while (*str)
				std::cout << (char)toupper(*str++);
			++i;
		}
		std::cout << std::endl;
	}
	return (0);
}
