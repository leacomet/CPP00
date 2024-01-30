/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:27:28 by acomet            #+#    #+#             */
/*   Updated: 2023/12/16 19:35:47 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	nokia(0);
	std::string	str;

	std::cout	<< "|-----------------------|" << std::endl
				<< "|       PhoneBook       |" << std::endl
				<< "|  *ADD                 |" << std::endl
				<< "|  *SEARCH              |" << std::endl
				<< "|  *EXIT                |" << std::endl
				<< "|-----------------------|" << std::endl;

	while(1 && std::cin.good())
	{
		std::cout << "PhoneBook: ";
		getline(std::cin, str);
		if (!std::cin.good())
			return (0);
		if (!str.compare("ADD"))
			nokia.add();
		else if (!str.compare("SEARCH"))
			nokia.search();
		else if (!str.compare("EXIT"))
			return (0);
	}
}
