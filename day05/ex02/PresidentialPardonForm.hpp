/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:25:47 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 14:26:08 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {

    public:
        PresidentialPardonForm( std::string target );
        PresidentialPardonForm( void );
        ~PresidentialPardonForm( void );
        PresidentialPardonForm( PresidentialPardonForm const &obj );
        PresidentialPardonForm & operator=( PresidentialPardonForm const &obj );

        void execute( Bureaucrat const &executor ) const;

};

#endif