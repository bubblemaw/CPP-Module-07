/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:53:27 by masase            #+#    #+#             */
/*   Updated: 2025/10/23 14:26:52 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void minus_13(float &element)
{
    element -= 13;
}

int main()
{
    int array[] = {45, 8, 154, 90, 88};
    char mot[] = {'c', 'h', 'a', 'a'};
    float chiffre[] = {45.34, 8.88, 154.12, 90.56, 88.55};	

    std::cout << "INT ARRAY WITH TEMPLATE FUCNTION" << std::endl;  
    std::cout << "ARRAY BEFORE FUNCTION" << std::endl;
    iter(array, 5, display_array);
	std::cout << std::endl;
    iter(array, 5, plus_13);
    std::cout << "ARRAY AFTER FUNCTION" << std::endl;
    iter(array, 5, display_array);
	std::cout << std::endl;

    std::cout << "CHAR ARRAY WITH TEMPLATE FUNCTION" << std::endl;    
    std::cout << "ARRAY BEFORE FUNCTION" << std::endl;
    iter(mot, 4, display_array);
	std::cout << std::endl;
    iter(mot, 4, plus_13);
    std::cout << "ARRAY AFTER FUNCTION" << std::endl;
    iter(mot, 4, display_array);
	std::cout << std::endl;

    std::cout << "FLOAT ARRAY WITH BASIC FUNCTION" << std::endl;  
    std::cout << "ARRAY BEFORE FUNCTION" << std::endl;
    iter(chiffre, 5, display_array);
	std::cout << std::endl;
    iter(chiffre, 5, minus_13);
    std::cout << "ARRAY AFTER FUNCTION" << std::endl;
    iter(chiffre, 5, display_array);
	std::cout << std::endl;	

    return (0);
}
