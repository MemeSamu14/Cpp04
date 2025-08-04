/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:24:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 10:48:13 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	std::cout << "Constructor called by Dog" << std::endl;
	return ;
}

Dog::Dog( const Dog& a ): Animal(a)
{
	this->type = a.type;
	return ;
}

Dog&	Dog::operator=( const Dog& a )
{
	this->type = a.type;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Destructor called by Dog" << std::endl;
	return ;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Whoof Whoof" << std::endl;
	return ;
}
