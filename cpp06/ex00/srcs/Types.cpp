/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:42:12 by fleitz            #+#    #+#             */
/*   Updated: 2023/01/04 09:42:14 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Types.hpp"

Types::Types( void ) : _character( 0 ), _integer( 0 ), _float( 0 ), _double( 0 ) {
	return ;
}

Types::Types( char * string ) {
	std::string	str(string);

	this->setStr( str );
	return ;
}

Types::Types( const Types & value ) : _str( value.getStr() ), _character( value.getCharacter() ),
	_integer( value.getInteger() ), _float( value.getFloat() ), _double( value.getDouble() ) {
	return ;
}

Types::~Types( void ) {
	return ;
}

Types &	Types::operator=( const Types & rhs ) {
	this->setStr( rhs.getStr() );
	this->setCharacter( rhs.getCharacter() );
	this->setInteger( rhs.getInteger() );
	this->setFloat( rhs.getFloat() );
	this->setDouble( rhs.getDouble() );
	return *this;
}

bool	Types::checkspec( void ) const {
	if ( this->getStr() == "nan" || this->getStr() == "nanf" ) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return true;
	}
	if ( this->getStr() == "-inf" || this->getStr() == "-inff" ) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return true;
	}
	if ( this->getStr() == "+inf" || this->getStr() == "+inff" ) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return true;
	}
	return false;
}

bool	Types::checknbr( void ) {
	int		count = -1;
	size_t	point = this->getStr().find('.');

	if ( isdigit(this->getStr().c_str()[0]) == 0 && this->getStr().size() == 1) {
		this->setType("char");
		this->convert();
		return true;
	}
	if ( point != this->getStr().rfind('.') )
		return false;
	if ( this->getStr()[0] == '+' || this->getStr()[0] == '-' )
		count++;
	while ( this->getStr().c_str()[++count] ) {
		if ( isdigit(static_cast<int>(this->getStr().c_str()[count])) == 0 && this->getStr().c_str()[count] != '.' ) {
			if ( this->getStr().c_str()[count] == 'f' && this->getStr().c_str()[count + 1] == '\0' )
				break ;
			return false;
		}
	}
	if ( this->getStr().c_str()[count] == 'f' && (this->getStr().c_str()[count - 1] == '.' || point == this->getStr().npos) )
		return false;
	if ( this->getStr().c_str()[count] == '.' )
		return false;
	if ( this->getStr().c_str()[count] == 'f' )
		this->setType("float");
	else if ( point != this->getStr().npos )
		this->setType("double");
	else
		this->setType("int");
	this->convert();
	return true;
}

void	Types::convert( void ) {
	char	*end;
	if ( this->getType() == "char" ) {
		this->setCharacter(this->getStr()[0]);
		this->setInteger(static_cast<int>(this->getCharacter()));
		this->setFloat(static_cast<float>(this->getCharacter()));
		this->setDouble(static_cast<double>(this->getCharacter()));
	}
	else if ( this->getType() == "int" ) {
		this->setInteger(atoi(this->getStr().c_str()));
		this->setCharacter(static_cast<char>(this->getInteger()));
		this->setFloat(static_cast<float>(this->getInteger()));
		this->setDouble(static_cast<double>(this->getInteger()));
	}
	else if ( this->getType() == "float" ) {
		this->setFloat(atof(this->getStr().c_str()));
		this->setCharacter(static_cast<char>(this->getFloat()));
		this->setInteger(static_cast<int>(this->getFloat()));
		this->setDouble(static_cast<double>(this->getFloat()));
	}
	else if ( this->getType() == "double" ) {
		this->setDouble(strtod(this->getStr().c_str(), &end));
		this->setCharacter(static_cast<char>(this->getDouble()));
		this->setInteger(static_cast<int>(this->getDouble()));
		this->setFloat(static_cast<float>(this->getDouble()));
	}
	return ;
}

std::string	Types::getType( void ) const {
	return this->_type;
}

void	Types::setType( std::string str ) {
	this->_type = str;
	return ;
}

std::string	Types::getStr( void ) const {
	return this->_str;
}

void	Types::setStr( std::string str ) {
	this->_str = str;
	return ;
}

char	Types::getCharacter( void ) const {
	return this->_character ;
}

void	Types::setCharacter( char character ) {
	this->_character = character;
	return ;
}

int	Types::getInteger( void ) const {
	return this->_integer;
}

void	Types::setInteger( int nbr ) {
	this->_integer = nbr;
	return ;
}

float	Types::getFloat( void ) const {
	return this->_float;
}

void	Types::setFloat( float nbr ) {
	this->_float = nbr;
	return ;
}

double	Types::getDouble( void ) const {
	return this->_double;
}

void	Types::setDouble( double nbr ) {
	this->_double = nbr;
	return ;
}

std::ostream &	operator<<( std::ostream & o, Types const & rhs ) {
	int	precision = rhs.getStr().size() - 1;

	std::cout << "precision = " << precision << std::endl;
	if ( rhs.getType() == "int" )
		precision += 2;
	else if ( rhs.getType() == "float" )
		precision--;
	if ( rhs.getStr()[0] == '+' || rhs.getStr()[0] == '-' )
		precision--;
	if ( rhs.getCharacter() < 0 || rhs.getCharacter() > 127
		|| rhs.getDouble() > 127 ||  rhs.getDouble() < -128 )
		o << "char: impossible" << std::endl;
	else if ( !isprint(static_cast<int>(rhs.getCharacter())) )
		o << "char: non displayable" << std::endl;
	else
		o << "char: " << rhs.getCharacter() << std::endl;
	if ( rhs.getDouble() > 2147483647 || rhs.getDouble() < -2147483648 )
		o << "int: impossible" << std::endl;
	else
		o << "int: " << rhs.getInteger() << std::endl;
	o << "float: " << std::showpoint << std::setprecision(precision) << rhs.getFloat() << "f" << std::endl;
	o << "double: " << std::showpoint << std::setprecision(precision) << rhs.getDouble() << std::endl;
	return o;
}
