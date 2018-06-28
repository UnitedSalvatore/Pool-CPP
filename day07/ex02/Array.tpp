/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:20:39 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/28 19:56:59 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <exception>

template<typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_size;
public:
	Array<T>(void): _size(0), _array(0)
	{
		return ;
	}

	Array<T>(unsigned int size): _size(size)
	{
		this->_array = new T[size];
	}

	Array<T>(Array<T> const &src) 
	{
		this->_size = src.size();
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src[i];
	}

	Array<T>		operator=(Array<T> const &src )
	{
		this->_size = src.size();
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src[i];
		return *this;
	}

	T				&operator[](unsigned int index) const
	{
		if (index >= this->_size)
			throw std::exception();
		return this->_array[index];
	}

	unsigned int	size(void) const
	{
		return (this->_size);
	}
};

#endif
