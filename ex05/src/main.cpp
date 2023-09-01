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
