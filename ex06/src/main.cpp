/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:42:13 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/31 17:52:07 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string	str(av[1]);
	switch	(str){
		case "DEBUG":
			std::cout << "DEBUG\n";
		case "INFO":
			std::cout << "INFO\n";
		case "WARNING":
			std::cout << "WARNING\n";
		case "ERROR":
			std::cout << "ERROR\n";
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}

