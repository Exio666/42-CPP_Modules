/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:22:37 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/13 11:41:30 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Cure::Cure()
{
	type = "cure";
}

Cure::Cure(const Cure& copy)
{
	if (this == &copy)
		return ;
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Cure::~Cure()
{

}

//!------------------------------OPERATOR-------------------------------------

Cure	&	Cure::operator=(const Cure& copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure();
	return cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" <<  std::endl;
}