/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:25:21 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/15 10:25:44 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm & value );
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm &		operator=( const PresidentialPardonForm & rhs );

		std::string			getTarget( void ) const;
		virtual void		execute( const Bureaucrat & executor ) const;

	private:
		PresidentialPardonForm( void );
		
		std::string	_target;

};

#endif
