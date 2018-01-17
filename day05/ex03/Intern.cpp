/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:45:27 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 19:04:05 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void ){

    return;
}

Intern::~Intern( void ){

    return;
}

Intern::Intern( Intern const &obj ){

    *this = obj;
    return;
}

Intern &Intern::operator=( Intern const & ){

    return *this;
}

Form* Intern::makeForm( std::string name, std::string target ){

    try{
        if (name == "shrubbery creation")
        {
            Form *f1 = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " << f1->getName() << std::endl;
            return f1;
        }
        else if (name == "robotomy request")
        {
            Form *f2 = new RobotomyRequestForm(target);
            std::cout << "Intern creates " << f2->getName() << std::endl;
            return f2;
        }
        else if (name == "presidential pardon")
        {
            Form *f3 = new PresidentialPardonForm(target);
            std::cout << "Intern creates " << f3->getName() << std::endl;
            return f3;
        }
        else
            throw Intern::UnknownFormRequestException();
    }
    catch (Intern::UnknownFormRequestException e)
    {
        std::cout << e.what() << std::endl;
    }
    return (nullptr);
}

Intern::UnknownFormRequestException::UnknownFormRequestException(){

    return;
}

Intern::UnknownFormRequestException::~UnknownFormRequestException() throw(){

    return;
}

Intern::UnknownFormRequestException::UnknownFormRequestException( Intern::UnknownFormRequestException const & src ){

    *this = src;
}

Intern::UnknownFormRequestException & Intern::UnknownFormRequestException::operator=(UnknownFormRequestException const &){

    return *this;
}

const char* Intern::UnknownFormRequestException::what() const throw() {

    return "ERROR: Unknown Form Request";
}