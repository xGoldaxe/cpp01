/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:01:29 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 18:07:32 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#	define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
	
	private:
		std::string type;

	public:
		Weapon( std::string arme );
		~Weapon ( void );
		std::string& getType( void );
		void	setType( std::string type );
};


#endif