/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 20:45:20 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/21 20:45:30 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <string>

class Fixed
{
	public:
		static Fixed		&min(Fixed &n1, Fixed &n2);
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static Fixed const	&min(Fixed const &n1, Fixed const &n2);
		static Fixed const	&max(Fixed const &n1, Fixed const &n2);

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int i);
		Fixed(float f);
		~Fixed(void);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void)	const;
		int					toInt(void)		const;

		Fixed				&operator=(Fixed const & rhs);
		bool				operator>(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;
		Fixed				&operator+(Fixed const &rhs) const;
		Fixed				&operator-(Fixed const &rhs) const;
		Fixed				&operator*(Fixed const &rhs) const;
		Fixed				&operator/(Fixed const &rhs) const;
		Fixed				&operator++(void);
		Fixed				&operator++(int);
		Fixed				&operator--(void);
		Fixed				&operator--(int);

	private:
		static int const	_nBit;

		int					_rawBits;
};

std::ostream				&operator<<(std::ostream &os, Fixed const &rhs);

#endif
