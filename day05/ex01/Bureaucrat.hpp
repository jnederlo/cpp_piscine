/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:28:04 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 15:19:16 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

    private:
        std::string const _name;
        int _grade;

    public:
        Bureaucrat( std::string const name, int grade );
        Bureaucrat( void );
        ~Bureaucrat( void );
        Bureaucrat( Bureaucrat const & src );
        Bureaucrat & operator=( Bureaucrat const & obj );
        std::string getName( void ) const;
        int getGrade( void ) const;
        void incrementGrade( void );
        void decrementGrade( void );
        void signForm( Form &obj );

    class GradeTooHighException : public std::exception{

        public:
            GradeTooHighException( void );
            ~GradeTooHighException( void ) throw();
            GradeTooHighException( GradeTooHighException const & src );
            GradeTooHighException & operator=( GradeTooHighException const &obj);
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception{

        public:
            GradeTooLowException( void );
            ~GradeTooLowException( void ) throw();
            GradeTooLowException( GradeTooLowException const & src );
            GradeTooLowException & operator=( GradeTooLowException const &obj);
            virtual const char* what() const throw();
    };

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & obj);




#endif