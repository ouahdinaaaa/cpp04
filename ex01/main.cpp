/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:38:39 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 21:52:07 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << RED << "🐶 " << j->getType() << " " << std::endl;
	std::cout << MAGENTA << "😸 " << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	return 0;
}


/*
		Prblm dans creation : 
		Animal
		Dog
		brain

		Attendu :
		Animal 
		Brain 
		Dog


	voir cat car constructor de cat le fait tres bien...
*/