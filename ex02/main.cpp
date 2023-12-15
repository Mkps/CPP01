/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:15:14 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/30 16:27:15 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = string;

	stringPTR = &string;
	std::cout << "Memory address of the string variable: " << &string<< std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
	std::cout << "The value of the string variable: " << string << std::endl;
	std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF: " << stringREF << std::endl; 

	return (0);
}
