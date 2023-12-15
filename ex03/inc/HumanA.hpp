/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:55:07 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/30 17:21:32 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
void	attack(void);
	private:
		std::string	name;
		Weapon		*weapon;
};
#endif
