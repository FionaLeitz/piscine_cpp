/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:30:22 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/15 10:30:25 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & value );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm &		operator=( const ShrubberyCreationForm & rhs );

		std::string			getTarget( void ) const;
		virtual void		execute( const Bureaucrat & executor ) const;

	private:
		ShrubberyCreationForm( void );
		
		std::string	_target;

};

#endif
