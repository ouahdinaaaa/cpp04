/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:08 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/30 14:52:35 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Grrrrrrrr")
{
    std::cout << "Animal :: Default constructror !!!!" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal :: Default destructor Called !!!!";
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal :: You are :" << this->type << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal :: Default constrcutor copy called !!!" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal :: Assigment copy Called !!!!"  << std::endl;
    if (this != &animal)
        this->type = animal.type;
    return (*this);
}