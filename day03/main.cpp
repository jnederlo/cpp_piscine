/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:00:10 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 17:36:56 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int	main() {

	std::cout << "---> Create 2 robots (default and copy):" << std::endl;
	FragTrap	robot1("Mr Sprinkles");
	FragTrap	robot2(robot1);

	// srand(time(NULL));
	robot2.setName("Mrs Strawberry");

	std::cout << std::endl;
	
    //Round1
    robot2.takeDamage(robot1.rangedAttack(robot2.name));
    robot1.takeDamage(robot2.meleeAttack(robot1.name));

    //Round2
    robot1.takeDamage(robot2.rangedAttack(robot1.name));
    robot2.takeDamage(robot1.meleeAttack(robot2.name));

    //Kill Round
    robot1.takeDamage(robot2.rangedAttack(robot1.name));
    robot1.takeDamage(robot2.meleeAttack(robot1.name));
    robot1.takeDamage(robot2.meleeAttack(robot1.name));
    robot1.takeDamage(robot2.meleeAttack(robot1.name));

    //Heal Round
	robot2.beRepaired(100);
	robot2.beRepaired(100);

    //Power Round
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.name));
	robot2.takeDamage(robot1.vaulthunter_dot_exe(robot2.name));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.name));
	robot2.takeDamage(robot1.vaulthunter_dot_exe(robot2.name));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.name));
	robot2.takeDamage(robot1.vaulthunter_dot_exe(robot2.name));

	std::cout << std::endl << "---> End of treatment." << std::endl;
	return 0;
}