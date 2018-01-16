/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:26:18 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 23:33:09 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{

protected:
    std::string name;
    int hitPoints;
    unsigned int maxHitPoints;
    int energyPoints;
    unsigned int maxEnergyPoints;
    int level;
    unsigned int meleeAttackDamage;
    unsigned int rangedAttackDamage;
    unsigned int armorDamageReduction;
    ClapTrap( void );

public:

    ClapTrap( std::string name );                   //constructor
    ~ClapTrap( void );                              //destructor
    ClapTrap( ClapTrap const & src );               //copy method
    ClapTrap & operator=( ClapTrap const & rhs );   //assignment operator overload
    std::string getName( void );
    unsigned int rangedAttack(std::string const & target);
    unsigned int meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setName(std::string name);

};


#endif