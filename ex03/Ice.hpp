/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:19:31 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:24:09 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class AMateria;
class ICharacter;

class	Ice: public AMateria
{
	private:
	public:
		Ice( void );
		Ice( std::string type );
		Ice( const Ice& a );
		const Ice& operator=( const Ice& a );
		~Ice( void );
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
	
};

#endif