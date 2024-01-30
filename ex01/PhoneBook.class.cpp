/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:34:43 by acomet            #+#    #+#             */
/*   Updated: 2023/12/27 07:01:01 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(int initialize) : _index(initialize) {

	this->_saved_contact = 0;
	return;
}

PhoneBook::~PhoneBook(void){

	return;
}

int	bad_imput(std::string imput[5], int i)
{
		if (imput[i].empty())
		{
			std::cout << "Field can't be empty" << std::endl;
			return (1);
		}
		if (imput[i][0] == ' ' || imput[i][0] == '\t')
		{
			std::cout << "Field can't begin with a space" << std::endl;
			return (1);
		}
		return (0);
}

void	PhoneBook::add(void){

	std::string	imput[5];

	std::cout << "First name : " << std::endl;
	std::getline(std::cin, imput[0]);
	if (!std::cin.good() || bad_imput(imput, 0))
		return;
	std::cout << "Last name : " << std::endl;
	std::getline(std::cin, imput[1]);
	if (!std::cin.good() || bad_imput(imput, 1))
		return;
	std::cout << "Nickname : " << std::endl;
	std::getline(std::cin, imput[2]);
	if (!std::cin.good() || bad_imput(imput, 2))
		return;
	std::cout << "Phone Number : " << std::endl;
	std::getline(std::cin, imput[3]);
	if (!std::cin.good() || bad_imput(imput, 3))
		return;
	std::cout << "Darkest Secret : " << std::endl;
	std::getline(std::cin, imput[4]);
	if (!std::cin.good() || bad_imput(imput, 4))
		return;

	this->Contact[this->_index].set_first_name(imput[0]);
	this->Contact[this->_index].set_last_name(imput[1]);
	this->Contact[this->_index].set_nickname(imput[2]);
	this->Contact[this->_index].set_phone_number(imput[3]);
	this->Contact[this->_index].set_darkest_secret(imput[4]);
	this->_index++;
	if (this->_index > 7)
		this->_index %= 8;
	if (_saved_contact < 8)
		this->_saved_contact++;
	return;
}

static int is_index_valid(std::string str)
{
	if (str.length() != 1 || str[0] < '1' || str[0] > '8')
	{
		std::cout << "the index MUST be between 1 and 8" << std::endl;
		return (1);
	}
	return (0);
}

static std::string	truncate(std::string str){

	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
	
}

void	PhoneBook::search(void){

	int			i = 0;
	std::string	str;

	if (!_saved_contact)
	{
		std::cout << "The PhoneBook is empty !" << std::endl;
		return;
	}
	while (i < _saved_contact)
	{
		std::cout	<< "|----------|----------|----------|----------|" << std::endl;
		std::cout	<< "|";
		std::cout	<< std::setw(10) << i + 1
					<< "|";
		std::cout	<< std::setw(10) << truncate(Contact[i].get_first_name())
					<< "|"
					<< std::setw(10) << truncate(Contact[i].get_last_name())
					<< "|"
					<< std::setw(10) << truncate(Contact[i].get_nickname())
					<< "|" << std::endl;
		i++;
	}
	std::cout	<< "|----------|----------|----------|----------|" << std::endl;
	getline(std::cin, str);
	if (!std::cin.good())
		return;
	if (!is_index_valid(str))
	{
		i = str[0] - 49;
		std::cout	<< "First name : " << Contact[i].get_first_name() << std::endl
					<< "Last name : " << Contact[i].get_last_name() << std::endl
					<< "Nickname : " << Contact[i].get_nickname() << std::endl
					<< "Phone number : " << Contact[i].get_phone_number() << std::endl
					<< "Darkest secret : " << Contact[i].get_darkest_secret() << std::endl;
	}
	return;
}
