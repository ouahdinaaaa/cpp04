/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:34:38 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 20:23:00 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
}

Cat::~Cat()
{
}

Cat::Cat(const Cat &miaou)
{
    *this = miaou;
}

Cat &Cat::operator=(const Cat &Miaou)
{
    if (this != &Miaou)
        this->type = Miaou.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaouuuuuu" << std::endl;
}