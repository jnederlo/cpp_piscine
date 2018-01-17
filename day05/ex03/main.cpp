/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:56:52 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 19:14:18 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
	Intern an_intern;

	Form* rrf;
	Form* scf;
	Form* ppf;
	Form* rand_form;
	
	rrf = an_intern.makeForm("robotomy request", "Rick");
	if (rrf)
		std::cout << "Target: " << rrf->getTarget() << std::endl << std::endl;

	scf = an_intern.makeForm("shrubbery creation", "Morty");
	if (scf)
		std::cout << "Target: " << scf->getTarget() << std::endl << std::endl;

	ppf = an_intern.makeForm("presidential pardon", "Rick and Morty");
	if (ppf)
		std::cout << "Target: " << ppf->getTarget() << std::endl << std::endl;
	
	rand_form = an_intern.makeForm("death certificate", "Delores");
	if (rand_form)
		std::cout << "Target: " << rand_form->getTarget() << std::endl;


	delete rrf;
	delete scf;
	delete ppf;

	return (0);
}