/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:30:49 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 10:30:53 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Sacrifice.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Sacrifice lily("Lily");

	std::cout << robert << jim << joe << lily;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(lily);

	return 0; 
}