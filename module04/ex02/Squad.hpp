/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 13:32:34 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int				m_countUnits;
	ISpaceMarine	**units;
	
public:
	Squad( );
	Squad( Squad const &copy );
	virtual			~Squad( );
	Squad			&operator=( Squad const &value);
	
	int				getCount( ) const;
	ISpaceMarine*	getUnit( int val ) const;
	int				push( ISpaceMarine *soldier );
};

#endif
