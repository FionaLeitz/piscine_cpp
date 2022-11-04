/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:58:34 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/04 14:58:36 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook {

	public:
		int		count;
		Contact book[8];
		Phonebook( void );
		~Phonebook( void );
		void	make_search( void );

	private:

};

#endif
