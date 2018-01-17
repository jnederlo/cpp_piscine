/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:03:35 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 15:19:55 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:
        std::string const _name;
        bool        _is_signed;
        int         const _sign_grade;
        int         const _exec_grade;

    public:
        Form( std::string const name, int const _sign_grade, int const _exec_grade );
        ~Form( void );
        Form( void );
        Form( Form const &obj);
        Form & operator=( Form const &obj );
        std::string getName( void ) const;
        bool getSignState( void ) const;
        int getSignGrade( void ) const;
        int getExecGrade( void ) const;
        void beSigned( Bureaucrat & obj );
        void setSignState( void );
        

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

std::ostream & operator<<( std::ostream & o, Form const & obj);

#endif