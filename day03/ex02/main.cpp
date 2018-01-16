/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:00:10 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 23:34:24 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main() {


	FragTrap	claptrap1("Mr Sprinkles");
	ScavTrap	claptrap2("Ugly Joe");
	
	std::cout << std::endl;
	
    claptrap2.takeDamage(claptrap1.rangedAttack(claptrap2.getName()));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.getName()));

    claptrap1.takeDamage(claptrap2.rangedAttack(claptrap1.getName()));
    claptrap2.takeDamage(claptrap1.meleeAttack(claptrap2.getName()));

    claptrap1.takeDamage(claptrap2.rangedAttack(claptrap1.getName()));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.getName()));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.getName()));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.getName()));

    claptrap1.beRepaired(50);
    claptrap1.beRepaired(100);
	claptrap2.beRepaired(50);
	claptrap2.beRepaired(100);

	claptrap1.takeDamage(claptrap2.challengeNewcomer(claptrap1.getName()));
	claptrap2.takeDamage(claptrap1.vaulthunter_dot_exe(claptrap2.getName()));
	claptrap1.takeDamage(claptrap2.challengeNewcomer(claptrap1.getName()));
	claptrap2.takeDamage(claptrap1.vaulthunter_dot_exe(claptrap2.getName()));
	claptrap1.takeDamage(claptrap2.challengeNewcomer(claptrap1.getName()));
	claptrap2.takeDamage(claptrap1.vaulthunter_dot_exe(claptrap2.getName()));

    std::cout << std::endl;

	return 0;
}