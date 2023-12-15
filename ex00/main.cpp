/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:28:38 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 17:28:39 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *Tom;

	Tom = newZombie("Tom");
	Tom->announce();
	randomChump("John");
	Tom->announce();
	delete Tom;
	return (0);
}
