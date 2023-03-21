/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:42:00 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:55:00 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &new_animal);
		virtual ~Animal();
		Animal operator=(const Animal &right);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
