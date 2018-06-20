/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:23:11 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:35:20 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <sstream>
# include <iostream>

class Brain {
public:
	Brain(void);
	~Brain(void);

	std::string	identify(void) const;
};

#endif
