/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:26:34 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/30 22:10:13 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog:: Default constructor Called !!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog:: Default destructor Called !!!!" << std::endl;   
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog:: Default Copy constrctor Called !!!!" << std::endl;
    *this = dog;
}

Dog&    Dog::operator=(const Dog &dog)
{
    std::cout << "Dog:: Default assignment copy Called !!!" << std::endl;
    if (this != &dog)
        this->type = dog.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouuuuuuf !!!" << std::endl;
}