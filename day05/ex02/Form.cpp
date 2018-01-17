/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:17:19 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 19:17:28 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


Form::Form( std::string name, int sign_grade, int exec_grade ) :
        _name(name),
        _is_signed(false),
        _sign_grade(sign_grade),
        _exec_grade(exec_grade){

    if (_sign_grade < 1 || _exec_grade < 1)
        throw GradeTooHighException();
    else if (_sign_grade > 150 || _exec_grade > 150)
        throw GradeTooLowException();
    return;
}

Form::Form( void ) : _name("undefined"), _sign_grade(1), _exec_grade(1){

    return;
}

Form::~Form( void ){

    return;
}

Form::Form( Form const &obj) :
    _name(obj._name),
    _sign_grade(obj._sign_grade),
    _exec_grade(obj._exec_grade){

    *this = obj;
    return;
}

Form & Form::operator=( Form const &obj ){

    this->_is_signed = obj._is_signed;
    return *this;
}

std::string Form::getName( void ) const{

    return this->_name;
}

std::string Form::getTarget( void ) {

    return this->_target;
}

bool Form::getSignState( void ) const{

    return this->_is_signed;
}

int Form::getSignGrade( void ) const{

    return this->_sign_grade;
}

int Form::getExecGrade( void ) const{

    return this->_exec_grade;
}

void Form::setSignState( void ) {

    this->_is_signed = true;
}

void Form::beSigned( Bureaucrat &obj ){

    if (obj.getGrade() > this->_sign_grade)
        throw Form::GradeTooLowException();
    else if (this->_is_signed == true)
        std::cout << obj.getName() << " can't sign the form " << this->_name << " because the form is already signed" << std::endl;
    else
    {
        this->_is_signed = true;
    }
}

Form::GradeTooHighException::GradeTooHighException(){

    return;
}

Form::GradeTooHighException::~GradeTooHighException() throw(){

    return;
}

Form::GradeTooHighException::GradeTooHighException( Form::GradeTooHighException const & src ){

    *this = src;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const &){

    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {

    return "ERROR: Sign/Exec grade set too high";
}

Form::GradeTooLowException::GradeTooLowException(){

    return;
}

Form::GradeTooLowException::~GradeTooLowException() throw(){

    return;
}

Form::GradeTooLowException::GradeTooLowException( Form::GradeTooLowException const & src ){

    *this = src;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const &){

    return *this;
}

const char* Form::GradeTooLowException::what() const throw() {

    return "ERROR: Sign/Exec grade set too low";
}

Form::FormNotSignedException::FormNotSignedException(){

    return;
}

Form::FormNotSignedException::~FormNotSignedException() throw(){

    return;
}

Form::FormNotSignedException::FormNotSignedException( Form::FormNotSignedException const & src ){

    *this = src;
}

Form::FormNotSignedException & Form::FormNotSignedException::operator=(FormNotSignedException const &){

    return *this;
}

const char* Form::FormNotSignedException::what() const throw() {

    return "ERROR: Form needs to be signed to execute";
}

std::ostream & operator<<( std::ostream & o, Form const & obj){

    o << "Form Name: " << obj.getName() << std::endl << 
    "Form Sign Grade: " << obj.getSignGrade() << std::endl <<
    "Form Exec Grade: " << obj.getExecGrade() << std::endl <<    
    "Form Sign State: " << obj.getSignState() << std::endl;
    return o;
}