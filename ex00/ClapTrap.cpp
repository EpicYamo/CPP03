/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 06:33:24 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/01 20:53:40 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :  _name(other._name), _hit_points(other._hit_points),
	_energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy assignment constructor called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "ClapTrap " << this->_name << " has already flatlined, it cannot perform an attack! It is now nothing but battlefield debris..." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is Out of juice! Low battery warning! Action aborted." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0 && amount != 0)
		std::cout << this->_name << ": is already broken and is now nothing but battlefield debris...!" << std::endl;
	else
	{
		std::cout << this->_name << ": took " << amount << " points of damage! That beautiful metal chassis is ruined!" << std::endl;
		if (amount > this->_hit_points)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << this->_name << ": is already dead, there is no hope left for this pile of scrap..." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "Slapped some duct tape on! " << this->_name << " recovered " << amount << " hit points!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points -= 1;
	}
	else
		std::cout << this->_name << ": no energy left to glue myself back together." << std::endl;
}
