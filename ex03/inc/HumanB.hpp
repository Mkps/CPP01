/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:55:07 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/30 17:39:12 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
void	attack(void);
void	setWeapon(Weapon& weapon);
	private:
		std::string	name;
		Weapon		*weapon;
};
#endif
