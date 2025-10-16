/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:53:27 by masase            #+#    #+#             */
/*   Updated: 2025/10/16 14:57:30 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void _13(int *array, const int length_2)
// {
//     std::cout << "in the function pointers" << std::endl;
// }

int main()
{
    
    int array[5] = {45, 8, 154, 90, 88};
    char mot[4] = {'c', 'h', 'a', 'r'};

    void (*fc)(int *array, const int length_2) =_13;
    
    (*fc)(array, 5);
    // iter (array, 5, _13())
    return (0);
}