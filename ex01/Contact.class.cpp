/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:34:41 by acomet            #+#    #+#             */
/*   Updated: 2023/12/16 19:39:18 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){

	std::string	str ("Empty");

	this->set_first_name(str);
	this->set_last_name(str);
	this->set_nickname(str);
	this->set_phone_number(str);
	this->set_darkest_secret(str);
	return;
}

Contact::~Contact(void){

	return;
}

/* set functions */
void	Contact::set_first_name(std::string imput_1){

	this->_first_name = imput_1;
}

void	Contact::set_last_name(std::string imput_2){

	this->_last_name = imput_2;
}

void	Contact::set_nickname(std::string imput_3){

	this->_nickname = imput_3;
}

void	Contact::set_phone_number(std::string imput_4){

	this->_phone_number = imput_4;
}

void	Contact::set_darkest_secret(std::string imput_5){

	this->_darkest_secret = imput_5;
}

/* get functions */
std::string	Contact::get_first_name(void){

	return (this->_first_name);
}

std::string	Contact::get_last_name(void){

	return (this->_last_name);
}

std::string	Contact::get_nickname(void){

	return (this->_nickname);
}

std::string	Contact::get_phone_number(void){

	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void){

	return (this->_darkest_secret);
}
