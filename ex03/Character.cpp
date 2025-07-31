/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:03:39 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 18:01:44 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name )
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	return ;
}

Character::Character( const Character& a )
{
	this->name = a.getName();
	for (int i = 0; i < 4; i++)
		inventory[i] = a.inventory[i];
}

const Character& Character::operator=( const Character& a )
{
	this->name = a.getName();
	for (int i = 0; i < 4; i++)
		inventory[i] = a.inventory[i];
	return (*this);
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	return ;
}

std::string const& Character::getName( void ) const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	while (inventory[i] != NULL && i < 3)
		i++;
	if (i >= 4 || inventory[i] != NULL)
		std::cout << "Nothing Happend" << std::endl;
	else
	{
		this->inventory[i] = m;
		std::cout << "Added to " << this->name << "'s inventory" << std::endl;
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3) 
		std::cout << "Nothing Happend" << std::endl;
	else if (inventory[idx] != NULL)
	{
		inventory[idx] = NULL;
		std::cout << "Unequipped" << std::endl;
	}
	else
		std::cout << "Nothing in that slot" << std::endl;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3) 
		std::cout << "Nothing Happend" << std::endl;
	else if (inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
	}
	else
		std::cout << "Nothing Happend" << std::endl;
	return ;
}
