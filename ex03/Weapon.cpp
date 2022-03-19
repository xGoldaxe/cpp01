/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:04:51 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 18:34:33 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon( std::string arme ) : type(arme) {
    
    return ;
}

Weapon::~Weapon( void ) {

    return ;
}

std::string& Weapon::getType( void ) {

    return (this->type);
}

void    Weapon::setType( std::string type ) {

    this->type = type;
    return ;
}