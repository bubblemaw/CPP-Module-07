/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:06:50 by maw               #+#    #+#             */
/*   Updated: 2025/10/25 17:12:16 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) :array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "int n template constructor" << std::endl;
	array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(const Array &obj)
{
	std::cout << "Default template copy constructor" << std::endl;
	*this = obj;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Default destructor" << std::endl;
	delete [] this->array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &obj)
{
	std::cout << "Assignement operator" << std::endl;
	this->array = new T[obj._size];
	for (int i = 0; i < obj._size; i++)
		this->array[i] = obj.array[i];
	this->_size = obj._size;
	return (*this);
}

template <typename T>
int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T& Array<T>::operator[](int idx)
{
	if (idx >= _size || idx < 0)
		throw std::exception();
	return (this->array[idx]);
}
template <typename T>
T Array<T>::operator[](int idx) const
{
	if (idx >= _size || idx < 0)
		throw std::exception();
	return (this->array[idx]);
}

