/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:33:12 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 10:06:01 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ) :						m_name("EXE"), m_hitPoints(m_maxHitPoints),
											m_energyPoints(m_maxEnergyPoints)
{
	std::cout << "\033[1;235m*brrrrr-brrrr clap*\033[0m" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) :	m_name(name), m_hitPoints(m_maxHitPoints), 
											m_energyPoints(m_maxEnergyPoints)
{
	std::cout << "<you created the ClapTrap models the CL4P-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mRecompiling my combat code!\033[0m" << std::endl;
	std::cout << "\033[1;59m<It's not funny!>\033[0m" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &clapCopy )
{
	m_name = clapCopy.m_name;
	m_hitPoints = clapCopy.m_hitPoints;
	m_energyPoints = clapCopy.m_energyPoints;
	
	std::cout << "<you created the clone ClapTrap models the CL4T-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mC to the L to the 4 to the P to the WHAAT!\033[0m" << std::endl;
}

ClapTrap::~ClapTrap( )
{
	if (m_name == "EXE")
		std::cout << "\033[1;235m*trrrrr-trrrr clap*\033[0m" << std::endl;
	else
	{
		std::cout << "< You can't kill ClapTrap models the CL4P-TP\033[1;92m " << m_name << "\033[0m\"> :" << std::endl <<
		"\033[1;33mRUN FOR YOUR LIIIIIVES!!!\033[0m" << std::endl;
		std::cout << "<the CL4P-TP runs away into the sunset, I hope we never see it again>" << std::endl;	
	}
}

ClapTrap	ClapTrap::operator=( ClapTrap const &clapValue )
{
	m_name = clapValue.m_name;
	m_hitPoints = clapValue.m_hitPoints;
	m_energyPoints = clapValue.m_energyPoints;
	
	return (*this);
}

std::string	ClapTrap::quetesAttack[] = 
{
	"\033[1;33mStep right up, to the Bulletnator 9000!\033[0m",
	"\033[1;33mI am a tornado of death and bullets!\033[0m",
	"\033[1;33mStop me before I kill again, except don't!\033[0m",
	"\033[1;33mHehehehe, mwaa ha ha ha, MWAA HA HA HA!\033[0m",
	"\033[1;33mI'm on a roll!\033[0m",
	"\033[1;33mUnts unts unts unts!\033[0m",
	"\033[1;33mHa ha ha! Fall before your robot overlord!\033[0m",
	"\033[1;33mCan't touch this!\033[0m",
	"\033[1;33mHa! Keep 'em coming!\033[0m",
	"\033[1;33mThere is no way this ends badly!\033[0m",
	"\033[1;33mThis is why I was built!\033[0m"
};

std::string	ClapTrap::quetesDamage[] = 
{
	"\033[1;33mI'll stop talking when I'm dead!\033[0m",
	"\033[1;33mI'll die the way I lived: annoying!\033[0m",
	"\033[1;33mCome back here! I'll gnaw your legs off!\033[0m",
	"\033[1;33mThis could've gone better!\033[0m",
	"\033[1;33mYou look like something a skag barfed up!\033[0m",
	"\033[1;33mWhat's that smell? Oh wait, it's just you!\033[0m",
	"\033[1;33mYo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!\033[0m",
	"\033[1;33mYou're one screw short of a screw!\033[0m",
	"\033[1;33mI bet your mom could do better!\033[0m",
	"\033[1;33mYou look like something a skag barfed up!\033[0m",
	"\033[1;33mOh yeah? Well, uh... yeah.\033[0m",
	
};

std::string	ClapTrap::quetesRepaired[] = 
{
	"\033[1;33mHealth! Eww, what flavor is red?\033[0m",
	"\033[1;33mHealth over here!\033[0m",
	"\033[1;33mSweet life juice!\033[0m",
	"\033[1;33mI found health!\033[0m",
	"\033[1;33mHealsies!",
	"\033[1;33mCan I just say... yeehaw.\033[0m",
	"\033[1;33mYou are ace high!\033[0m",
	"\033[1;33mYou're the wub to my dub!\033[0m",
};

std::string	ClapTrap::getName( )
{
	return (m_name);
}

void		ClapTrap::rangedAttack( std::string const &target )
{
	std::cout << "<\033[1;92m" << m_name << "\033[0m attacks " << target << " at range, causing \033[1;34m"
	<< m_rangedAttackDamage << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;
	
	std::cout << "\t\t\t\t\t \033[01;31mHP " << m_hitPoints << "/" << m_maxHitPoints << std::endl;
	std::cout << "\t\t\t\t\t \033[01;36mEN " << m_energyPoints << "/" << m_maxEnergyPoints << "\033[0m" << std::endl;
}

void		ClapTrap::meleeAttack( std::string const &target )
{
	std::cout << "<\033[1;92m " << m_name << "\033[0m attacks " << target << " at melee, causing \033[1;34m"
	<< m_meleeAttackDamage << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;

	std::cout << "\t\t\t\t\t \033[01;31mHP " << m_hitPoints << "/" << m_maxHitPoints << std::endl;
	std::cout << "\t\t\t\t\t \033[01;36mEN " << m_energyPoints << "/" << m_maxEnergyPoints << "\033[0m" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	if ( amount >= m_armorDamageReduction)
		m_hitPoints -= (amount - m_armorDamageReduction); 
	if (m_hitPoints > MIN)
	{
		std::cout << "<\033[1;92m" << m_name << "\033[0m takes damage and loses \033[1;34m"
		<< amount << "\033[0m points of damage!>" << std::endl;
		std::cout << "<armor extinguishes \033[1;77m" << m_armorDamageReduction << "\033[0m damage>" << std::endl;
		std::string quete = quetesDamage[rand() % (sizeof(quetesDamage) / sizeof(quetesDamage[0]))];
		std::cout << quete << std::endl;
	}
	else
	{
		m_hitPoints = MIN;
		std::cout << "<\033[1;92m" << m_name << "\033[0m was knocked out>" << std::endl;
	}

	std::cout << "\t\t\t\t\t \033[01;31mHP " << m_hitPoints << "/" << m_maxHitPoints << std::endl;
	std::cout << "\t\t\t\t\t \033[01;36mEN " << m_energyPoints << "/" << m_maxEnergyPoints << "\033[0m" << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	m_hitPoints += amount;
	if (m_hitPoints <= m_maxHitPoints)
	{
		std::cout << "<\033[1;92m" << m_name << "\033[0m restores health by \033[1;34m"
		<< amount << "\033[0m points!>" << std::endl;
		
		std::string quete = quetesRepaired[rand() % (sizeof(quetesRepaired) / sizeof(quetesRepaired[0]))];
		std::cout << quete << std::endl;
	}
	else
	{
		m_hitPoints = m_maxHitPoints;
		std::cout << "<\033[1;92m" << m_name << "\033[0m is already in full health>" << std::endl;
	}
	std::cout << "\t\t\t\t\t \033[01;31mHP " << m_hitPoints << "/" << m_maxHitPoints << std::endl;
	std::cout << "\t\t\t\t\t \033[01;36mEN " << m_energyPoints << "/" << m_maxEnergyPoints << "\033[0m" << std::endl;
}
