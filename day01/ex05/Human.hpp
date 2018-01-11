/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:34:34 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 22:39:33 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <iostream>
#include "Brain.hpp"

class Human {

public:

    Brain const brain;

    Human( void );
    ~Human( void );

    std::string identify() const ;
    const Brain &getBrain();

};

#endif