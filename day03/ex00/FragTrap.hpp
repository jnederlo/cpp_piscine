/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:50:14 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 18:02:23 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class FragTrap{

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
    unsigned int powerAttackDamage;

    FragTrap( std::string name );                   //constructor
    ~FragTrap( void );                              //destructor
    FragTrap( FragTrap const & src );               //copy method
    FragTrap & operator=( FragTrap const & rhs );   //assignment operator overload

    unsigned int rangedAttack(std::string const & target);
    unsigned int meleeAttack(std::string const & target);


    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int vaulthunter_dot_exe(std::string const & target);
    void setName(std::string name);


};



#endif