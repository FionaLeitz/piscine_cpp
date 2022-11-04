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
		std::string	show;
		void		get_add( int count );

	private:
		void		_prompt_add( const char *str, int line );
		void		_resize( int size, int line );
	
};

#endif