/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:44:20 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/30 16:02:55 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int z_count, std::string name)
{
	Zombie* firstZombie = new Zombie[z_count];
	for (int i = 0; i < z_count; i++)
		firstZombie[i] = Zombie(name);
	return (firstZombie);
}
