/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:11:45 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 22:06:53 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int index = 0;
    while (index < 100){
        this->ideas[index] = "default";
        index++;
    }
    std::cout << BLUE << "🧠 Brain :: Default constructor Called !!!" << std::endl;
}

Brain::Brain(std::string name)
{
    int index = 0;
    while (index < 100){
        this->ideas[index] = name;
        index++;
    }
    std::cout  << BLUE << "🧠 Brain :: Default constructor Called !!!" << std::endl;
}

Brain::~Brain()
{
    std::cout << BLUE << "🧠 Brain :: Default destrcutor Called !!!" << std::endl;
}

Brain::Brain(const Brain &objet)
{
    std::cout << BLUE << "🧠 Brain :: Default copy constructor Called !!!" << std::endl;
    *this = objet;
}

void    Brain::AddIdeas(int index, const std::string ideaaa)
{
    if (index >= 0 && index < 10)
        this->ideas[index] = ideaaa;
    
}

std::string Brain::getIdea(int index) const
{
    return this->ideas[index];
}

Brain   &Brain::operator=(const Brain &object)
{
    int index = 0;
    std::cout << BLUE << "🧠 Brain :: Default assignement copy Called !!!!" << std::endl;
    if (this != &object)
    {
        while (index < 100){
            this->ideas[index] = object.ideas[index];
            index++;
        }
    }
    return *this;
}