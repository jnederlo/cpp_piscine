/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:10:38 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 19:19:38 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){

    std::string str = "HI THIS IS BRAIN";

    std::string    *ptr = &str;
    std::string    &ref = str;
    
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;

    return 0;
}