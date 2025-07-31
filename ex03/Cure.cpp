/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:30:01 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:04:13 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria( )
{
	AMateria::type = "Cure";
	return ;
}

Cure::Cure( std::string type ): AMateria(type)
{
	AMateria::type = type;
	return ;
}

Cure::Cure( const Cure& a ): AMateria(a.type)
{
	return ;
}

const Cure& Cure::operator=( const Cure& a )
{
	this->type = a.type;
	return (*this);
}

Cure::~Cure( void )
{
	return ;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds * " << std::endl;
}
