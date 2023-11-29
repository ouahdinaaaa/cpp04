/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:26:34 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 20:23:26 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
}

Dog::~Dog()
{
    
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

Dog&    Dog::operator=(const Dog &dog)
{
    if (this != &dog)
        this->type = dog.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouuuuuuf !!!" << std::endl;
}