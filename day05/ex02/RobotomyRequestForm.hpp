/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:42:51 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/16 14:23:48 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"


class RobotomyRequestForm : public Form {

    public:
        RobotomyRequestForm( std::string target );
        RobotomyRequestForm( void );
        ~RobotomyRequestForm( void );
        RobotomyRequestForm( RobotomyRequestForm const &obj );
        RobotomyRequestForm & operator=( RobotomyRequestForm const &obj );

        void execute( Bureaucrat const &executor ) const;

};

#endif