/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:08 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 22:29:42 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "not animals";
}

Animal::~Animal(){
    
}

void    Animal::makeSound(void) const
{
    std::cout << "tes un :" << this->type << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}