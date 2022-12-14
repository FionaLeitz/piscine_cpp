/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:23:27 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/13 13:23:28 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {
	public:
		Form( std::string name, int signedgrade, int execgrade);
		Form( const Form & value );
		~Form( void );

		Form &				operator=( const Form & rhs );

		class	GradeTooHightException : public std::exception {
			public:
				virtual const char * what( void ) const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char * what( void ) const throw();
		};

		void				beSigned( const Bureaucrat & employee );
		void				beExec( const Bureaucrat & employee );

		const std::string		getName( void ) const;
		bool					getSigned( void ) const;
		void					setSigned( bool issigned );
		int						getSignedGrade( void ) const;
		int						getExecGrade( void ) const;


	private:
		Form( void );

		const std::string	_name;
		bool				_signed;
		const int			_signedgrade;
		const int			_execgrade;
};

std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif
