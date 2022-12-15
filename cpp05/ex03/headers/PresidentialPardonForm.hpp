/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:27:05 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/15 10:27:06 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm & value );
		~PresidentialPardonForm( void );

		PresidentialPardonForm &		operator=( const PresidentialPardonForm & rhs );

		std::string			getTarget( void ) const;
		virtual void		execute( const Bureaucrat & executor ) const;

	private:
		std::string	_target;

};

#endif
