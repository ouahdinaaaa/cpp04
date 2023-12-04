/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:26:34 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 22:06:24 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << RED << "🐶 Dog(void):: Default constructor Called !!!" << std::endl;
    this->braiin = new Brain();
    if (!this->braiin){
        std::cout << "niette get out" << std::endl;
        exit(1);
    }
}

Dog::Dog(std::string name) : Animal((name)), braiin(new Brain())
{
    std::cout << RED << "🐶 Dog:: [" << name << "] Constructor Called !!!" << std::endl;
}

Dog::~Dog()
{
    delete  this->braiin;
    std::cout << RED << "🐶 Dog:: Default destructor Called !!!!" << std::endl;   
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << RED << "🐶 Dog:: Default Copy constrctor Called !!!!" << std::endl;
    this->braiin = new Brain(*dog.braiin);
}

Dog&    Dog::operator=(const Dog &dog)
{
    std::cout << RED << "🐶 Dog:: Default assignment copy Called !!!" << std::endl;
    if (this != &dog){
        this->type = dog.type;
        this->braiin = new Brain(*dog.braiin);
        if (!this->braiin){
            std::cout << "Bad allocation" << std::endl;
            exit (1);
        }
    }
    return (*this);
}

Brain *Dog::getBrain(void)const {
    return this->braiin;
}

void    Dog::makeSound(void) const
{
    std::cout << RED << "Wouuuuuuf !!!" << std::endl;
}
