/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:26:34 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 22:31:54 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << RED << "🐶 Dog:: Default constructor Called !!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << RED << "😵 Dog:: Default destructor Called !!!!" << std::endl;   
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << RED << "🐶 Dog:: Default Copy constrctor Called !!!!" << std::endl;
    *this = dog;
}

Dog&    Dog::operator=(const Dog &dog)
{
    std::cout << RED << "🐶 Dog:: Default assignment copy Called !!!" << std::endl;
    if (this != &dog)
        this->type = dog.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << RED << "🐶 Wouuuuuuf !!!" << std::endl;
}