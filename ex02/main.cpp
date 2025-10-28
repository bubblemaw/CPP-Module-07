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

// int main()
// {
// 	std::cout << "* INT ARRAY *" << std::endl;
// 	Array<int> six(5);
// 	std::cout << "The size of the array is: " << six.size() << std::endl;
// 	try
// 	{
// 		six[4] = 6;
// 		std::cout << six[4] << std::endl;			
// 	}
// 	catch(...)
// 	{
// 		std::cout << "out of bound" <<  std::endl;
// 	}
// 	std::cout << "* EMPTY PARAMETERS *" << std::endl;	
// 	Array<int> flo;	
// 	try
// 	{
// 		std::cout << flo[0] << std::endl;
// 	}
// 	catch (...)
// 	{
// 		std::cout << "out of bound" <<  std::endl;
// 	}
// 	std::cout << "* DOUBLE ARRAY *" << std::endl;	
// 	Array<double> deux(2);
// 	try
// 	{
// 		deux[1] = 909.343434;
// 		std::cout << deux[1] << std::endl;		
// 	}
// 	catch(...)
// 	{
// 		std::cout << "out of bound" <<  std::endl;
// 	}	
	
// 	return (0);
// }

// #include <iostream>
// #include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
		std::cout << "primero" << std::endl;		
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
		std::cout << "secondo" << std::endl;
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}