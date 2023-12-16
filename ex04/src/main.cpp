/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:12:16 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 10:35:50 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Sed.hpp"

size_t	ft_find(std::string str, std::string substr)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str.compare(i, substr.length(), substr) == 0)
			return (i);
	}
	return (std::string::npos);
}

size_t	ft_elem_count(std::string str, std::string substr)
{
    size_t elem = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str.compare(i, substr.length(), substr) == 0)
            elem++;
	}
    return (elem);
}

std::string	replaceStrLine(std::string line, std::string replaceStr, std::string newStr)
{
	size_t  index, elem;

    elem = ft_elem_count(line, replaceStr);
	index = ft_find(line, replaceStr);
	while (index != std::string::npos && elem)
	{
		line.erase(index, replaceStr.length());
		line.insert(index, newStr); 
        elem--;
		index = ft_find(line, replaceStr);
	}
	return (line);
}

int	main(int ac, char **av)
{
	std::string	line;
	std::string	outputFilename;
    std::ofstream outputFile;

	if (ac != 4 )
    {
        std::cout << "Incorrect number of parameters" << std::endl;
		return (0);
    }
	line = av[2];
	if (line.empty())
	{
		std::cout << "A string to be replaced must be provided" << std::endl;
		return (0);
	}
	line.clear();
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
	{
		std::cout << "Failed to open input file " << av[1] << std::endl;
		return (1);
	}
	outputFilename = outputFilename + av[1] + ".replace";
	outputFile.open(outputFilename.c_str(), std::ofstream::out);
	if (!outputFile.is_open())
	{
		std::cout << "Failed to open output file " << outputFilename << std::endl;
		inputFile.close();
		return (1);
	}
	while (std::getline(inputFile, line))
	{
		outputFile << replaceStrLine(line, av[2], av[3]) << "\n";
	}
	outputFile.close();
	inputFile.close();
}
