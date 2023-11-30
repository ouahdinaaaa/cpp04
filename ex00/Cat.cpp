/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:34:38 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/30 22:09:15 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat"; 
    std::cout << "Cat:: Default constructor Called !!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat:: Default destructor Called !!!" << std::endl;
}

Cat::Cat(const Cat &miaou) : Animal(miaou)
{
    std::cout << "Cat:: Default copy constructor Called !!!" << std::endl;
    *this = miaou;
}

Cat &Cat::operator=(const Cat &miaou)
{
    std::cout << "Cat:: Assignement copy Called !!!!" << std::endl;
    if (this != &miaou)
        this->type = miaou.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaouuuuuu" << std::endl;
}