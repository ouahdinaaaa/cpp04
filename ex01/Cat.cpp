/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:34:38 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/01 19:12:51 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("cat")
{
    this->braiin = new Brain();
    if (!this->braiin){
        std::cout << "rateer " << std::endl;
        exit(1);
    }
    std::cout << "Cat:: Default constructor Called !!!" << std::endl;
}

Cat::~Cat()
{
    delete this->braiin;
    std::cout << "Cat:: Default destructor Called !!!" << std::endl;
}

Cat::Cat(const Cat &miaou)
{
    std::cout << "Cat:: Default copy constructor Called !!!" << std::endl;
    *this = miaou;
}

Cat &Cat::operator=(const Cat &miaou)
{
    std::cout << "Cat:: Assignement copy Called !!!!" << std::endl;
    if (this != &miaou)
    {
        this->type = miaou.type;
        if (this->braiin)
        {
            delete this->braiin;
            this->braiin = NULL;
        }
        this->braiin = new Brain(*miaou.braiin);
        if (!this->braiin){
            std::cout << "failed alloc" << std::endl;
            exit(1);
        }
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaouuuuuu" << std::endl;
}


Brain *Cat::getBrain()const
{
    return this->braiin;
}