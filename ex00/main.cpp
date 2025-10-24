/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:16:39 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/24 13:04:57 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

int	main(void)
{
	int arr[3] = {10, 20, 5};
	std::list<int> lst(arr, arr + 3);
	std::vector<int> vct(arr, arr + 3);
	std::list<int>::iterator lit = easyfind(lst, 5);
	std::vector<int>::iterator vit = easyfind(vct, 40);
	if (lit != lst.end())
		std::cout << "Value found in the list at position " << std::distance(lst.begin(), lit) << std::endl;
	else
		std::cout << "Value haven't been found in list\n";
	if (vit != vct.end())
		std::cout << "Value found in the vector at position " << std::distance(vct.begin(), vit) << std::endl;
	else
		std::cout << "Value haven't been found in vector\n";
}