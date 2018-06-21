/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:25:07 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/21 16:55:28 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	int					_value;
	static const int	_bits;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & src);

	Fixed	&operator=(Fixed const &src);

	int		getRawBits(void) const;

	void	setRawBits(const int raw);
};

#endif
