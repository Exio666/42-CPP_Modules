/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:22:37 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 14:41:35 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl alert;
	
	std::cout << "DEBUG" << std::endl;
	alert.complain("DEBUG");
	std::cout << "INFO" << std::endl;
	alert.complain("INFO");
	std::cout << "WARNING" << std::endl;
	alert.complain("WARNING");
	std::cout << "ERROR" << std::endl;
	alert.complain("ERROR");
	std::cout << "OTHER" << std::endl;
	alert.complain("OTHER");
}