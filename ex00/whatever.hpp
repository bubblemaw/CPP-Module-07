/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:46:51 by maw               #+#    #+#             */
/*   Updated: 2025/10/14 00:53:13 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <ostream>
# include <string>

template <typename T>
	void swap(T &a, T &b)
	{
		T temp;
		temp = b;
		b = a;
		a = temp;
		return ;
	}
template <typename T>
	T min(T a, T b)
	{
		if (a < b)
			return (a);
		else
			return (b);
	}
template <typename T>
	T max(T a, T b)
	{
		if (a > b)
			return (a);
		else
			return (b);
	}	
#endif