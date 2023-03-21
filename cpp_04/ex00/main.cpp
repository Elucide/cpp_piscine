/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:57:41 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:47:06 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();


	const WrongAnimal *WA = new WrongAnimal(); 
	const WrongAnimal *WC = new WrongCat(); 

	WA->makeSound();
	WC->makeSound();


	delete WA;
	delete WC;
	delete meta;
	delete i;
	delete j;

	return (0);
}
