/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:07:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/20 15:24:29 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string	type;	
	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal& a );
		Animal&	operator=( const Animal& a );
		virtual ~Animal( void );
		std::string	getType( void ) const;
		void		setType( std::string type );
		virtual void makeSound( void ) const;
};


#endif