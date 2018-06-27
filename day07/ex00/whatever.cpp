/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:10:56 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/27 20:41:58 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void	swap(T &ptr1, T &ptr2)
{
	T	tmp = ptr1;
	ptr1 = ptr2;
	ptr2 = tmp;
}

template<typename T>
T const	&min(T const &ptr1, T const &ptr2)
{
	return ((ptr1 < ptr2) ? ptr1 : ptr2);
}

template<typename T>
T const	&max(T const &ptr1, T const &ptr2)
{
	return ((ptr1 < ptr2) ? ptr2 : ptr1);
}

int		main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
