/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:30:01 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:04:00 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria( )
{
	AMateria::type = "ice";
	return ;
}

Ice::Ice( std::string type ): AMateria(type)
{
	AMateria::type = type;
	return ;
}

Ice::Ice( const Ice& a ): AMateria(a.type)
{
	return ;
}

const Ice& Ice::operator=( const Ice& a )
{
	this->type = a.type;
	return (*this);
}

Ice::~Ice( void )
{
	return ;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}