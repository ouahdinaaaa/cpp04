/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:29:21 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 18:27:02 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    int i = -1;
    while (++i < 4)
        this->inventory[i] = nullptr;
}

ICharacter::ICharacter(std::string const &name) : name(name)
{
    int i = -1;
    while (++i < 4)
        this->inventory[i] = nullptr;
}

ICharacter::~ICharacter()
{
    
}

std::string const &ICharacter::getName() const
{
    return this->name;
}

void    ICharacter::equip(AMateria* m)
{
    int i = -1;
    while (++i < 4){
        if (this->inventory[i] == nullptr){
            inventory[i] = m;
            break;
        }
    }
    
}

void    ICharacter::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = nullptr;   
}

void    ICharacter::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->inventory[idx] != nullptr){
        this->inventory[idx]->use(target);
    }
}