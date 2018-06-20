/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:23:11 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:35:25 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	return ;
}

Brain::~Brain(void) {
	return ;
}

std::string	Brain::identify(void) const {
	const void * address = static_cast<const void*>(this);
	std::stringstream sstr;
	sstr << address;
	return sstr.str();
}
