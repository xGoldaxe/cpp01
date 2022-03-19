/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:39:50 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 20:11:49 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#	define KAREN_H

#include <iostream>
#include <string>

class Karen {
	
	private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );

	public:
		Karen( void );
		~Karen( void );
        void    complain( std::string level );
};


#endif