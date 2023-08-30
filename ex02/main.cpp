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
	std::string	str = "HI THIS IS BRAIN";
	std::string *strPTR;
	std::string &strREF = str;

	strPTR = &str;
	std::cout << "Memory address of the string variable: " << &str << "\n";
	std::cout << "Memory address held by strPTR: " << &strPTR << "\n";
	std::cout << "Memory address held by strREF: " << &strREF << "\n";
	std::cout << "The value of the string variable: " << str << "\n";
	std::cout << "The value pointed by strPTR: " << *strPTR << "\n";
	std::cout << "The value pointed by strREF: " << strREF << std::endl; 

	return (0);
}
