/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:18:17 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:55:51 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
// #include "Cure.hpp"
// #include "Ice.hpp"

MateriaSource::MateriaSource( void )
{
	int	i = 0;

	while (i < 4)
	{
		learned[i] = NULL;
		i++;
	}
	return ;
}

AMateria *MateriaSource::getMateria( int index ) const
{
	return (this->learned[index]);
}

MateriaSource::MateriaSource( const MateriaSource& a )
{
	int	i = 0;

	while (i < 4)
	{
		this->learnMateria(a.getMateria(i));
		i++;
	}
	return ;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& a )
{
	int	i = 0;

	while (i < 4)
	{
		this->learnMateria(a.getMateria(i));
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource( void )
{
	int	i = 0;

	while (this->learned[i])
	{
		delete	this->learned[i];
		i++;
	}
	return ;
}

void	MateriaSource::learnMateria( AMateria* a )
{
	int	i = 0;

	while (this->learned[i])
		i++;
	if (i < 4)
	{
		this->learned[i] = a;
		std::cout << "oggetto " 
		<< a->getType() 
		<< " appreso nello slot " 
		<< i << std::endl;
	}
	else
		std::cout << "Nothing Happened" << std::endl;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	AMateria	*ret;
	if (type == "ice")
		ret = new Ice();
	else if (type == "cure")
		ret = new Cure();
	else
	{
		std::cout << "Nothing Happened" << std::endl;
		return (0);
	}
	std::cout << "Created with success" << std::endl;
	return (ret);
}
