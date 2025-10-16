/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:55:40 by maw               #+#    #+#             */
/*   Updated: 2025/10/16 14:57:17 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void _13(T *array, const int length_2)
{
    std::cout << "in the function pointers" << std::endl;
}

// template <typename T>
// void iter(T *array, const int length, void (*f)(T *array, const int length_2))
// {
//     f(array, length);
// }

#endif
