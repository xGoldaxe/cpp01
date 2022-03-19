/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:04:51 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 18:37:30 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon& weap ) : _weap(weap), _name(name) {

    return ;
}

HumanA::~HumanA ( void ) {

    return ;
}

void    HumanA::attack( void ) {

    std::cout << this->_name << " attacks with their " << this->_weap.getType() << std::endl;
    return ;
}