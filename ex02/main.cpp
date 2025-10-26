/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:06:46 by maw               #+#    #+#             */
/*   Updated: 2025/10/25 17:12:11 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "* INT ARRAY *" << std::endl;
	Array<int> six(5);
	std::cout << "The size of the array is: " << six.size() << std::endl;
	try
	{
		six[4] = 6;
		std::cout << six[4] << std::endl;			
	}
	catch(...)
	{
		std::cout << "out of bound" <<  std::endl;
	}
	std::cout << "* EMPTY PARAMETERS *" << std::endl;	
	Array<int> flo;	
	try
	{
		std::cout << flo[0] << std::endl;
	}
	catch (...)
	{
		std::cout << "out of bound" <<  std::endl;
	}
	std::cout << "* DOUBLE ARRAY *" << std::endl;	
	Array<double> deux(2);
	try
	{
		deux[1] = 909.343434;
		std::cout << deux[1] << std::endl;		
	}
	catch(...)
	{
		std::cout << "out of bound" <<  std::endl;
	}	
	
	return (0);
}