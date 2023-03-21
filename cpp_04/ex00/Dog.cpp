/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:03:36 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:29:03 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "<DOG> Default constructor called" << std::endl;
}

Dog::Dog(const Dog &new_dog) : Animal(new_dog)
{
	std::cout << "<DOG> Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "<DOG> Default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "OUAF OUAF OUAAAAAAAAAAF" << std::endl;
}
