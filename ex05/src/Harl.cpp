#include "../inc/Harl.hpp"
#include <string>
Harl::Harl()
{
}
Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	int			i;
	void		(Harl::*outputPtr[4])(void) = \
		{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	dangerLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i <= 3 && level.compare(dangerLevel[i]))
		i++;
	if (i <= 3)
		(this->*outputPtr[i])();
	else
		std::cout << " * UNINTELLIGIBLE NOISES * " << std::endl;
}

void	Harl::debug(void)
{
	std::cout << BLUE << "[ DEBUG ]" << RESET << "\n";
	std::cout << 	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout <<	"I really do!" <<std::endl;
}

void	Harl::info(void)
{
	std::cout << GREEN << "[ INFO ]" << RESET << "\n";
	std::cout << 	"I cannot believe adding extra bacon costs more money.\n";
	std::cout <<	"You didn’t put enough bacon in my burger!\n";
	std::cout <<	"If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[ WARNING ]" << RESET << "\n";
	std::cout << 	"I think I deserve to have some extra bacon for free.\n";
	std::cout <<	"’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ ERROR ]" << RESET << "\n";
	std::cout <<	"This is unacceptable! I want to speak to the manager now." << std::endl;
}
