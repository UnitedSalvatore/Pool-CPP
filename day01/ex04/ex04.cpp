/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:18:35 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:19:07 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void )
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strp = &str;
	std::string		&strr = str;

	std::cout << "Pointer: " << *strp << std::endl;
	std::cout << "Reference: " << strr << std::endl;
}
