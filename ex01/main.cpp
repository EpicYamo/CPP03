/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 06:33:27 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/01 20:33:48 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "--- CHAINING TEST ---" << std::endl;
	{
		ScavTrap tmp("TempRobot");
	}
	std::cout << "\n--- ORTHODOX CANONICAL FORM TEST ---" << std::endl;
	ScavTrap original("Original");
	original.guardGate();
	ScavTrap copy(original);
	ScavTrap assigned;
	assigned = original;
	std::cout << std::endl;

	std::cout << "--- BATTLE COMMENCES ---" << std::endl;
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");
	std::cout << std::endl;

	scav.attack("Clappy");
	clap.takeDamage(20);
	std::cout << std::endl;

	scav.guardGate();
	scav.guardGate();
	std::cout << std::endl;

	std::cout << "--- REPAIR TEST ---" << std::endl;
	scav.takeDamage(30);
	scav.beRepaired(15);
	std::cout << std::endl;

	std::cout << "--- EXHAUSTION TEST ---" << std::endl;
	for (int i = 0; i < 48; i++)
		scav.attack("Target");

	scav.attack("Target");
	std::cout << std::endl;

	std::cout << "--- DEATH TEST ---" << std::endl;
	scav.takeDamage(100);
	scav.attack("Clappy");
	scav.beRepaired(20);

	std::cout << std::endl;
	std::cout << "--- BATTLE ENDS ---" << std::endl;

	return (0);
}
