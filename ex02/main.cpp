/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:38:39 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 17:38:29 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	Cat cat;
	Dog dog;

	Animal *animal = &cat;
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

*/