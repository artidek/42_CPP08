/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:16:22 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/24 12:27:51 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<algorithm>

template <typename Container> typename Container::iterator easyfind(Container &c, int v)
{
	return (std::find(c.begin(), c.end(), v));
}

template <typename Container> const typename Container::iterator easyfind (const Container &c, int v)
{
	return (std::find(c.begin(), c.end(), v));
}