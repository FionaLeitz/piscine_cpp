/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:58:32 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/02 14:58:35 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Phonebook.hpp"

Phonebook::Phonebook( void ) {
	return ;
}

Phonebook::~Phonebook( void ) {
	return ;
}

void	Phonebook::make_search( void ) {
	int		count = 0;
	char	index;

	if (this->count == 0)
	{
		std::cout << "No contact yet..." << std::endl;
		return ;
	}
	std::cout << "_____________________________________________" << std::endl;
	while (count < this->count)
	{
		std::cout << this->book[count].show << std::endl;
		std::cout << "_____________________________________________" << std::endl;
		count++;
	}
	std::cout << "Which index do you want ?" << std::endl;
	std::cin >> index;
	index--;
	if (index < this->count + '0' && index >= '0')
		this->book[index - '0'].print();
	else
		std::cout << "Invalid answer" << std::endl;
	return ;
}
