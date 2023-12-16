/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:22:14 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/30 17:49:33 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string init_name)
{
	this->name = init_name;
	this->weapon = NULL;
}

HumanB::~HumanB(void)
{
}

std::string	getAttack(Weapon *weapon)
{
	if (weapon == NULL)
		return ("bare fists");
	else
		return (weapon->getType());
}
void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with " 
		<< getAttack(this->weapon) << std::endl;
}
 
void	HumanB::setWeapon(Weapon& new_weapon)
{
	this->weapon = &new_weapon;
}
