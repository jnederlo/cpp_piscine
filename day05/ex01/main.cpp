/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:56:52 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/15 21:41:18 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(){

    Bureaucrat b1( "Gerry", 150 );
    Bureaucrat b2( "Smith", 1 );
    Bureaucrat b5( "Jeff", 27 );
    Form f1( "to live", 26, 26);


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

    std::cout << b5 << std::endl;
    std::cout << f1 << std::endl;

    try
    {
        std::cout << "Can Jeff sign the form " << f1.getName() << " ?" << std::endl;
        b5.signForm( f1 );
    }
    catch (Form::GradeTooHighException e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Jeff is just a regular bureaucrat doing bureaucratic stuff, he gets rewarded 1 grade" << std::endl;
        b5.incrementGrade();
    }
    catch (Bureaucrat::GradeTooLowException e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException e1)
    {
        std::cout << e1.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << b5 << std::endl;

    try
    {
        std::cout << "Can Jeff now fill out the form " << f1.getName() << " ?" << std::endl;
        b5.signForm( f1 );
    }
    catch (Form::GradeTooHighException e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << f1 << std::endl;

    try
    {
        std::cout << "A form comes into the world with a sign grade of 0, and an exec grade of 0!" << std::endl;
        Form f3( "hard form", 0, 0 );
        std::cout << f3 << std::endl;
    }
    catch (Form::GradeTooHighException e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "A form comes into the world with a sign grade of 151, and an exec grade of 151!" << std::endl;
        Form f4( "easy form", 151, 151 );
        std::cout << f4 << std::endl;
    }
    catch (Form::GradeTooLowException e)
    {
        std::cout << e.what() << std::endl;
    }


    return 0;
}