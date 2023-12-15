/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:38:39 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 10:38:40 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie ::Zombie () {
	this->name = "Bobby";
}

Zombie ::Zombie (std::string name) {
	this->name = name;
}

Zombie ::~Zombie () {
	std::cout << this->name << " has been destroyed..." << std::endl;
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
