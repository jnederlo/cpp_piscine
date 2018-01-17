/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:56:52 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 19:20:00 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(){

    Bureaucrat b1( "Gerry", 150 );
    Bureaucrat b2( "Smith", 1 );
    Bureaucrat b5( "Jeff", 27 );

    /////////////////////////////////////////////////////////////////////
    /////////////////////// Bureaucratic Checks /////////////////////////
    /////////////////////////////////////////////////////////////////////

    std::cout << b1 << std::endl;
    try
    {
        std::cout << b1.getName() << " miss-filed some cryptocurrency tax forms and loses 1 grade" << std::endl;
        b1.decrementGrade();
        std::cout << b1 << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << b2 << std::endl;
    try
    {
        std::cout << b2.getName() << " increased the wait time per customer to form longer lines and gets rewarded 1 grade increase" << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Mr. Johnson is born into the bureaucratic world with a grade of 0!" << std::endl;
        Bureaucrat b3( "Mr. Johnson", 0 );
        std::cout << b3 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Mr. Smith is born into the bureaucratic world with a grade of 151!" << std::endl;
        Bureaucrat b4( "Mr. Smith", 151 );
        std::cout << b4 << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    /////////////////////////////////////////////////////////////////////
    //////////////////////// Robotomized Checks /////////////////////////
    /////////////////////////////////////////////////////////////////////

    RobotomyRequestForm r1( "Adolf Hitler" );
    std::cout << r1 << std::endl;

    std::cout << r1.getName() << " target is " << r1.getTarget() << " to be executed by:" << std::endl << b5 << std::endl;
    b5.executeForm(r1);

    std::cout << std::endl;

    Bureaucrat b6( "Charles", 73);
    std::cout << b6.getName() << " is a new bureaucrat assigned to sign " << r1.getName() << std::endl;
    b6.signForm( r1 );

    std::cout << std::endl << b6.getName() << " gets promoted 2 grades" << std::endl;
    b6.incrementGrade();
    b6.incrementGrade();

    std::cout << b6 << std::endl;

    std::cout << b6.getName() << " now attempts to sign " << r1.getName() << std::endl;
    b6.signForm( r1 );

    std::cout << r1 << std::endl;

    std::cout << b5.getName() << " now attempts to execute " << r1.getName() << std::endl;
    b5.executeForm(r1);

    /////////////////////////////////////////////////////////////////////
    /////////////////////// Presidential Checks /////////////////////////
    /////////////////////////////////////////////////////////////////////
    
    PresidentialPardonForm p1( "the trigger finger" );
    std::cout << p1 << std::endl;

    std::cout << p1.getName() << " is to be used to exonerate " << p1.getTarget() << std::endl;
    b5.executeForm(p1);

    std::cout << std::endl;

    Bureaucrat b7( "Vice President", 10);
    std::cout << b7.getName() << " is called in to sign the " << p1.getName() << std::endl;
    b7.signForm( p1 );

    std::cout << p1 << std::endl;

    Bureaucrat b8( "Mr. President", 1);
    std::cout << b8 << std::endl;
    std::cout << b8.getName() << " is called in to execute the " << p1.getName() << std::endl;
    b8.executeForm(p1);

    /////////////////////////////////////////////////////////////////////
    ////////////////////////// Shrubbery Checks /////////////////////////
    /////////////////////////////////////////////////////////////////////

    ShrubberyCreationForm s1( "Wildfire" );
    std::cout << s1 << std::endl;

    std::cout << b6.getName() << " is called upon to both sign and execute the building of the christmas tree this year " << std::endl;
    std::cout << b6 << std::endl;

    b6.signForm( s1 );
    b6.executeForm( s1 ); 

    return 0;
}