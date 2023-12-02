/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:38:39 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/02 16:56:28 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal *animal;
	Cat cat;
	Dog dog;

	animal = &cat;
	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	animal = &dog;
	std::cout << animal->getType() << std::endl;
	animal->makeSound();

	return 0;
}

/*  Poceder erronee

attendu :
			Animal
			Cat
			Brain
Resulat :

			Animal
			Brain
			Cat
pour code du dog bon

/--------------------------------------------/

Proceder destruction faux

Attendu :
		Dog
		Brain
		Animal

resultat:
		Brain
		Dog
		Animal
A regler dans les deux exo:
*/