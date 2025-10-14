/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:46:57 by maw               #+#    #+#             */
/*   Updated: 2025/10/14 00:53:30 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main()
// {
// 	int num1 = 43;
// 	int num2 = 12;
// 	std::cout << "* BEFORE SWAP *" << std::endl;
// 	std::cout << num1 << " : " << num2 << std::endl;
// 	b_swap(num1, num2);
// 	std::cout << "* AFTER SWAP *" << std::endl;
// 	std::cout << num1 << " : " << num2 << std::endl;
// 	std::cout << "* MINIMUM *" << std::endl;
// 	std::cout << min(num1, num2) << std::endl;
// 	std::cout << "* MAXIMUM *" << std::endl;
// 	std::cout << max(num1, num2) << std::endl;
//  	return (0);
// }

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
