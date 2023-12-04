/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:34:38 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 21:51:05 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("cat")
{
    std::cout << MAGENTA << "😸 Cat(void):: Default constructor Called !!!" << std::endl;
    this->braiin = new Brain();
    if (!this->braiin){
        std::cout << "rateer " << std::endl;
        exit(1);
    }
}

Cat::Cat(std::string type) : Animal(type), braiin(new Brain())
{
    std::cout << MAGENTA << "😸 Cat:: [" << type << "] Constructor Called" << std::endl;
}

Cat::Cat(const Cat &miaou) : Animal(miaou)
{
    std::cout << MAGENTA << "😸 Cat:: Copy constructor Called on " << miaou.getType() << "!!!" << std::endl;
    this->braiin = new Brain(*miaou.braiin);
}

Cat::~Cat()
{
    delete this->braiin;
    std::cout << MAGENTA << "😵 Cat:: Default destructor Called !!!" << std::endl;
}

Cat &Cat::operator=(const Cat &miaou)
{
    std::cout << MAGENTA << "😸 Cat:: Assignement copy Called !!!!" << std::endl;
    if (this != &miaou)
    {
        this->type = miaou.type;
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
    std::cout << MAGENTA << " 😸 Miaouuuuuu 😸" << std::endl;
}

Brain *Cat::getBrain()const
{
    return this->braiin;
}