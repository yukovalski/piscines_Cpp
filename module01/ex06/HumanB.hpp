/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:07:00 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 15:46:01 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string m_name;
	Weapon *m_typeWeapon;

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &newTypeWeapon);
	void attack();

};

#endif