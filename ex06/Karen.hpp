/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:39:50 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 20:37:26 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#	define KAREN_H

#include <iostream>
#include <string>

class Karen {
	
	private:
		std::string	_filterLevel;
		void    debug( void );
		void    info( void );
		void    warning( void );
		void    error( void );

	public:
		Karen( std::string filterLevel );
		~Karen( void );
		void    complain( std::string level );
};


#endif