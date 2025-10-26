/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:07:23 by maw               #+#    #+#             */
/*   Updated: 2025/10/25 17:07:50 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream> 


template <typename T>
class Array
{
	private:
		T *array;
		int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		~Array();
		Array& operator=(const Array &obj);
		int size() const;
};

#endif