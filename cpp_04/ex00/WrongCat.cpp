/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:03:36 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:43:26 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "<WRONGCAT> Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &new_cat) : WrongAnimal(new_cat)
{
	std::cout << "<WRONGCAT> Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "<WRONGCAT> Default destructor called" << std::endl;
}
