/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:06:50 by maw               #+#    #+#             */
/*   Updated: 2025/10/23 16:03:26 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Default template constructor" << std::endl;
	array = new T[5];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "int n template constructor" << std::endl;
	array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &obj)
{
	std::cout << "Default template copy constructor" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Default destructor" << std::endl;
	delete[] array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &obj)
{
	std::cout << "Assignement operator" << std::endl;	
}
