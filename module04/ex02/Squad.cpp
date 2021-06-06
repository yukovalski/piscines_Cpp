/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:23:08 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 11:51:23 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( ) :					countUnits(0), units(0)
{}

Squad::Squad( Squad const &copy ) :	countUnits(copy.countUnits)
{
	if (countUnits > 0)
		countUnits = 0;
	for (int i = 0; i < copy.countUnits; i++)
		units[i] = copy.units[i];
}

Squad::~Squad( )
{
	if (countUnits > 0)
	{
		for (int i = 0; i < countUnits; i++)
			delete units[i];
		delete units;
	}
}

Squad			&Squad::operator=( Squad const &value )
{
	if (&value == this)
		return (*this);

	if (countUnits > 0)
		for (int i = 0; i < countUnits; i++)
			units[i] = value.units[i];
	return (*this);
}

int				Squad::getCount( ) const
{
	return (countUnits);
}

ISpaceMarine	*Squad::getUnit( int val ) const
{
	if ( val < 0 || val > countUnits)
		return (0);
	return (units[val]);
}

int				Squad::push( ISpaceMarine *soldier )
{
	if ( !soldier )
		return (0);
	else
	{
		if (!units)
			units = new ISpaceMarine*[0];
		else
		{
			for (int i = 0; i < countUnits; i++)
				if (units[i] == soldier)
					return (countUnits);
			
			ISpaceMarine **tmp = new ISpaceMarine*[countUnits + 1];
			for (int i = 0; i < countUnits; i++)
				tmp[i] = units[i];
			delete [] units;
			tmp[countUnits] = soldier;
			units = tmp;
		}
		units[countUnits] = soldier;
		countUnits ++;
	}
	return (countUnits);
}