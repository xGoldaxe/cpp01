/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:46:45 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 20:26:52 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

Karen::Karen ( void ) {

    return ;
}

Karen::~Karen ( void ) {

    return ;
}

void    Karen::debug( void ) {

    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
    return ;
}

void    Karen::info( void ) {

    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
    return ;
}

void    Karen::warning( void ) {

    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void    Karen::error( void ) {

    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    return ;
}

void    Karen::complain( std::string level ) {
    
    void   (Karen::*f[4])( void ) = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };
    std::string strs[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    int i = 0;
    while (i < 4) {
        if (level == strs[i])
            (this->*f[i])();
        ++i;
    }
    return ;
}