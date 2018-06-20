/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:30:17 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:35:18 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Human::identify(void) const {
	return this->_brain.identify();
}

const Brain	&Human::getBrain(void) const {
	return this->_brain;
}

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}
