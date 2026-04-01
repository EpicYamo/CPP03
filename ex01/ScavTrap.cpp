/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:10:43 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/01 20:45:47 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_gate_keeper_mode = false;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->_gate_keeper_mode = false;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->_gate_keeper_mode = other._gate_keeper_mode;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	
	std::cout << "ScavTrap Copy assignment constructor called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	this->_gate_keeper_mode = other._gate_keeper_mode;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "ScavTrap " << this->_name << " already lost its life in the battle and cannot perform an attack." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage to its enemy!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is way too exhausted to perform this attack. It is not a MARATHON ROBOT!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_gate_keeper_mode == false)
	{
		std::cout << "ScavTrap " << this->_name << " has become a Gate Keeper. His soul is now lost in the abyss, and his body is just a door stopper..." << std::endl;
		this->_gate_keeper_mode = true;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " stopped being a Gate Keeper and found his own peace." << std::endl;
		this->_gate_keeper_mode = false;
	}
}
