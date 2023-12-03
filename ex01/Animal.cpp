/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:08 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 16:58:49 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal(void):: constructor Called !!!" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
    std::cout << "Animal :: [" << name << "] constructor Called !!!" << std::endl;
}


Animal::Animal(const Animal &_animal) 
    : type(_animal.getType())
{
    std::cout << "Animal:: [" << _animal.getType() << "]Default copy constructor Called !!!" << std::endl;
}

Animal  &Animal::operator=(const Animal &_animal)
{
    if (this != &_animal)
        this->type = _animal.type;
    std::cout << "Animal:: [" << _animal.getType() << "] Default Assignement copy Called !!!!" << std::endl;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal:: destructor constructor Called to " << this->type << "!!!" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal :: [" << this->type << "] souuund !!!" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}