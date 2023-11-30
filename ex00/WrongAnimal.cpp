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

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal:: Default constructor Called !!!" << std::endl;
    this->type = "ouahdina";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal:: Default destructor Called !!!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &objet)
{
    std::cout << "WrongAnimal:: Default copy constructor Called !!!" << std::endl;
    *this = objet;
}

WrongAnimal     &WrongAnimal::operator=(const WrongAnimal &objet)
{
    std::cout << "WrongAnimal:: Default Assignement copy Called !!!!" << std::endl;
    if (this != &objet)
        this->type = objet.type;
    return (*this);
}

void       WrongAnimal::makeSound(void)const
{
    std::cout << "WrongAnimal:: sound of you " << std::endl;
}