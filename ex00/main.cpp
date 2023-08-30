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
