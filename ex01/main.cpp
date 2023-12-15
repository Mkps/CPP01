/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:56 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/30 16:10:03 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *Horde;
	int		count;

	count = 12;
	Horde = zombieHorde(count, "Tom");
	for (int i = 0; i < count; i++)
    {
        std::cout << "Zombie number " << i + 1 << " : ";
		Horde[i].announce();	
    }
	delete[] Horde;
	return (0);
}
