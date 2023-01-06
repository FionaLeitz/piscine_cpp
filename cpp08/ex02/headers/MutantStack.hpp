#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class	MutantStack : public std::stack< T > {
	public:
		MutantStack( void ) : std::stack< T >() {}
		MutantStack( const MutantStack & value ) :std::stack< T >( value ) {}
		virtual ~MutantStack( void ) {}

		MutantStack &	operator=( const MutantStack & rhs ) {
			std::stack< T >::operator=(rhs);
			return *this;
		}

		// iterator begin
		std::stack::container_type::iterator
		// iterator end

		// const iterator begin
		// const iterator end

		// iterator rbegin
		// iterator rend

		// const iterator rbegin
		// const iterator rend

};

#endif