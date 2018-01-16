/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:40 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 22:42:15 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

public:
    unsigned int challengeDamage;

    ScavTrap( std::string name );                   //constructor
    ~ScavTrap( void );                              //destructor
    ScavTrap( ScavTrap const & src );               //copy method
    ScavTrap & operator=( ScavTrap const & rhs );   //assignment operator overload

    unsigned int challengeNewcomer(std::string const & target);


};



#endif