/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:41:41 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 15:21:41 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const name, int grade ) :
            _name(name),
            _grade(grade){
        
        if (_grade < 1)
            throw GradeTooHighException();
        else if (_grade > 150)
            throw GradeTooLowException();
        
        return ;
}

Bureaucrat::Bureaucrat( void ){

    return;
}

Bureaucrat::~Bureaucrat( void ){

    return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ){

    *this = src;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & obj ){

    this->_grade = obj._grade;

    return *this;
}

std::string Bureaucrat::getName( void ) const {

    return this->_name;
}

int Bureaucrat::getGrade( void ) const {

    return this->_grade;
}

void    Bureaucrat::incrementGrade( void ){

    this->_grade--;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrementGrade( void ){

    this->_grade++;
    if (this->_grade > 150 )
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){

    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){

    return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( Bureaucrat::GradeTooHighException const & src ){

    *this = src;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &){

    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

    return "Grade set too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){

    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){

    return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( Bureaucrat::GradeTooLowException const & src ){

    *this = src;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &){

    return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

    return "Grade set too low";
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & obj){

    o << "Bureaucrat Name: " << obj.getName() << std::endl << "Bureaucrat Grade: " << obj.getGrade() << std::endl;
    return o;
}
