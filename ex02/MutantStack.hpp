/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:21:29 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/26 13:11:41 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
#define MUTANT_STACK_H

#include <stack>
#include <list>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(void) {}
		MutantStack(MutantStack const &copy) : std::stack<T>(copy){}
		MutantStack &operator=(MutantStack const &copy)
		{
			std::stack<T>::operator=(copy);
			return *this;
		}
		~MutantStack(void) {}
		iterator begin ()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif