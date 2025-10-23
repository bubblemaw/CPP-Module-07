/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:55:40 by maw               #+#    #+#             */
/*   Updated: 2025/10/23 14:22:29 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void plus_13(T& element)
{
    element += 13;
}

template <typename T>
void display_array(T& element)
{
    std::cout << element << ' ';
} 

template <typename T>
void iter(T *array, const int size, void (*f)(T&))
{
	for(int i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void iter(const T *array, const int size, void (*f)(const T&))
{
	for(int i = 0; i < size; i++)
		f(array[i]);
}

#endif
