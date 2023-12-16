/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:42:13 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 10:32:30 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

enum level {
	debug,
	info,
	warning,
	error,
	level_invalid
};

int	strToLevel(std::string str)
{
	std::string	level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i <= 3 && str.compare(level[i]))
		i++;
	if (i <= 3)
        return (i);
	else
		return (level_invalid);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string	str(av[1]);
	Harl dude;
	int level = strToLevel(str);
	switch	(level){
		case debug:
			dude.complain("DEBUG");
			dude.complain("INFO");
			dude.complain("WARNING");
			dude.complain("ERROR");
			break;
		case info:
			dude.complain("INFO");
			dude.complain("WARNING");
			dude.complain("ERROR");
			break;
		case warning:
			dude.complain("WARNING");
			dude.complain("ERROR");
			break;
		case error:
			dude.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}

