#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

	public:
		Contact( void ) ;
		~Contact( void );
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nbr;
		std::string	secret;
		void		get_add( void );
	private:
	
};

#endif