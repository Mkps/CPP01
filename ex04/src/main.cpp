/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:12:16 by aloubier          #+#    #+#             */
/*   Updated: 2023/08/31 07:13:34 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Sed.hpp"
#include <cstddef>

size_t	ft_find(std::string str, std::string substr)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str.compare(i, substr.length(), substr) == 0)
			return (i);
	}
	return (std::string::npos);
}

std::string	replaceStrLine(std::string line, std::string replaceStr, std::string newStr)
{
	size_t index;

	index = ft_find(line, replaceStr);
	while (index != std::string::npos)
	{
		line.erase(index, replaceStr.length());
		line.insert(index, newStr); 
		index = ft_find(line, replaceStr);
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
	outputFile.open(outputFile_name.c_str(), std::ofstream::out);
	if (!outputFile.is_open())
	{
		std::cout << "Failed to open output file " << outputFile_name << std::endl;
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
