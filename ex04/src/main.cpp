#include "../inc/Sed.hpp"
#include <algorithm>
#include <string>

std::string	replaceStrLine(std::string line, std::string replaceStr, std::string newStr)
{
	size_t index;

	index = line.find(replaceStr);
	while (index != std::string::npos)
	{
		line.erase(index, replaceStr.length());
		line.insert(index, newStr); 
		index = line.find(replaceStr);
	}
	return (line);
}

int	main(int ac, char **av)
{
	std::string	line;
	std::string	outputFile_name;
	std::ofstream outputFile;

	if (ac != 4 )
		return (0);
	line = av[2];
	if (line.empty())
	{
		std::cout << "A string to be replaced must be provided." << std::endl;
		return (0);
	}
	line.clear();
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
	{
		std::cout << "Failed to open input file " << av[1] << std::endl;
		return (0);
	}
	outputFile_name = av[1];
	outputFile_name.append(".replace");
	outputFile.open(&outputFile_name[0], std::ofstream::out);
	if (!outputFile.is_open())
	{
		std::cout << "Failed to open output file " << av[1] << std::endl;
		inputFile.close();
		return (0);
	}
	while (std::getline(inputFile, line))
	{
		outputFile << replaceStrLine(line, av[2], av[3]) << "\n";
	}
	outputFile.close();
	inputFile.close();
}
