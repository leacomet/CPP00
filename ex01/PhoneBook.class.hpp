/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:29:47 by acomet            #+#    #+#             */
/*   Updated: 2023/12/15 02:20:47 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

class PhoneBook {

public:

	Contact	Contact[8];

	PhoneBook(int initialize);
	~PhoneBook(void);

void	add(void);
void	search(void);

private:

	int	_index;
	int	_saved_contact;

};

#endif
