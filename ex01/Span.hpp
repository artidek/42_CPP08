/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:29:38 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/25 13:26:59 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <algorithm>
# include <cstddef>
# include <exception>
# include <list>
#include <iostream>

class Span
{
  private:
	size_t _maxSize;
	std::list<int> _l;
	class MaxSizeException : public std::exception
	{
		public:
			MaxSizeException(void);
			const char *what() const throw();
	};
  public:
	Span(void);
	Span(size_t N);
	Span(Span const &copy);
	Span &operator=(Span const &copy);
	~Span(void);
	const std::list<int> getList() const;
	size_t getMaxSize() const;
	void addNumber(int n);
	int shortestSpan(void);
	int longestSpan(void);
	template <typename inPtr> void addNumbers(inPtr *begin, inPtr *end);
};

template <typename inPtr> void Span::addNumbers(inPtr *begin, inPtr *end)
{
	size_t count = std::distance(begin, end);
	if (count + _l.size() > _maxSize)
		throw MaxSizeException();
	else
		_l.insert(_l.end(), begin, end);
}

#endif