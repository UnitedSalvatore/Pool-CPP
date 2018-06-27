/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:40:24 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/27 21:18:32 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *array, unsigned int length, void (*f)(T &))
{
	for (unsigned int i = 0; i < length; ++i)
		f(array[i]);
}

template<typename T>
void	put_one(T &data)
{
	std::cout << data << std::endl;
}

int		main(void)
{
	int			array_int[] = { 1, 2, 3, 4, 42 };
	std::string	array_str[] = { "Biba", "Boba", "Maxim", "Volkov", "Cheater" };

	iter<int>(array_int, 5, &put_one<int>);
	iter<std::string>(array_str, 5, &put_one<std::string>);
	return (0);
}
