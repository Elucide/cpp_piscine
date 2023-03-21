/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:03:36 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:29:30 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "<CAT> Default constructor called" << std::endl;
}

Cat::Cat(const Cat &new_cat) : Animal(new_cat)
{
	std::cout << "<CAT> Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "<CAT> Default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIOU MIOU MIOUUUUUUUU" << std::endl;
}
