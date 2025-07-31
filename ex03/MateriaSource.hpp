/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:18:17 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:32:05 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*learned[4];
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& a );
		MateriaSource&	operator=( const MateriaSource& a );
		~MateriaSource( void );
		void		learnMateria(AMateria* a);
		AMateria*	createMateria(const std::string& type);
		AMateria	*getMateria( int index ) const;

};

#endif