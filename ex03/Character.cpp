/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:28:56 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 18:19:32 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(const std::string &name) : name(name)
{
    int i = -1;
    while (++i < 4)
        this->_materia[i] = NULL;
}

Character::~Character()
{
    int i = -1;
    while (++i < 4){
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    }
}

Character::Character(const Character &objs) : name(objs.name)
{
    int i = -1;
    while (++i < 4){
        if (objs._materia[i])
            this->_materia[i] = objs._materia[i]->clone();
        else
            this->_materia[i] = NULL;
    }
}

Character &Character::operator=(const Character &objs)
{
    if (this != &objs)
    {
        this->~Character();
        this->name = objs.name;
        int i = -1;
        while (i < 4){
            if (objs._materia[i])
                this->_materia[i] = objs._materia[i]->clone();
            else
                this->_materia[i] = NULL;
        }
    }
    return (*this);
}

std::string const &Character::getName()const
{
    return this->name;
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->_materia[idx] = NULL;
}

void    Character::equip(AMateria *m)
{
    int i = -1;
    while (++i < 4){
        if (!this->_materia[i]){
            this->_materia[i] = m;
            break; ;
        }
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_materia[idx])
        this->_materia[idx]->use(target);
}