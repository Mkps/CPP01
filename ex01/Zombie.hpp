/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:10:44 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/30 16:10:49 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
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

Zombie	*zombieHorde(int N, std::string name);
