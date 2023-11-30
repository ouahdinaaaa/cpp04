/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:58:54 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 22:58:54 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Grrrrrrr")
{
    std::cout << "WrongAnimal :: Default constructor Callded !!! " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal :: Default Destructot Called !!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    *this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
    if (this != &animal)
        this->type = animal.type;
    return *this;
}

void       WrongAnimal::makeSound(void)const
{
    std::cout << "WrongAnimal :: Default sounds :" << type << std::endl;
}
