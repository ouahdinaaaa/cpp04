/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:08 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 22:04:12 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "ouahdina";
    std::cout << ROSE << "🐾 Animal :: Default constructor Called !!!" << std::endl;
}

Animal::Animal(std::string name)
{
    this->type = name;
    std::cout << ROSE << "🐾 Animal :: Default constructor Called !!!" << std::endl;
}


Animal::~Animal(){
    std::cout << ROSE << "🐾 Animal:: Default destructor constructor Called !!!" << std::endl;
}

Animal::Animal(const Animal &_animal)
{
    std::cout << ROSE << "🐾 Animal:: Default copy constructor Called !!!" << std::endl;
    *this = _animal;
}

Animal  &Animal::operator=(const Animal &_animal)
{
    std::cout << ROSE << "🐾 Animal:: Default Assignement copy Called !!!!" << std::endl;
    if (this != &_animal)
        this->type = _animal.type;
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << ROSE << "🐾 Animal :: Yeaaaah  :" << this->type << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}