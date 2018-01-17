/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:01:16 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 14:45:05 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "Shrubbery Creation Form", 145, 137 ){

    _target = target;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form(){

    _target = "undefined";
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){

    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &obj) : Form(obj._name, obj._sign_grade, obj._exec_grade){

    *this = obj;
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const &obj ){

    this->_target = obj._target;
    return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const &executor ) const{

    std::ofstream output_file;

    if (executor.getGrade() > this->_exec_grade)
        throw Form::GradeTooLowException();
    else if (this->_is_signed == false)
        throw Form::FormNotSignedException();
    else{
        output_file.open(this->_target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
        if (output_file.fail())
            std::cerr << "Error opening the output file" << std::endl;
        output_file << "      *      " << std::endl; 
        output_file << "      O      " << std::endl; 
        output_file << "     OOO     " << std::endl; 
        output_file << "    OOOOO    " << std::endl; 
        output_file << "   OOOOOOO   " << std::endl; 
        output_file << "  OOOOOOOOO  " << std::endl; 
        output_file << "      |      " << std::endl; 
        output_file << " 11111111111 " << std::endl;
    }
}