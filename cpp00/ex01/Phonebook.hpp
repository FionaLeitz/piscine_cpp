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