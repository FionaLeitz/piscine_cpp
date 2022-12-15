/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:27:22 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/15 10:27:24 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern {
	public:
		Intern( void );
		Intern( const Intern & value );
		~Intern( void );

		Intern &			operator=( const Intern & rhs );

		class	InexistantFormException : public std::exception {
			public:
				virtual const char * what( void ) const throw();
		};

		AForm *			makeForm( std::string formname, std::string target );

		private:

};

#endif
