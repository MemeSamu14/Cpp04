/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:24:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 10:37:02 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal()
{
	std::cout << "Constructor called by WrongCat" << std::endl;
	return ;
}

WrongCat::WrongCat( std::string name ): WrongAnimal(name)
{
	std::cout << "Constructor called by WrongCat" << std::endl;
	this->type = type;
	return ;
}


WrongCat::WrongCat( const WrongCat& a ): WrongAnimal(a)
{
	this->type = a.type;
	return ;
}

WrongCat&	WrongCat::operator=( const WrongCat& a )
{
	this->type = a.type;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor called by WrongCat" << std::endl;
	return ;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miao Miao" << std::endl;
	return ;
}
