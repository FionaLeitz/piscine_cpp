#include "../headers/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm( "ShrubberyCreationForm", 145, 137 ) {
	this->_target = "NoTarget";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( "ShrubberyCreationForm", 145, 137 ) {
	this->_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & value ) : AForm( "ShrubberyCreationForm", 145, 137 ) {
	this->_target = value.getTarget();
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget( void ) const {
	return this->_target;
}

void	ShrubberyCreationForm::execute( const Bureaucrat & executor ) const {
	if (executor.getGrade() > this->getExecGrade())
		throw(AForm::CantExecuteFormException());
	else {
		std::string	str = this->getTarget() + "_shrubbery";
		std::ofstream	file( str.c_str() );
		file << "                                                         ." << std::endl
			<< "                                              .         ;  " << std::endl
			<< "                 .              .              ;%     ;;   " << std::endl
			<< "                   ,           ,                :;%  %;   " << std::endl
			<< "                    :         ;                   :;%;'     .,   " << std::endl
			<< "          ,.        %;     %;            ;        %;'    ,;" << std::endl
			<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
			<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl
			<< "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
			<< "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
			<< "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
			<< "                    `:%;.  :;bd%;          %;@%;'" << std::endl
			<< "                      `@%:.  :;%.         ;@@%;'   " << std::endl
			<< "                        `@%.  `;@%.      ;@@%;         " << std::endl
			<< "                          `@%%. `@%%    ;@@%;        " << std::endl
			<< "                            ;@%. :@%%  %@@%;       " << std::endl
			<< "                              %@bd%%%bd%%:;     " << std::endl
			<< "                                #@%%%%%:;;" << std::endl
			<< "                                %@@%%%::;" << std::endl
			<< "                                %@@@%(o);  . '         " << std::endl
			<< "                                %@@@o%;:(.,'         " << std::endl
			<< "                            `.. %@@@o%::;         " << std::endl
			<< "                               `)@@@o%::;         " << std::endl
			<< "                                %@@(o)::;        " << std::endl
			<< "                               .%@@@@%::;         " << std::endl
			<< "                               ;%@@@@%::;.          " << std::endl
			<< "                              ;%@@@@%%:;;;. " << std::endl
			<< "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	}
	return ;
}
