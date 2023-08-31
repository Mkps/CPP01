/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:42:13 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/31 18:04:04 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
enum level {
	debug,
	info,
	warning,
	error,
	level_invalid
};
int	strToLevel(std::string str)
{
	if (!str.compare("DEBUG"))
		return (debug);
	if (!str.compare("INFO"))
		return (info);
	if (!str.compare("WARNING"))
		return (warning);
	if (!str.compare("ERROR"))
		return (error);
	else
		return (level_invalid);
}
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string	str(av[1]);
	int level = strToLevel(str);
	std::cout << "level is: " << level << std::endl;
	switch	(level){
		case debug:
			std::cout << "DEBUG\n";
		case info:
			std::cout << "INFO\n";
		case warning:
			std::cout << "WARNING\n";
		case error:
			std::cout << "ERROR\n";
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}

