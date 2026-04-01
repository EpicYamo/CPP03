/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 06:33:27 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/01 07:16:01 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap trapA("Rusty");
	ClapTrap trapB("Shiny");

	std::cout << "--- BATTLE COMMENCES ---" << std::endl << std::endl;
	std::cout << std::endl;
	trapA.attack("Shiny");
	trapB.takeDamage(5);
	std::cout << std::endl;
	trapB.beRepaired(3);
	std::cout << std::endl;
	trapA.attack("Shiny");
	trapB.takeDamage(10);
	std::cout << std::endl;
	trapB.takeDamage(2);
	std::cout << std::endl;
	trapB.attack("Rusty");
	std::cout << std::endl;
	std::cout << "--- BATTLE ENDS ---" << std::endl << std::endl;
	return (0);
}