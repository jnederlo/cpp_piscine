/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:40 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 20:49:39 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>

class ScavTrap{

public:
    std::string name;
    int hitPoints;
    unsigned int maxHitPoints;
    int energyPoints;
    unsigned int maxEnergyPoints;
    int level;
    unsigned int meleeAttackDamage;
    unsigned int rangedAttackDamage;
    unsigned int armorDamageReduction;
    unsigned int challengeDamage;

    ScavTrap( std::string name );                   //constructor
    ~ScavTrap( void );                              //destructor
    ScavTrap( ScavTrap const & src );               //copy method
    ScavTrap & operator=( ScavTrap const & rhs );   //assignment operator overload

    unsigned int rangedAttack(std::string const & target);
    unsigned int meleeAttack(std::string const & target);


    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int challengeNewcomer(std::string const & target);
    void setName(std::string name);


};



#endif