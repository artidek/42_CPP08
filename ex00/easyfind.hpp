/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:16:33 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/24 12:26:51 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include<iterator>

template <typename Container> typename Container::iterator easyfind(Container &c, int v);
template <typename Container> const typename Container::iterator easyfind (const Container &c, int v);

#include"easyfind.tpp"

#endif