/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:02:13 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 14:22:32 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form{

    public:
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( void );
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm( ShrubberyCreationForm const &obj );
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const &obj );

        void execute( Bureaucrat const &executor ) const;
};


#endif