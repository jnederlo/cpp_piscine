/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:50:14 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 22:08:58 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

public:
    unsigned int powerAttackDamage;

    FragTrap( std::string name );                   //constructor
    ~FragTrap( void );                              //destructor
    FragTrap( FragTrap const & src );               //copy method
    FragTrap & operator=( FragTrap const & rhs );   //assignment operator overload

    unsigned int vaulthunter_dot_exe(std::string const & target);
};



#endif