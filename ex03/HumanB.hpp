/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:01:29 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 18:48:14 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#	define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	
	private:
		std::string	_name;
		Weapon* _weap;

	public:
		HumanB( std::string arme );
		~HumanB ( void );
		void	attack( void );
		void	setWeapon( Weapon& weap );
};


#endif