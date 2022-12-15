/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:05:19 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 12:05:22 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class	Bureaucrat {
	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat & value );
		~Bureaucrat( void );

		Bureaucrat &		operator=( const Bureaucrat & rhs );

		class	GradeTooHightException : public std::exception {
			public:
				virtual const char * what( void ) const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char * what( void ) const throw();
		};

		void				incrGrade( void );
		void				decrGrade( void );
		void				signForm( Form & form );
		void				execForm( Form & form );

		const std::string			getName( void ) const;
		int							getGrade( void ) const;
		void						setGrade( int grade );

	private:
		Bureaucrat( void );

		const std::string	_name;
		int					_grade;
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
