/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:01:29 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 18:37:14 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#	define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
	
	private:
		Weapon& _weap;
		std::string	_name;

	public:
		HumanA( std::string arme, Weapon& weap );
		~HumanA ( void );
		void	attack( void );
};


#endif