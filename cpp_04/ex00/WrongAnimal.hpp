/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:42:00 by yschecro          #+#    #+#             */
/*   Updated: 2023/03/21 18:40:22 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
	protected:
		std::string type;
	private:
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &new_animal);
		~WrongAnimal();
		WrongAnimal operator=(const WrongAnimal &right);
		std::string getType() const;
		void makeSound() const;
};

#endif
