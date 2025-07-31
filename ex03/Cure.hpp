/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:19:31 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:21:11 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class AMateria;
class ICharacter;

class	Cure: public AMateria
{
	private:
	public:
		Cure( void );
		Cure( std::string type );
		Cure( const Cure& a );
		const Cure& operator=( const Cure& a );
		~Cure( void );
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
	
};

#endif