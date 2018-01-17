/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:30:32 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 14:26:44 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "Presidential Pardon Form", 25, 5 ){

    _target = target;
    return;
}

PresidentialPardonForm::PresidentialPardonForm( void ) : Form(){

    _target = "undefined";
    return;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){

    return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &obj) : Form(obj._name, obj._sign_grade, obj._exec_grade){

    *this = obj;
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const &obj ){

    this->_target = obj._target;
    return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const &executor ) const{

    if (executor.getGrade() > this->_exec_grade)
        throw Form::GradeTooLowException();
    else if (this->_is_signed == false)
        throw Form::FormNotSignedException();
    else
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;

}