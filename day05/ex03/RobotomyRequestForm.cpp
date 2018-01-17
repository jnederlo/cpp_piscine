/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:58:56 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 19:15:10 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "Robotomy Request Form", 72, 45 ){

    _target = target;
    return;
}

RobotomyRequestForm::RobotomyRequestForm( void ) : Form(){

    _target = "undefined";
    return;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){

    return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &obj) : Form(obj._name, obj._sign_grade, obj._exec_grade){
    
    *this = obj;
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const &obj ){

    this->_target = obj._target;
    return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const &executor ) const{

    std::srand (std::time(nullptr));
    if (executor.getGrade() > this->_exec_grade)
        throw Form::GradeTooLowException();
    else if (this->_is_signed == false)
        throw Form::FormNotSignedException();
    else{
        std::cout << "zzzzZZZZZZzzzzzZZZZZZ ";
        if (std::rand() % 2)
            std::cout << this->_target << " has successfully been robotomized" << std::endl;
        else
            std::cout << this->_target << " failed to be robotomized" << std::endl;
    }

}