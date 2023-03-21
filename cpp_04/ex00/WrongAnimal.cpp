/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:47:17 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:46:31 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::WrongAnimal()
{
	std::cout << "<WRONGANIMAL> Default constructor called" << std::endl;
	this->type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &right)
{
	std::cout << "<WRONGANIMAL> Copy constructor called" << std::endl;
	this->type = right.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "<WRONGANIMAL> Default destructor called" << std::endl;
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal &right)
{
	this->type = right.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}
