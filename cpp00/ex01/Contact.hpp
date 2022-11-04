/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:58:10 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/04 14:58:13 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

	public:
		Contact( void ) ;
		~Contact( void );
		std::string	show;
		void		print( void );
		void		get_add( int count );

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nbr;
		std::string	secret;
		void		_prompt_add( const char *str, int line );
		void		_resize( int size, int line );
	
};

#endif
