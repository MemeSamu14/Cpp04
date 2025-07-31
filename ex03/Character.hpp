/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:52:46 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:37:59 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character: public ICharacter
{
	private:
		std::string	name;
		AMateria*	inventory[4];
	public:
		Character( std::string name );
		Character( const Character& a );
		const Character& operator=( const Character& a );
		virtual ~Character( void );
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
	// virtual ~ICharacter() {}
};

#endif