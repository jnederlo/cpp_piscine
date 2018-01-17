/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:45:31 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 17:19:22 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include "Form.hpp"

class Form;

class Intern{


    public:
        Intern( void );
        ~Intern( void );
        Intern( Intern const &obj );
        Intern & operator=( Intern const & );

        Form* makeForm( std::string name, std::string target );

    class UnknownFormRequestException : public std::exception{

        public:
            UnknownFormRequestException( void );
            ~UnknownFormRequestException( void ) throw();
            UnknownFormRequestException( UnknownFormRequestException const & src );
            UnknownFormRequestException & operator=( UnknownFormRequestException const &obj);
            virtual const char* what() const throw();
    };

};

#endif 