/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:25:56 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 23:31:12 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>


//DEFAULT CONSTRUCTOR METHOD:
ClapTrap::ClapTrap( void ){

    std::cout << "CL4P-TP> High Priestess Claptrap!" << std::endl;  

    return ;
}

//DEFAULT CONSTRUCTOR METHOD:
ClapTrap::ClapTrap( std::string name ) : name(name){

    std::cout << "CL4P-TP> High Priestess Claptrap!" << std::endl;  

    return ;
}

//DESTRUCTOR METHOD:
ClapTrap::~ClapTrap( void ){

    std::cout << "CL4P-TP> The Claptrap High Priestess Assends Into Heaven..." << std::endl;

    return ;
}

//COPY METHOD:
ClapTrap::ClapTrap( ClapTrap const & src ){

    // std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return ;
}


//Assignation Operator Overload Method:
ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ){

    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->maxHitPoints = rhs.maxHitPoints;
    this->energyPoints = rhs.energyPoints;
    this->maxEnergyPoints = rhs.maxEnergyPoints;
    this->level = rhs.level;
    this->meleeAttackDamage = rhs.meleeAttackDamage;
    this->rangedAttackDamage = rhs.rangedAttackDamage;
    this->armorDamageReduction = rhs.armorDamageReduction;

    std::cout << "CL4P-TP> High Priestess Claptrap!" << std::endl;

    return *this;
}

unsigned int    ClapTrap::rangedAttack(std::string const & target ){

    std::cout << "CL4P-TP> " << this->name << " attacks " << target << " at range causing " << this->rangedAttackDamage << " damage" << std::endl;;

    return this->rangedAttackDamage;
}

unsigned int   ClapTrap::meleeAttack( std::string const & target ){

    std::cout << "CL4P-TP> " << this->name << " attacks " << target << " with a confusing melee attack for " << this->meleeAttackDamage << " hit points" << std::endl;

    return this->meleeAttackDamage;
}

void    ClapTrap::takeDamage( unsigned int amount ){

    if (amount == 0){
        std::cout << "\t " << this->name << " is disgusted by the lack of energy and loses 0 HP -- > remaining HP of " << this->hitPoints << std::endl;
    }
    else if (this->hitPoints == 0){
        std::cout << "\t " << this->name << " is still floundering from the last attack and can't take anymore --> HP of 0" << std::endl;
    }
    else if (amount <= this->armorDamageReduction){
        std::cout << "\t " << this->name << " calls you a sissy and laughs at your pathetic attack and loses 0 HP --> remaining HP of " << this->hitPoints << std::endl;
    }
    else if ((this->hitPoints - int(amount - this->armorDamageReduction)) <= 0){
        this->hitPoints = 0;
        std::cout << "\t " << this->name << " succumbs to the attack in a rather weak fashion and loses all HP --> reamining HP of 0" << std::endl;
    }
    else {
        this->hitPoints -= int(amount - this->armorDamageReduction);
        std::cout << "\t " << this->name << " loses " << amount - this->armorDamageReduction << " hit points from the attack --> remaining HP of " << this->hitPoints << std::endl;
    }

    return ;
}

void    ClapTrap::beRepaired( unsigned int amount ){

    if (this->hitPoints == 100){
        std::cout << "CL4P-TP> " << this->name << " discovers an extra repair pack and flaunts it as he remains at HP of 100" << std::endl;
    }
    else if ((this->hitPoints + int(amount)) > int(this->maxHitPoints)){
        this->hitPoints = int(this->maxHitPoints);
        std::cout << "CL4P-TP> " << this->name << " takes a break with a nice relaxing boost from a repair back HP increased to 100" << std::endl;
    }
    else {
        this->hitPoints += int(amount);
        std::cout << "CL4P-TP> " << this->name << " finds a desperately needed repair pack HP increased to " << this->hitPoints << std::endl;
    }

    return ;
}

void ClapTrap::setName(std::string name){

    this->name = name;
    
    return;
}

std::string ClapTrap::getName( void ){

    return this->name;
}