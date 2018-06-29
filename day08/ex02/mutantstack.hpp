/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 17:42:13 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/29 19:47:57 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <exception>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		
		MutantStack<T>(void)
		{
			return;
		}

		MutantStack(MutantStack const &r)
		{
			(void)r;
			return;
		}

		~MutantStack<T>(void)
		{
			return;
		}

		MutantStack &operator=(MutantStack const &r)
		{
			(void)r;
			return;
		}

		T top(void)
		{
			return (_stack.front());
		}

		T size(void)
		{
			return (_stack.size());
		}

		typedef std::list<int>::iterator iterator;

		iterator begin()
		{
			return (_stack.begin());
		}

		iterator end() {
			return (_stack.end());
		}

		void push(T value)
		{
			_stack.push_front(value);
		}

		void pop(void)
		{
			_stack.pop_front();
		}

	private:

		std::list<T>		_stack;

};

#endif