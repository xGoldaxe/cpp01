/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:43:13 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 17:16:52 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    Zombie* zombies = new Zombie[N];

    for ( int i = 0; i < N; i++ ) {
        zombies[0].setName(name);
    }
    return (zombies);
}
