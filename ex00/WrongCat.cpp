/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 23:22:32 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 23:22:32 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat:: Default constructor Called !!!!" << std::endl;
    this->type = "ouahdina";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat:: Default destructor Called !!!" << std::endl;
}


WrongCat::WrongCat(const WrongCat &objet) : WrongAnimal(objet)
{
    std::cout << "WrongCat:: Default copy constructor Called !!!";
    *this = objet;
}

WrongCat    &WrongCat::operator=(const WrongCat &objet)
{
    std::cout << "WrongCat:: Default copy Assignment Called" << std::endl;
    if (this != &objet)
        this->type = objet.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    WrongAnimal::makeSound();
    std::cout << "WrongCat :: makeSound " << std::endl;
}