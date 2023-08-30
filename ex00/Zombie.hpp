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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
