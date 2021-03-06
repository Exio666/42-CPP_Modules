/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:16:30 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/19 13:02:03 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Bureaucrat::Bureaucrat()
{
	std::string *tmp;
	
	tmp = const_cast <std::string *>(&this->name);
	*tmp = "somebody";
	echelon = 75;
}

Bureaucrat::Bureaucrat(std::string name, int echelon)
{
	std::string *tmp;
	
	tmp = const_cast <std::string *>(&this->name);
	*tmp = name;
	if (echelon > 150)
		throw GradeTooLowException();
	else if (echelon < 1)
		throw GradeTooHighException();
	else
		this->echelon = echelon;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Bureaucrat::~Bureaucrat()
{

}

//!------------------------------OPERATOR-------------------------------------

Bureaucrat	&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::string *tmp;
	
	tmp = const_cast <std::string *>(&this->name);
	*tmp = copy.name;
	this->echelon = copy.echelon;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade to hight";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade to low";
}

void	Bureaucrat::up_grade(int nb)
{
	if (echelon - nb < 1)
		throw GradeTooHighException();
	else
		echelon = echelon - nb;
}

void	Bureaucrat::down_grade(int nb)
{
	if (echelon + nb > 150)
		throw GradeTooLowException();
	else
		echelon = echelon + nb;
}

const std::string	&Bureaucrat::getName() const
{
	return (name);
}

const int	&Bureaucrat::getGrade() const
{
	return (echelon);
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (stream);
}
