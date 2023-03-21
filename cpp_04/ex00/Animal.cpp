/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:47:17 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:30:06 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const
{
	return (this->type);
}

Animal::Animal()
{
	std::cout << "<ANIMAL> Default constructor called" << std::endl;
	this->type = "default";
}

Animal::Animal(const Animal &right)
{
	std::cout << "<ANIMAL> Copy constructor called" << std::endl;
	this->type = right.type;
}

Animal::~Animal()
{
	std::cout << "<ANIMAL> Default destructor called" << std::endl;
}

Animal Animal::operator=(const Animal &right)
{
	this->type = right.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}
