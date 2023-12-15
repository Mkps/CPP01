/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:38:30 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 10:38:34 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
public:
	Zombie	();
	Zombie (std::string name);
	void	announce(void);
	void	SetName(std::string name);
	~Zombie ();

private:
	std::string	name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
