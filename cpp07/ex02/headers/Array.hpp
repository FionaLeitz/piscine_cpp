#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template< typename T >
class	Array {
	public:
		Array( void ) : _size( 0 ), _array( NULL ) { }
		Array( unsigned int n ) : _size( n ) { 
			this->setArray(new T[n]);
			for ( unsigned int i = 0; i < n; i++ )
				this->getArray()[i] = 0;
			return ;
		}
		Array( const Array & value ) : _size( value.size() ){
			this->setArray(new T[this->size()]);
			for ( unsigned int i = 0; i < this->size(); i++ )
				this->getArray()[i] = value.getArray()[i];
		}
		~Array( void ) {
			delete [] this->getArray();
		}

		Array &			operator=( const Array & rhs ) {
			if ( this->size() != 0 )
				delete [] this->getArray();
			this->setSize(rhs.size());
			this->setArray(new T[this->size()]);
			for ( unsigned int i = 0; i < this->size(); i++ )
				this->getArray()[i] = rhs.getArray()[i];
			return *this;
		}
		T &			operator[]( const unsigned int index ) {
			if ( index >= this->size() )
				throw( std::out_of_range( "This index does not exist") );
			return this->getArray()[index];
		}
		const T &			operator[]( const unsigned int index ) const {
			if ( index >= this->size() )
				throw( std::out_of_range( "This index does not exist") );
			return this->getArray()[index];
		}

		unsigned int	size( void ) const { return this->_size; }
		void		setSize( unsigned int size ) { this->_size = size; }
		T *			getArray( void ) const { return this->_array; }
		void		setArray( T * array ) { this->_array = array; }

	private:
		unsigned int	_size;
		T *				_array;

};

#endif
