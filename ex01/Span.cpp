/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:09:27 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/25 13:33:02 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>

Span::MaxSizeException::MaxSizeException(void){}
const char *Span::MaxSizeException::what() const throw() {return "Span::MaxSizeException";}

Span::Span(void) :_maxSize(0), _l(){}
Span::Span(size_t N) 
{
	std::cout << "max size " << _l.max_size() << std::endl;
	if (N < _l.max_size())
		_maxSize = N;
	else
		throw MaxSizeException();
}
Span::Span(Span const &copy) : _maxSize(copy.getMaxSize())
{
	_l = copy.getList();
} 
Span &Span::operator=(Span const &copy)
{
	_maxSize = copy.getMaxSize();
	if (this != &copy)
		_l = copy.getList();
	return *this;
}
Span::~Span(void) {}

const std::list<int>Span::getList() const {return _l;}
size_t Span::getMaxSize() const {return _maxSize;}
void Span::addNumber(int n)
{
	if (_l.size() < _maxSize)
		_l.push_back(n);
	else
		throw MaxSizeException();
}

int Span::shortestSpan(void)
{
	_l.sort();
	std::list<int>::iterator it = _l.begin();
	std::list<int>::iterator nextIt = it;
	++nextIt;
	int min = *it;
	for (; it != _l.end() && nextIt != _l.end(); ++it, ++nextIt)
	{
		int diff = *nextIt - *it;
		if (diff < min)
			min = diff;
	}
	return min;
}

int Span::longestSpan(void)
{
	if (_l.size() == 1)
		return *_l.begin();
	return (*std::max_element(_l.begin(), _l.end()) - *std::min_element(_l.begin(), _l.end()));
}
