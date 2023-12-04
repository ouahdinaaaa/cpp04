/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:06:27 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 11:06:27 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
# define GREEN "\033[32m"
# define RESET "\033[1;97m"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &objs) : AMateria(objs)
{

}

Cure::~Cure(){

}

Cure &Cure::operator=(const Cure &objs)
{
    this->AMateria::operator=(objs);
    return *this;
}


AMateria *Cure::clone()const
{
    return new Cure(*this);
}

void    Cure::use(ICharacter &target)
{
    std::cout << GREEN << "*❤️‍🩹 heals " << target.getName() << "'s wounds ❤️‍🩹*" << RESET << std::endl;
}