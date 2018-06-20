/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:23:11 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/20 20:35:15 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>
# include <iostream>

class Human
{
private:
	const Brain _brain;
public:
	Human(void);
	~Human(void);

	std::string	identify(void) const;
	const Brain	&getBrain(void) const;
};

#endif
