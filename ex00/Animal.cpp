/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:08 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/30 22:07:02 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "ouahdina";
    std::cout << "Animal :: Default constructor Called !!!" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal:: Default destructor constructor Called !!!" << std::endl;
}

Animal::Animal(const Animal &_animal)
{
    std::cout << "Animal:: Default copy constructor Called !!!" << std::endl;
    *this = _animal;
}

Animal  &Animal::operator=(const Animal &_animal)
{
    std::cout << "Animal:: Default Assignement copy Called !!!!" << std::endl;
    if (this != &_animal)
        this->type = _animal.type;
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal :: Yeaaaah  :" << this->type << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}