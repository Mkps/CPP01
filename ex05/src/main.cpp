/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:32:48 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 10:32:50 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int	main(void)
{
	Harl dude;

	dude.complain("DEBUG");
	dude.complain("INFO");
	dude.complain("WARNING");
	dude.complain("ERROR");
	dude.complain("gibberish");
	return (0);
}
